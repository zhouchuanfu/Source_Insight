
macro getProjectFromList(n)
{
	// 6531DA ��Ŀ·��
	if (n == 10)	{	return "E:\\SVN\\6531DA_new" 	} //��1���Ϊ��
	//if (n == 12)	{	return "F:\\SBD_6531_12C_DA_FCC" 	}
	
	// 6531btdialer ��Ŀ·��
	if (n == 20)	{	return "F:\\6531DA_Btdialer" 	} //��1���Ϊ��
	
	// 6531E ��Ŀ·��
	if (n == 30)	{	return "F:\\6531E_16A" 	}
	if (n == 31)	{	return "F:\\_SI4.0\\6531E.si4project" 	}		 //30��39���ȡ�ǿգ����ﱣ��һ������ֵ
	if (n == 32)	{	return "F:\\6531G_16A_MP_W17.43.4" 	}
	if (n == 33)	{	return "F:\\_SI4.0\\6531G.si4project" 	}
	

	// soft ��Ŀ·��
	if (n == 40)	{	return "F:\\soft" 	}
	
	// 6533 ��Ŀ·��
	if (n == 50)	{	return "F:\\SC6533G\\soft" 	} //������Ҫ����������
	if (n == 51)	{	return "E:\\SC6533G" 	} //���Դ��+SIĿ¼�ֿ�����, SR dir ����soft��
	
	// 7701 ��Ŀ·��
	if (n == 60)	{	return "D:\\SVN\\SC7701" 	}

	// MTK ��Ŀ·��1
	//if (n == 70)	{	return "F:\\11CW1352MP_MT6261DM" 	} //������Ҫ����������
	//if (n == 71)	{	return "F:\\_SI4.0\\11CW1352MP_MT6261DM.si4project" 	}
	if (n == 70)	{	return "F:\\11CW1352MP_KM2" 	} //������Ҫ����������
	if (n == 71)	{	return "F:\\_SI4.0\\11CW1352MP_KM.si4project" 	}  	//���Դ��+SIĿ¼�ֿ�����, Դ��Ŀ¼����������ǰһ��
	if (n == 72)	{	return "F:\\11CW1352MP_BLEPHONE61A" 	} 
	if (n == 73)	{	return "F:\\_SI4.0\\11CW1352MP_BLEPHONE61A.si4project" 	} 
	if (n == 74)	{	return "F:\\11CW1352MP_BLEPHONE61D_11C_V33" 	} 
	if (n == 75)	{	return "F:\\_SI4.0\\11CW_BLEPHONE61D_11C_V33.si4project" 	} 
	
	// base -> save
	if (n == 80)	{	return "E:\\save" 	}
	
	// tmp
	if (n == 90)	{	return "X:\\NoneEmpty" 	}  //add new ...
	
	// tmp
	if (n == 100)	{	return "X:\\NoneEmpty" 	}  //add new ...
	
	// tmp
	if (n == 110)	{	return "X:\\NoneEmpty" 	}  //add new ...
	if (n == 111)	{	return "X:\\NoneEmpty" 	}  //110��112֮�䲻��ʡ�ԣ���ʱ�������������
	if (n == 112)	{	return "X:\\NoneEmpty" 	}
	
	// python
	if (n == 120)	{	return "D:\\project\\GitHub\\myPython" 	}
	if (n == 121)	{	return "D:\\_SI4.0\\myPython.si4project" 	}

	// tmp
	if (n == 130)	{	return "X:\\NoneEmpty" 	}  //add new ...
	
	// 9820E
	if (n == 140)	{	return "F:\\9820e" 	}
	if (n == 141)	{	return "F:\\_SI4.0\\9820E_local.si4project" 	} //local code

	// tmp
	if (n == 150)	{	return "X:\\NoneEmpty" 	}  //add new ...

	//�¼�typeͬ���޸ıʼ����ƣ�
	// -> getBaseFileType(pathName, s)
	
	//
	return ""
}

//�ù̶�Ŀ¼��SI_base�в���������Щ�ļ��ˣ�ֻ������.em��Ŀ¼
macro getSavePath(0)		{	return "E:\\save"					}	//��F1->Q��Ŀ¼
macro getCmdPath(0)			{	return "E:\\save\\SI\\Cmd"			}	//ShellExecuteĿ¼
macro getTXTPath(0)			{	return "E:\\save\\SI\\Cmd_TXT"		}	//ShellExecuteĿ¼
macro getNodePath(0)		{	return "E:\\save\\SI\\node"			}	
macro getDesktopPath(0)		{	return "E:\\desktop"				}	//���棬��������link

