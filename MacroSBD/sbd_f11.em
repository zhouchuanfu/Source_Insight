
macro Note()
{
	//_TempHeadF11(hbuf)
    hwnd = GetCurrentWnd()
    hbuf = GetCurrentBuf()
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}
	
	sel = MGetWndSel(hbuf)
	isN = FALSE  //ѡ��->��ʾ��ע ������;���󣬸�Ϊֻ��mk,mak,def�ļ�����
	if(IsMakeFile(hbuf))
	{
		isN = TRUE
	}
	if (isN && IsSingleSelect(sel))
	{
		//1. ѡ��������,     ��ʾ�����Ӻ�˵��
		//2. ѡ�񲿷ֹؼ���,    ��ʾ�����Ӵ�˵��; 
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		if(strlen(cur_line) < sel.ichLim)
			sel.ichLim = sel.ichLim - 1
		if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
			stop
			
		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)
		if(cur_sel == GetWholeMacro(cur_line, sel))
		{
			LongNote(hbuf, cur_sel)
		}
		else
		{
			ShortNote(hbuf, cur_sel)
		}
	}
	else if(isN && IsMoreSelect(sel))
	{
		//3. ��ѡ�����
		//	LCD_NV3029G_SANLONG_CPT2	= TRUE
		//	LCD_GC9306_YIHUA_HSD      = TRUE
		//	LCD_GC9305_SANLONG_HSD2 = TRUE
		//��ʾ:
		//	NV3029G	����+CPT
		//	GC9306	�ڻ�
		//	GC9305	����+HSD
		//��ȷ�ϣ������������ݵ����а壬��ճ��������˵�����С�
		nTxt = ""
		i = sel.lnFirst
		while (i <= sel.lnLast)
		{
			line = GetBufLine(hbuf, i)
			iMacro = GetLineMacro(line)
			iNote = GetMediumNote(iMacro)
			
			if(iNote != "")
			{
				nTxt = nTxt # iNote # CharFromKey(13)
			}
			i = i + 1
		}
		if(nTxt != "")
		{
			msg("@nTxt@")
			SetClipString(nTxt)
		}
	}
	else
	{
		hprj = GetCurrentProj ()
		if(hprj>0)
		{
			path = GetProjDir (hprj)
			bft = getBaseFileType(path, 3)
			if(bft == "")
				stop
			mFile = getNodePath(0) # "\\note\\Macro_Note_@bft@.h"
		
			if(IsFileName(hbuf, "Macro_Note_"))
			{
				hwnd = GetCurrentWnd()
				lnTop = GetWndVertScroll(hwnd);
				SaveMode(getWndVertRow(0), "@lnTop@")
				close
			}
			else
			{
				lnTop = ReadMode(getWndVertRow(0))
				OpenExistFileRow(mFile, lnTop)
			}
		}
	}
}

macro LongNote(hbuf, key)
{
	//_TempHeadF11(hbuf)
	nTxt = GetLongNote(key)
	if(nTxt == "")
	{
		nTxt = GetMediumNote(key)
	}
	if(nTxt != "")
	{
		ntStr = "@key@:" # CharFromKey(13)
		ntStr = ntStr # nTxt # CharFromKey(13)
		msg("@ntStr@")
		SetClipString(nTxt)
	}
	else //add noto
	{
		grMsg = "Add Long Note, Macro: @key@" # CharFromKey(13)
		ntStr = Ask("@grMsg@")
		
		ntRule = OpenCache(getNodePath(0) # "\\note\\Macro_Note_Long.h")
		ntStr = "key:@key@,@ntStr@"
		AppendBufLine(ntRule, "@ntStr@")
		SaveBuf(ntRule)
		CloseBuf(ntRule)
	}
}

macro GetLongNote(key)
{
	//_TempHeadF11(hbuf)
	mFile = getNodePath(0) # "\\note\\Macro_Note_Long.h"
	mBuf = OpenCache(mFile)
	mKey = "key:" # key # ","
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	nTxt = ""

	while (mSel != "")
	{
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
		
		ich = SplitMacro(line, ",", 0, ilen)		
		nTxt   = strmid(line, ich + 1, ilen) # CharFromKey(13)
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)
	}
	CloseBuf(mBuf)
	return nTxt
}