//Cmd
macro getBComparePath(0)	{	return "\"C:\\Program Files\\Beyond Compare 4\\BCompare.exe\""			}
//macro getBComparePath(0)	{	return "\"C:\\Program Files (x86)\\Beyond Compare 3\\BCompare.exe\""			}

//VC
macro getVCPath(0)			{	return "C:\\Program Files (x86)\\Microsoft Visual Studio\\Common\\MSDev98\\Bin\\MSDEV.EXE"		}

//VC2008
macro getVS08Path(0)		{	return "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\Common7\\IDE\\devenv.exe"		}


macro forProjectPath(basePath)
{
	var err
	var n
	var path
	
	n = 10
	err = 0
	while (1)
	{
		path = getProjectFromList(n) //����·���б�
		
		if("" == path){
			if(0 == n-n/10*10 || 100 == n){
				return err
			}else{
				n = (1 + n/10)*10	//��10
				continue
			}
		}else{
			if(basePath == path){
				return n
			}else{
				n = n + 1
				continue
			}
		}
	}
}

//Ŀ¼����
macro getCurPath(hbuf)
{
	if(IsSRFile(hbuf))
	{
		if(IsPathName(hbuf, getSavePath(0) # "\\Source Insight"))
		{
			return getSavePath(0)
		}
		else
		{
			hprj = GetCurrentProj ()
			return GetProjDir (hprj)
		}
	}
	else if(IsFileName(hbuf, "Macro_")||IsFileName(hbuf, "Simple_CTRL_"))
	{
		hprj = GetCurrentProj ()
		if(hprj>0)
		{
			projPath = GetProjDir (hprj)
			//�ƶ�F:\\xx\\SI4.0�ļ���ʹĬ�ϸ�ΪF:
			if(strlen (projPath) < 4)
			{
				return GetProjDir (hprj)
			}
			else if(strmid(projPath, strlen (projPath) - 4, strlen (projPath)) != "Base")
			{	
				return GetProjDir (hprj)
			}
		}
	}
	//��ȡ ��ǰĿ¼, �������ļ���
	return getBaseDir(GetBufName(hbuf), 0)
}
macro getBasePath(hbuf)
{
	//��ȡĿ¼ 6531E:
	hprj = GetCurrentProj ()
	//pathName = GetProjName (hprj)
	proPath = GetProjDir (hprj)
	
	ret = CompareEx(proPath, getSavePath(0), 1)//left ���� right
	if(ret == 0)
	{
		return getSavePath(0)
	}
	else
	{
		return proPath
	}
}
macro getProjectPath(pathName)
{
	//��ȡĿ¼ 6531E/project, ������ C:
	//���ĳ�getBaseProjectEx+"/project"
	return getBaseDir(pathName, 1)	//getProjectPath
}
macro getCurProject(pathName)
{
	//��ȡĿ¼ 6531E/project/SE039_XX, ��������ֵ:
	//�Ȼ�ȡĿ¼ 6531E/project, ��Ŀ·��δ���ü������ϼ�Ŀ¼
	project = getProjectPath(pathName)
	ret = CompareEx(pathName, project, 1)//·�� ����"6531E/project"
	if(ret ==0)
	{
		//project����ĵ�һ��DirName
		index = SplitMacro(pathName, "\\", strlen(project)+1, strlen(pathName))
		if(index<0)
		{
			msg("��Ŀ·��δ����, ���� sbd_base.em ������")
			return ""
		}
		return strmid(pathName, 0, index)
	}
	else
	{
		//F1->9�����DirName
		projectName = ReadMode(getMakeRow(0))
		if(projectName != null)
		{
			return project # "\\" # projectName
		}
	}
	return ""
}
macro getCurProjectName(pathName)
{
	//��ȡĿ¼ SE039_.._F2:
	project = getProjectPath(pathName)
	ret = CompareEx(pathName, project, 1)//left ���� right(����6531E/project)
	if(ret ==0)
	{
		//project����ĵ�һ��DirName
		index = SplitMacro(pathName, "\\", strlen(project)+1, strlen(pathName))
		return strmid(pathName, strlen(project)+1, index)
	}
	else
	{
		//F1->9�����DirName
		projectName = ReadMode(getMakeRow(0))
		if(projectName != null)
		{
			return projectName
		}
	}
	return ""
}
macro getBaseType(pathName)
{
	// n == 10: 6531DA
	// n == 20: 6531btdialer
	// n == 30: 6531E
	// n == 40: soft
	// n == 50: 6533
	// n == 60: 7701
	// n == 70: MTK
	type = getBaseDir(pathName, 3)
	return type/10 *10
}
macro getBaseFileType(pathName, s)
{
	//s=1~5:��note�ļ����������;
	//s=1:Macro_ALL_XXX              �������к�
	//s=2:Macro_Group_Make_XXX       ����(�����ò���)
	//s=3:Macro_Note_XXX             �ʼ� 
	//s=4:Macro_Rule_Key_file_XXX    F5--��ת����
	//s=5:si_version_XXX             F1->V--�����汾��
	type = getBaseType(pathName)
	if(type == 10 || type == 20 || type == 30)
	{
		if((s == 1 || s == 5) && type == 10)
		{
			baseFileType = "6531D"
		}
		else if((s == 1 || s == 5) && type == 20)
		{
			baseFileType = "6531DB"
		}
		else
		{
			baseFileType = "6531E"
		}
	}
	else if(type == 40 || type == 50)
	{
		if(s == 5)
		{
			baseFileType = ""
		}
		else if((s == 3) && type == 40)
		{
			baseFileType = "RDA"
		}
		else
		{
			baseFileType = "6533"
		}
	}
	else if(type == 60)
	{
		baseFileType = "7701"
	}
	else if(type == 70)
	{
		if(s == 5)
		{
			baseFileType = ""
		}
		else
		{
			baseFileType = "MTK"
		}
	}
	else if(type == 120 || type == 130)
	{
		if(s == 3)
		{
			//baseFileType = "Python"
			baseFileType = "Pythons"  //��s��ģ��2
		}
		else
		{
			baseFileType = ""
		}
	}
	else if(type == 140)
	{
		if(s == 1)
		{
			baseFileType = "9820e"
		}
		else if(s == 3)	//note
		{
			//baseFileType = "9820e"
			baseFileType = "9820es"  //��s��ģ��2
		}
		else
		{
			baseFileType = ""
		}
	}
	else
	{
		if(s == 2 || s == 4)
		{
			baseFileType = ""
		}
		else
		{
			baseFileType = "Base"
		}
	}
	return baseFileType
}

//common
macro getBaseDir(pathName, type)
{
	//msg ("getBaseDir.@pathName@.@type@")

	nlength = strlen(pathName)
	var name
	var i
	var n
	var start
	var err

	err = -1
	i = 0		//�ļ�������
	start = 0	//·���ܳ���
	while (1)
	{
		i = start
		name = ""
		while ( i < nlength)
		{
			ch = pathName[i]
			if ("\\" == "@ch@")
				break
			i = i + 1
		}
		if(type == 0 || start == 0){
			if(nlength == i){	//�ļ��ڸ�Ŀ¼��ʱ��δ�ҵ�"\\"
				i = start - 1
				break
			}
			start = i + 1
		}else if(i - start > 0){
			name = strmid(pathName, start, i)
			
			n = forProjectPath(strmid(pathName, 0, i))
			if(n == 0)
			{
				err = start - 1
				start = i + 1
				continue
			}
			else if(n-n/2*2==1) //����Ϊֻ��SIĿ¼, ǰһ��Ϊ��ʵĿ¼(Ŀ¼�ֿ�)
			{
				n = n - 1
			}
			
			n0 = n/10*10
			
			// n == 10: 6531DA
			// n == 20: 6531btdialer
			// n == 30: 6531E
			// n == 40: soft
			// n == 50: 6533
			
			if(type==1)
			{
				//msg ("getBaseDir.@pathName@.i~@i@.n~@n@")
				if(n0==10 || n0==20 || n0==30){
					return getProjectFromList(n) # "\\project"
				}else if(n0==40 || n0==50){
					return getProjectFromList(n) # "\\target"
				}else if(n0==70){
					return getProjectFromList(n) # "\\make"
				}else{
					return getProjectFromList(n)
				}
			}
			else if(type==3)
			{
				return n
			}
		}else{
			i = err
			break
		}
	}
	if(type==3){
		return 0
	}else if(0==start)//Ĭ��λ��
	{
		//return cat("F:\\SBD_6531_12C_DA", "\\project")
		return cat(getProjectFromList(10), "\\project")
	}
	else if(i > 0)
	{
		return cat(strmid(pathName, 0, i), "")
	}
	else
	{
		return ""
	}
}