macro GetMediumNote(key)
{
	//_TempHeadF11(hbuf)
	mFile = getNodePath(0) # "\\note\\Macro_Note_Short.h"
	mBuf = OpenCache(mFile)
	nTxt = ""
	
	klen = strlen(key)
	iStart = 0
	ichKey = SplitMacro(key, "_", iStart, klen)
	while (1)
	{
		if(ichKey >= 0)
		{
			ikey = strmid(key, iStart, ichKey)
		}
		else
		{
			ikey = strmid(key, iStart, klen)
		}
		iStart = ichKey + 1
		
		mKey = "key:" # ikey # ","
		mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
		if (mSel != "")
		{
			line = GetBufLine(mBuf, mSel.lnFirst )
			ilen = strlen(line)
			
			ich = SplitMacro(line, ",", 0, ilen)
			if (ich > 0)
			{
				nTxt = nTxt # strmid(line, ich + 1, ilen)
			}
		}
		if(ichKey < 0)
		{
			break
		}
		ichKey = SplitMacro(key, "_", iStart, klen)
	}
	CloseBuf(mBuf)
	return nTxt
}

macro ShortNote(hbuf, key)
{
	//_TempHeadF11(hbuf)
	nTxt = GetShortNote(key)
	if(nTxt != "")
	{
		ntStr = "@key@:" # CharFromKey(13)
		ntStr = ntStr # nTxt # CharFromKey(13)
		msg("@ntStr@")
		SetClipString(nTxt)
	}
	else //add noto
	{
		grMsg = "Add Short Note, Macro: @key@" # CharFromKey(13)
		ntStr = Ask("@grMsg@")
		tabStr = CharFromKey(9)
		
		ntRule = OpenCache(getNodePath(0) # "\\note\\Macro_Note_Short.h")
		ntStr = "key:@key@,@tabStr@@ntStr@"
		AppendBufLine(ntRule, "@ntStr@")
		SaveBuf(ntRule)
		CloseBuf(ntRule)
	}
}

macro GetShortNote(key)
{
	//_TempHeadF11(hbuf)
	mFile = getNodePath(0) # "\\note\\Macro_Note_Short.h"
	mBuf = OpenCache(mFile)
	mKey = "key:" # key # ","
	mSel = SearchInBuf(mBuf, key, 0, 0, FALSE, FALSE, FALSE)
	nTxt = ""

	if (mSel != "")
	{
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
		
		ich = SplitMacro(line, ",", 0, ilen)
		if (ich > 0)
		{
			nTxt   = strmid(line, ich + 1, ilen)
		}
	}
	CloseBuf(mBuf)
	return nTxt
}

//Note press F5,F6
macro NoteHander(hbuf, cNum)
{
	var noteCmd
	var noteWord
	
	sel = MGetWndSel(hbuf)
	cur_line = GetBufLine(hbuf, sel.lnFirst )
	cur_row = sel.ichFirst

	start = StartWS(cur_line, 0 )
	if (start == "X")
	{
		stop
	}
	else if (start > 0)
	{
		//delete left
		cur_line = strmid(cur_line, start, strlen(cur_line))
	}
	len = strlen(cur_line)
	
	//�õ�1������Ϊ��������;��":"��" "�ֿ�
	//{0,index} Ϊ����
	indexa = FindString(cur_line, ":")
	indexb = FindString(cur_line, " ")	
	if (indexa == "X" && indexb == "X")
	{
		index = len
	}
	else if (indexa == "X")
	{
		index = indexb
	}
	else if (indexb == "X")
	{
		index = indexa
	}
	else if (indexa>indexb)
	{
		index = indexb
	}
	else
	{
		index = indexa
	}
	
	//msg(start # ";" # index)
	noteCmd = strmid(cur_line, 0, index)

	//����˵����
	//open:    �����ʼ�; ��exe; ���ļ�+�ؼ���; ��Macro_��ͷ�ļ���ֻ����������ļ�
	//openCmd:
	//cmd:     ����cmd���� ������cmd
	//make:    ����cmd����
	//python:  ����cmd����
	//ctmake:  ������cmd����, ֻ����
	//xmake:   ������cmd����, ֻ����
	//vc:      
	//vs08:    
	//call:    ������cmd����, ֻ����
	//set: 
	//setPath: 
	//setProPath: 
	//sethistory: 
	//cp:      �����ļ�
	//Ĭ��:
	//

	//msg(noteCmd # ";")
	if(noteCmd == "replace") // no use
	{
		//��ת�����ƶ�Ӧ������/��
		cur_line = GetClipString(hbuf)
	}
	else if(noteCmd == "open")
	{
		//open tools or file
		//������ת��: ɾ���ո�
		start = GetTransCmdS(cur_line, index + 1, len)
		next  = GetTransCmdE(cur_line, start,     len)
		start2 = GetTransCmdS2(cur_line, next + 1, len)
		vcPath = strmid(cur_line, start, next)
		lastStr = GetTransStr(cur_line, start2, len)

		//�ļ���ת��:
		//ת��"Save:"�����ָ�Ŀ¼��������ĿĿ¼���滻"^"Ϊ�ո�
		vcPath = GetTransFileName(hbuf, vcPath, cNum)
		
		//.exe .bat file
		if(IsFileType(vcPath, ".exe") || IsFileType(vcPath, ".bat"))
		{
			ShellExecute("open", vcPath, "", "", 1)
		}
		else if(cNum == 51)
		{
			//��ϸ�ʼǣ�û�оʹ���
			bf = OpenFile(vcPath)
		}
		else
		{
			vcbuf = OpenExistFile(vcPath)
				
			if (vcbuf != hNil){
				if (lastStr != "")
				{
					mSel = SearchInBuf(vcbuf, "@lastStr@", 0, 0, 0, 0, 0)
					if (mSel != "")
					{
						ScrollCursor(mSel)
					}
				}
			}
		}
	}
	else if(noteCmd == "openCmd")
	{
		//������cmd���治��Ҫ��·��
		ShellExecute("open", getBasePath(hbuf) # "\\cmd", "", "", 1)
	}
	else if(noteCmd == "cmd")
	{
		//������ת��: ɾ���ո�
		start = GetTransCmdS(cur_line, index + 1, len)
		lastCmd = strmid(cur_line, start, len)
		
		hbufClip = GetBufHandle("Clipboard")
		if (hbufClip != hNil)
		{
			EmptyBuf(hbufClip)
			AppendBufLine(hbufClip, "@lastCmd@")
			CloseBuf(hbufClip)
		}
		ShellExecute("open", getBasePath(hbuf) # "\\cmd", "", "", 1)
	}
	else if(noteCmd == "make" || noteCmd == "python")
	{
		//������cmd���治��·��
		lastCmd = strmid(cur_line, start, len)
		hbufClip = GetBufHandle("Clipboard")
		if (hbufClip != hNil)
		{
			EmptyBuf(hbufClip)
			AppendBufLine(hbufClip, "@lastCmd@")
			CloseBuf(hbufClip)
		}
		ShellExecute("open", getBasePath(hbuf) # "\\cmd", "", "", 1)
	}
	else if(noteCmd == "ctmake" || noteCmd == "xmake")
	{
		//������cmd���治��·��
		lastCmd = strmid(cur_line, start, len)
		hbufClip = GetBufHandle("Clipboard")
		if (hbufClip != hNil)
		{
			EmptyBuf(hbufClip)
			AppendBufLine(hbufClip, "@lastCmd@")
			CloseBuf(hbufClip)
		}
		//Cygwin...
	}
	else if(noteCmd == "vc")
	{
		vcPath = getVCPath(0)
		lastCmd = strmid(cur_line, index + 1, len)
		ShellExecute("open", vcPath, getBasePath(hbuf) # "\\" # lastCmd, "", 1)
	}
	else if(noteCmd == "vs08")
	{
		vcPath = getVS08Path(0)
		lastCmd = strmid(cur_line, index + 1, len)
		ShellExecute("open", vcPath, getBasePath(hbuf) # "\\" # lastCmd, "", 1)
	}
	else if(noteCmd == "call")
	{
		lastCmd = strmid(cur_line, index, len)
		hbufClip = GetBufHandle("Clipboard")
		if (hbufClip != hNil)
		{
			EmptyBuf(hbufClip)
			AppendBufLine(hbufClip, "@lastCmd@")
			CloseBuf(hbufClip)
		}
	}
	else if(noteCmd == getMarBasePath(0)) //"basePath"
	{
		//android service path: basePath = F:\9820e 
		lnVar = GetLineValue(cur_line)
		SaveMode(getNoteBasePath(0), "@lnVar@")
		pmsg = "Set Ok : " # CharFromKey(13) # lnVar
		msg(pmsg)
	}
	else if(noteCmd == "set")
	{
		//lastCmd:��set�����str
		lastCmd = strmid(cur_line, index+1, len)
		//���б��滻Ϊ���б�,�ո�ֿ� 
		SetNoteHander(hbuf, lastCmd, cur_row)
		//save
		SaveNoteHistory(cur_line)
	}
	else if(noteCmd == "setPath")
	{
		//��ʽ: setPath old #ע��
		//������ת��: ɾ���ո�
		start = GetTransCmdS(cur_line, index + 1, len)
		next  = GetTransCmdE(cur_line, start,     len)
		cmdStr = strmid(cur_line, start, next)
		//��ʼ·���б��滻
		SetPathNoteHander(hbuf, cmdStr)
	}
	else if(noteCmd == "setProPath")
	{
		msg("setPath���滻�б�, ��ʱ�������滻")
	}
	else if(noteCmd == "sethistory")
	{
		SetNoteHistory(hbuf)
	}
	else if(noteCmd == "cp")
	{
		//������ת��: ɾ���ո�
		start = GetTransCmdS(cur_line, index + 1, len)
		next  = GetTransCmdE(cur_line, start,     len)
		start2 = GetTransCmdS(cur_line, next + 1, len)
		cmdP1 = strmid(cur_line, start, next)
		cmdP2 = strmid(cur_line, start2, len)
		
		NoteCopyFile(hbuf, cmdP1, cmdP2, cNum)
	}
	else if(strlen(noteCmd)>0)
	{
		curPath = ""
		if(strlen(noteCmd)==1)
		{
			ch = strmid(noteCmd,0,1)
			asi = AsciiFromChar(ch)
			if(asi>=65 && asi<65+14 || asi>=97 && asi<97+14)
			{
				start = GetTransCmdS(cur_line, index + 1, len)
				next  = GetTransCmdE(cur_line, start,     len)
				//start2 = GetTransCmdS(cur_line, next + 1, len)
				curPath = strmid(cur_line, 0, next)
				//cmdP2 = strmid(cur_line, start2, len)
			}
		}
		else if(noteCmd == "Save")
		{
			start = GetTransCmdS(cur_line, index + 1, len)
			next  = GetTransCmdE(cur_line, start,     len)
			//start2 = GetTransCmdS(cur_line, next + 1, len)
			curPath = strmid(cur_line, 0, next)
			//cmdP2 = strmid(cur_line, start2, len)
		}
		//�Ǹ�Ŀ¼
		if(curPath == "")
			curPath = noteCmd
		//�ļ���ת��:
		//ת��"Save:"�����ָ�Ŀ¼��������ĿĿ¼���滻"^"Ϊ�ո�
		curPath = GetTransFileName(hbuf, curPath, cNum)
		
		hbuf = OpenExistFile(curPath)
			
		if (hbuf != hNil){
			//����":"λ��, �ÿո�ָ�
			index = indexb
			if (index == "X" || index == len)
			{
				stop
			}
			start = GetTransCmdS(cur_line, index + 1, len)
			next  = GetTransCmdE(cur_line, start,     len)
			//start2 = GetTransCmdS(cur_line, next + 1, len)
			//cmdP1 = strmid(cur_line, start, next)
			//cmdP2 = strmid(cur_line, start2, len)

		
			//����value�����а�
			otherWord = strmid(cur_line, start, len)
			lnVar = GetLineValue(otherWord)
			if(lnVar != "")
			{
				SetClipString(lnVar)
			}
			

			//goto word and selete
			noteWord = strmid(cur_line, start, next)
			//use "^" as space
			noteWord = ReplaceWord(noteWord, "^", " ")

			//������������
			mSel = SearchInBuf(hbuf, "^" # "@noteWord@", 0, 0, 0, 1, 0)
			if (mSel == "")
			{
				mSel = SearchInBuf(hbuf, "@noteWord@", 0, 0, 0, 0, 0)
			}
			if (mSel != "")
			{
				ScrollCursor(mSel)
			}
		}
		else
		{
			//�ļ���ʧ��, ��ΪĿ¼��
			ret = ShellExecute("explore", curPath, "", "", 1)
			//Ŀ¼��ʧ��
			if(ret == 0){
				pmsg = "Open failed : " # CharFromKey(13) # curPath
				//�������ʾ
				//msg(pmsg)

				mI = RFindString(curPath, "Macro_")
				if(mI != "X")
				{
					//��Ĭ���ļ��������ļ�
					strDefFile = strmid(curPath, 0, mI) # "Macro_z_null.h"
					isF = IsExistFile(strDefFile)
					if(!isF)
						strDefFile = getNodePath(0) # "\\Macro_z_null.h"

					cmdStr = "copy " # strDefFile # " " # curPath
					msg(cmdStr)
					ShellOpenCustomCmd(cmdStr)
				}
				else
				{
					msg(pmsg)
				}
			}
		}
	}

}

//���б��滻Ϊ���б�,�ո�ֿ�
macro SetNoteHander(hbuf, lastCmd, cur_row)
{
	//msg("-" # lastCmd # "-")
	lastBaseCmd = ReadMode(getNoteHanderSet(0))
	if(lastBaseCmd == lastCmd)
		stop
	SaveMode(getNoteHanderSet(0), "@lastCmd@")
	
	{
		//������־
		noteWord = "setEnd:"
		mSel = SearchInBuf(hbuf, "@noteWord@", 0, 0, 0, 0, 0)
		if (mSel != "")
		{
			cur_row = mSel.lnFirst
		}
		else
		{
			cur_row = cur_row + 8
		}
	}
	
	len = strlen(lastCmd)
	lenB = strlen(lastBaseCmd)
	if (0 == len || 0 == lenB)
		stop
	i = 0
	iB = 0
	while (1)
	{
		//���¾��б����滻�ַ�
		next = NextWS(lastCmd, i)
		nextB = NextWS(lastBaseCmd, iB)
		//msg("-" # lastBaseCmd # "-" # next # "-" # nextB # "-")
		if (next == "X" || nextB == "X")
		{
			//���һ���滻
			next = len
			nextB = lenB
			noteWord = strmid(lastCmd, i, next)
			noteWordB = strmid(lastBaseCmd, iB, nextB)
			DoReplaceRow(hbuf, noteWordB, noteWord, cur_row + 1, FALSE)
			SaveBuf(hbuf) //�����α���, �����������
			break
		}
		else
		{
			noteWord = strmid(lastCmd, i, next)
			noteWordB = strmid(lastBaseCmd, iB, nextB)
			DoReplaceRow(hbuf, noteWordB, noteWord, cur_row + 1, FALSE)
			SaveBuf(hbuf) //�����α���, �����������
		}
		start = StartWS( lastCmd, next )
		startB = StartWS( lastBaseCmd, nextB )
		i = start
		iB = startB
	}
}

//���б��滻Ϊ���б�,�ո�ֿ�
macro SetPathNoteHander(hbuf, cmdStr)
{
	var setItem
	
	{
		//������־
		mKey = "setEnd:"
		mSel = SearchInBuf(hbuf, "@mKey@", 0, 0, 0, 0, 0)
		if (mSel != "")
		{
			cur_row = mSel.lnFirst
		}
		else
		{
			cur_row = cur_row + 8
		}
	}
	{
		//��Ŀ·�� (�ϲ��������滻����)
		mKey = "CurProPath"
		curProPath = getMacroValue(hbuf, mKey, 1)
	}

	//�����滻�б�, �������ע�͵�
	mKey = "^" # "setProPath"
	lenKey = strlen("setProPath")
	mSel = SearchInBuf(hbuf, mKey, 0, 0, FALSE, TRUE, FALSE)
	nTxt = ""

	setItem = ""
	while (mSel != "")
	{
		line = GetBufLine(hbuf, mSel.lnFirst )
		ilen = strlen(line)

		//��һ���ǿ�
		start = StartWS(line, lenKey)
		if (start != "X")
		{
			setItem = strmid(line, start, strlen(line))
			lnMar = GetLineMacro(setItem)
			lnVar = curProPath # "\\\\" # GetLineValue(setItem)
			
			if (cmdStr == "new")
			{
			 	//·����������б��
				lnMar = "^" # ReplaceWord(lnMar, "\\\\", "[\\\\/]")
				
			 	//�滻����ȥ��һ����б��
				lnVar = ReplaceWord(lnVar, "\\\\", "\\")
				
				//msg("[" # lnMar # "]" # CharFromKey(13) # "[" # lnVar # "]")
				
			 	//isRule = TRUE: ���ò����б��������滻;������滻�������б�
				DoReplaceRow(hbuf, lnMar, lnVar, cur_row + 1, TRUE)
				//�����α���, �����������
				SaveBuf(hbuf)
			}
			else if (cmdStr == "old")
			{
			 	//·����������б��
				lnVar = "^" # ReplaceWord(lnVar, "\\\\", "[\\\\/]")
				
			 	//�滻����ȥ��һ����б��
				lnMar = ReplaceWord(lnMar, "\\\\", "\\")
				
				//msg("[" # lnVar # "]" # CharFromKey(13) # "[" # lnMar # "]")
				
			 	//isRule = TRUE: ���ò����б��������滻;������滻�������б�
				DoReplaceRow(hbuf, lnVar, lnMar, cur_row + 1, TRUE)
				//�����α���, �����������
				SaveBuf(hbuf)
			}
		}
		
		mSel = SearchInBuf(hbuf, mKey, mSel.lnLast+1, 0, FALSE, TRUE, FALSE)
	}

}

macro SetNoteHistory(hbuf)
{
	hprj = GetCurrentProj ()
	path = GetProjDir (hprj)
	//bft = getBaseType(path)
	bft = getBaseFileType(path, 3)

	mBuf = OpenCache(getNodePath(0) # "\\Macro_Set_Note.h")
	mKey = bft # ":"
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	len = strlen(mKey)
	nTxt = "Macro_Set_Note.h" # " "  # bft # " :" # CharFromKey(13)
	count = 1

	while (mSel != "")
	{
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
			
		nTxt   = nTxt # count # "." # strmid(line, len, ilen) # CharFromKey(13)
		count = count + 1
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)
	}
	CloseBuf(mBuf)
	
	if(count-1<1)
		stop
		
	msg(nTxt)
	key = GetKeyExt(count - 1)
	if (key>0)
	{
		curSet = GetNoteHistory(bft, key)

		//insert line
		sel = MGetWndSel(hbuf)
		InsBufLine(hbuf, sel.lnFirst + 1, "@curSet@")
		SaveBuf(hbuf)
	}
}

macro GetNoteHistory(bft, mIndex)
{
	mBuf = OpenCache(getNodePath(0) # "\\Macro_Set_Note.h")
	mKey = bft # ":"
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	len = strlen(mKey)
	
	index = 1
	curItem = ""

	while (mSel != "")
	{
		if(index == mIndex)
		{
			line = GetBufLine(mBuf, mSel.lnFirst )
			ilen = strlen(line)
			
			curItem = strmid(line, len, ilen) # CharFromKey(13)
			break
		}
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)
		index = index + 1
	}
	CloseBuf(mBuf)
	return curItem
}

macro SaveNoteHistory(cur_line)
{
	hprj = GetCurrentProj ()
	path = GetProjDir (hprj)
	bft = getBaseFileType(path, 3)
	
	mBuf = OpenCache(getNodePath(0) # "\\Macro_Set_Note.h")
	
	mKey = bft # ":" # cur_line
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	if (mSel == "")
	{
		AppendBufLine(mBuf, mKey)
		SaveBuf(mBuf)
	}
	
	CloseBuf(mBuf)
}

macro NoteCopyFile(hbuf, cmdP1, cmdP2, cNum)
{
	//msg("copy [" # cmdP1 # "-" # cmdP2 # "]")

	//�ļ���ת��:
	//ת��"Save:"�����ָ�Ŀ¼��������ĿĿ¼���滻"^"Ϊ�ո�
	cmdPath1 = GetTransFileName(hbuf, cmdP1, cNum)
	cmdPath2 = GetTransFileName(hbuf, cmdP2, 0)
	
	cmdStr = "copy " # cmdPath1 # " " # cmdPath2
	msg(cmdStr)

	ShellOpenCustomCmd(cmdStr)
}

macro OpenF11Test(hbuf, v)
{
}
