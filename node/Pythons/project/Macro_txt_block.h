
基础路径设置:
//basePath = 

/***********************************************************************/


//目录[Num][Ca]:
// 1. 
Save:node\Pythons\project\Macro_txt_block.h \[1.1\] 1摘要(3项)
Save:node\Pythons\project\Macro_txt_block.h \[1.2\] 参考代码
Save:node\Pythons\project\Macro_txt_block.h \[1.3\] 5.1代码--获取词性关系
Save:node\Pythons\project\Macro_txt_block.h \[1.4\] 5.2其他功能，多指标，选择保存
Save:node\Pythons\project\Macro_txt_block.h \[1.5\] 5.4优化，双重指标
Save:node\Pythons\project\Macro_txt_block.h \[1.6\] 6隐含影响力
Save:node\Pythons\project\Macro_txt_block.h \[1.7\] 4.1预处理--新的词性
Save:node\Pythons\project\Macro_txt_block.h \[1.8\] 4.2预处理--词性关系
Save:node\Pythons\project\Macro_txt_block.h \[1.9\] 4.3代码
Save:node\Pythons\project\Macro_txt_block.h \[1.10\] 预处理--多义
Save:node\Pythons\project\Macro_txt_block.h \[1.11\] 6总结
Save:node\Pythons\project\Macro_txt_block.h \[1.12\] 8扩展 Extension
Save:node\Pythons\project\Macro_txt_block.h \[1.13\] 9 Others
Save:node\Pythons\project\Macro_txt_block.h \[1.14\] 
// 2. 
Save:node\Pythons\project\Macro_txt_block.h \[2.1\] nlp ai-list
Save:node\Pythons\project\Macro_txt_block.h \[2.2\] cv ai-list
Save:node\Pythons\project\Macro_txt_block.h \[2.3\] AAAI 2020
Save:node\Pythons\project\Macro_txt_block.h \[2.4\] ACL-2020
Save:node\Pythons\project\Macro_txt_block.h \[2.5\] COLING-2020
Save:node\Pythons\project\Macro_txt_block.h \[2.6\] 
Save:node\Pythons\project\Macro_txt_block.h \[2.7\] 
Save:node\Pythons\project\Macro_txt_block.h \[2.8\] 
Save:node\Pythons\project\Macro_txt_block.h \[2.9\] 
Save:node\Pythons\project\Macro_txt_block.h \[2.10\] 
// 3. 
Save:node\Pythons\project\Macro_txt_block.h \[3.1\] 结构范例
Save:node\Pythons\project\Macro_txt_block.h \[3.2\] Author
Save:node\Pythons\project\Macro_txt_block.h \[3.3\] Abstract
Save:node\Pythons\project\Macro_txt_block.h \[3.4\] PDF制作
Save:node\Pythons\project\Macro_txt_block.h \[3.5\] 布局
Save:node\Pythons\project\Macro_txt_block.h \[3.6\] online
Save:node\Pythons\project\Macro_txt_block.h \[3.7\] 缩进
Save:node\Pythons\project\Macro_txt_block.h \[3.8\] 
Save:node\Pythons\project\Macro_txt_block.h \[3.9\] 
Save:node\Pythons\project\Macro_txt_block.h \[3.10\] 

0.1 摘要
1.1 参考代码
1.2 重复指标，句子类型化, 补参数, 参数分隔，隐含影响力
1.3 其他功能，多指标，选择保存
2.1 预处理--常见词类别
2.2 预处理--常见句，1kg200g, 交换顺序, 我想去巴西
2.3 预处理--无限复杂性
2.4 预处理--多义
2.5 预处理--分词--手动处理
3.1 超现象--性格模型


[1.1] 1摘要(3项)
标题:
超级词性

内容:

//1. Abstract
// 对自己工作及其贡献的总结：
//a）阐述问题；
//b）说明自己的解决方案和结果。
用最简单的模型，最通用的理解，从中发现未知的信息。什么是词性？什么是词性与词性之间的关系？常识未必准确。


//2. Introduction
//背景，以及文章的大纲：
//a）题X是重要的；
//b）前人的工作A. B曾经研究过这个问题；
//c）A. B有一些缺陷；
//d）我们提出了方法D；
//e）D的基本特征，和A. B进行比较；
//f）实验证明D比A. B优越；
//g）文章的基本结构，大纲。

假设词性有一种新的解释。假设一共有16种词性(4X4)。假设2个词性(A. B)关系，可以表示为(A->B). 或(A->X->B). 或(A->X->Y->B). 或(A->...->B)。
这里提供一个这样的模型，它是简单的。总的参数量很少，是其他模型的2%以下。训练结果，f1指标可以快速达到76.4%。


//3. Previous Work
//说明自己与前人的不同：
//a）将历史上前人的工作分成类别；
//b）对每项重要的历史工作进行简短的回顾(一到几句)，注意要回顾正确，抓住要点，避免歧义；
//c）和自己提出的工作进行比较；
//d）不要忽略前人的重要工作，要公正评价前人的工作，不要过于苛刻；
//e）强调自己的工作和前人工作的不同，最好举出各自适用例子。

关于代码，实现的是比较句子相似度的功能。只选取1000个例子，包括500个正例，500个负例。以前的相关工作，考虑的是词之间的关系，而这个考虑的是词性之间的关系。
实际上，为每个词重新给定词性，是非常细致的和耗时的。


[1.2] 2参考代码
//1) 代码:(写附件中)
代码地址:
https://github.com/seefs/nlp_block
运行环境:
python3 + tf2.0

临时--安装命令:
pip install jieba
pip install chardet
pip install tqdm
pip install pandas
pip install params_flow
//
Save:node\Pythons\install\Macro_Pythons_Install.h

//临时--本地项目地址:
Save:node\Pythons\project\Macro_nlp_block.h


//2) 编译命令:
// 评估:
python runtest_all\runtest_model.py
// 结果:  
//  pred--loss: 0.6206023
//  pred--acc:  0.737
//  pred--f1:   0.76496863

// 训练:
python runtest_all\runtest_model_calc.py
// 备注:  
// 训练结果不稳定, 当训练结果更优时才保存结果


//3) 参数个数:
//sents_len 1000
//Total params: 38,182
//Trainable params: 38,182
//Non-trainable params: 0



[1.3] 4.3.1代码--获取词性关系
blockPath = D:\project\NLP\nlp_block
//1) 预处理:
// 取正例500，负例500
python runtest\runtest_load.py

//2) 句子分析(重要):
// 词性编码添加隐藏编码
// 句子分析测试:
block:runtest\runtest_seq.py
python runtest\runtest_seq.py
// 结果:  

//4.3.1 获取词性关系
测试代码: code\runtest\runtest_seq.py
例子结果: 
words:["花呗分期付款的需要付手续费吗"], 
words: hua bei|fen qi|fu kuai|de|xu yao|fu|shou xu fei|ma
type:     2   |   3  |   3   |11|   3  | 3|    6      |11
modes: [2, 3, 3, 11, 3, 3, 6, 11]
cnt1:  8
n1:    [2, 9, 3, 3, 10, 11, 3, 3, 12, 4, 13, 6, 11]

words:["花呗分期怎么才能免手续费"],
words: hua bei|fen qi|zen mo|cai neng|mian|shou xu fei
type:     2   | 3, 6 |  13  |   10   |  3 |     6
modes: [2, 3, 6, 13, 10, 3, 6]
cnt2:  7
n2:    [2, 9, 3, 12, 4, 13, 6, 5, 4, 13, 3, 10, 2, 9, 3, 12, 4, 13, 6]

换成图片（添加箭头）

[1.4] 训练时计算过程
//1) 隐藏编码，左右两边, 哪个词更重要，用它的隐藏编码:
file:_layer.py,  
fun: get_pxvm()
输入
words: w1|w2|w3
type:  [3, 6, 13]
n2:    3, [12, 4, 13], 6, [5, 4], 13
过程: 
隐藏编码是:    [...], [...]
编码概率化:
p:     p1, [p1h1, p1h2, p1h3], p2, [p2h1, p2h2], p3
       p1, [p2h1, p2h2, p2h3], p2, [p3h1, p3h2], p3
编码量化:
v:     v1, [v1h1, v1h2, v1h3], v2, [v2h1, v2h2], v3
       v1, [v1h1, v2h2, v2h3], v2, [v3h1, v3h2], v3
选择max v:
若 (p1h1)+(p2h2+p2h3) = max(p1h1+p1h2+p1h3, ..., p2h1+p2h2+p2h3)
   (p2h1)+(p3h2)      = max(p21+p22, ..., p3h1+p3h2)
输出
v:     v1, [(v1h1), (v2h2, v2h3)], v2, [(v2h1), (v3h2)], v3

//4.3.2 训练时动态选择隐藏类型
代码: code\_layer.py，get_pxvm()
训练时，会左右调节合适的节点，以达到动态选择隐藏类型。

图省略--带上下左右箭头

//2) 分类17*5:
fun: get_board()

//4.3.3 训练时按词性分类
代码: code\_layer.py，get_board()

功能：分为16*5类，不够的为0，多余的不要。(如)

输入
v:     v1, [(v1h1), (v2h2, v2h3)], v2, [(v2h1), (v3h2)], v3
输出
type3:     v1, 0, 0, 0, 0
type4:     p2h2, v3h2, 0, 0, 0
type5:     v2h1, 0, 0, 0, 0
type6:     v2, 0, 0, 0, 0
type12:    v1h1, 0, 0, 0, 0
type13:    v3, 0, 0, 0, 0


//3) 不同句子, 先比较相同类型的词，再综合计算:
block:_layer.py board_compare( )

输入: 
sent1 type5: s1t5v1, s1t5v2, s1t5v3, s1t5v4, s1t5v5
sent2 type5: s2t5v1, s2t5v2, s2t5v3, s2t5v4, s2t5v5
过程: 
t5v11:    abs(v1+v2)/(abs(v1-v2)+0.000001)-0.5,   v1=s1t5v1,   v2=s2t5v1
t5v12:    abs(v1+v2)/(abs(v1-v2)+0.000001)-0.5,   v1=s1t5v1,   v2=s2t5v2
...
t5v55:    abs(v1+v2)/(abs(v1-v2)+0.000001)-0.5,   v1=s1t5v5,   v2=s2t5v5
裁剪范围: {0.5, 8.5}

过程: 
cnt1:     s1t5vi>0的个数,     i范围: {0, 5}
cnt2:     s2t5vi>0的个数,     i范围: {0, 5}
cnt:      s1t5vi*s2t5vi>0的个数,    cnt范围: {0, 5*5}
t5mean:    (t5v11+t5v12+...+t5v55)/cnt,  范围: {0.5, 8.5}
输出
t5:	    t5mean/((cnt1+cnt2)/(cnt2+2)),  范围: {0.2, 4.74}
其他类型为t0, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16

//tbl
//cnt1 cnt2, sum(typeij),mean, out
0	0	0	0		0	
1	0	2.5	0.5	0.45	1
... 
5	4	172.5	6.9	1.416666667   3.84
5	5	212.5	8.5	1.357142857   4.74

//4.3.4分类后再比较
代码: code\_layer.py，board_compare()
_layer.py board_compare

//单个值比较结果，这一步作了简化处理。
compare = abs(v1+v2)/(abs(v1-v2)+0.000001)-0.5
//25项, 非0的比较值求平均值
mean = (compare1+compare2+...+compare25)/cnt
//再除以两边的非0个数
type = mean/((cnt_max+cnt_min)/(cnt_min+2))

表略

//得到综合的类型比较结果，不同词性权重不一样，系数经过试验得来：
out_mean = 0*type0 + 1*type1 + 1.15*t2 + 1*t3 + 1*t4 + 1*t5 
		+ 1*t6 + 1*t7 + 1*t8 + 1.695*t9 + 0.8*t10
		+ 0.8*t11 + 0.8*t12 + 0.9*t13 + 0*t14 + 0.8*t15 + 0.8*t16

若out_mean在[0.0, 0.5]中, 那么句子不相似
若out_mean在[0.5, 1]中, 那么句子相似


//5) 句子与句子比较:
输入: 
t0, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16
输出
out_mean:	0*t0 + 1*t1 + 1.15*t2 + 1*t3 + 1*t4 + 1*t5 
				+ 1*t6 + 1*t7 + 1*t8 + 1.695*t9 + 0.8*t10
				+ 0.8*t11 + 0.8*t12 + 0.9*t13 + 0*t14 + 0.8*t15 + 0.8*t16
out_mean范围: [0, 1]

若out_mean在[0.0, 0.5]中, 那么句子不相似
若out_mean在[0.5, 1]中, 那么句子相似
正确率在?


[1.5] 优化，双重指标
输入: 
t0, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16
输出
out_max:	1.286*t0 + 0.883*t1 + 1.117*t2 + 1*t3 + 1.24*t4 + 0*t5 
				+ 0.8*t6 + 1.1*t7 + 0*t8 + 0*t9 + 0*t10
				+ 0*t11 + 0*t12 + 0*t13 + 0*t14 + 0*t15 + 0*t16
out_mean范围: [0, 3.5+]
若out_mean在[0.30,0.35]中, 且out_max在[2.81,5.00]中, 那么句子相似
若out_mean在[0.35,0.40]中, 且out_max在[2.31,5.00]中, 那么句子相似
若out_mean在[0.40,0.45]中, 且out_max在[2.43,5.00]中, 那么句子相似
若out_mean在[0.45,0.50]中, 且out_max在[1.75,5.00]中, 那么句子相似

若out_mean在[0.50,0.55]中, 且out_max在[0.00,1.50]中, 那么句子不相似
若out_mean在[0.55,0.60]中, 且out_max在[0.00,1.68]中, 那么句子不相似
若out_mean在[0.60,0.65]中, 且out_max在[0.00,1.37]中, 那么句子不相似

否则, 若out_mean在[0.0, 0.5]中, 那么句子不相似
否则, 若out_mean在[0.5, 1]中, 那么句子相似

//4.3.5 双重指标
代码: code\_layer.py，brd_max()
功能: 经测试，发现用双重指标，效果更好。第2个是主要指标词性。

输出
out_max:	1.286*t0 + 0.883*t1 + 1.117*t2 + 1*t3 + 1.24*t4 + 0*t5 
				+ 0.8*t6 + 1.1*t7 + 0*t8 + 0*t9 + 0*t10
				+ 0*t11 + 0*t12 + 0*t13 + 0*t14 + 0*t15 + 0*t16
out_mean范围: [0, 3.5+]
1）若out_mean在[0.30,0.35]中, 且out_max在[2.81,5.00]中, 那么句子相似
2）若out_mean在[0.35,0.40]中, 且out_max在[2.31,5.00]中, 那么句子相似
3）若out_mean在[0.40,0.45]中, 且out_max在[2.43,5.00]中, 那么句子相似
4）若out_mean在[0.45,0.50]中, 且out_max在[1.75,5.00]中, 那么句子相似

5）若out_mean在[0.50,0.55]中, 且out_max在[0.00,1.50]中, 那么句子不相似
6）若out_mean在[0.55,0.60]中, 且out_max在[0.00,1.68]中, 那么句子不相似
7）若out_mean在[0.60,0.65]中, 且out_max在[0.00,1.37]中, 那么句子不相似

8）否则, 若out_mean在[0.0, 0.5]中, 那么句子不相似
9）否则, 若out_mean在[0.5, 1]中, 那么句子相似





[1.6] 6隐含影响力
//1) 隐藏编码，左右两边, 哪个词更重要，用它的隐藏编码:
file:_layer.py,  
fun: get_pxvm()


_block.py
def m2n(m, cnt, max_space=4, debug=False, add_seq=True):
//	pred--loss: tf.Tensor(0.6605652, shape=(), dtype=float32)
//	pred--acc:	tf.Tensor(0.652, shape=(), dtype=float32)
//	pred--f1:	tf.Tensor(0.65060234, shape=(), dtype=float32)

//5. Experiments
// 验证提出的方法和思路：
// a）合理地设计实验（简洁的实验和详尽的实验步骤）；
// b）必要的比较，突出科学性；
// c）讨论，说明结果的意义；
// d）给出结论。

这里验证一下隐藏编码的重要性。把隐藏编码去掉，再训练，只比较已有的词性。

代码: code\_block.py，m2n(..., add_seq=True)
改为: m2n(..., add_seq=False)
结果为f1: 0.65，相差10%

因此，这个模型的词性关系有不错的作用。


[1.7] 预处理--新的词性
.\data\sqlite3\data.db3

//4 Our Work
// 描述自己的工作，可分成多个部分：
//	a）从读者角度阐明定义和表示法；
//	b）提供算法的伪码，图解和相应解释；
//	c）用设问的方式回答读者可能提出的潜在问题；
//	d）复杂的冗长的证明和细节可以放在附录中，这里关键是把问题阐述清楚；
//	e）特例和例外应该在脚注中给予说明。

//4.1 新的词性
1)按照specific，abstract，similar和independent进行分类。
图略

名词--2，6，8
形容词--4
动词--3，7
连词. 介词--9，13
副词--10，12，15
量词--14
代词--1
数字--5
拟声词. 叹词. 助词--11
方位--16

2)举例。

type0:  未知类

type1:  我,你,他,这,那
type2:  农民,工人,作家,学生,数学,眼,耳
type3:  坐,听,看
type4:  甜,冷,快,慢,长,短
type5:  一,二,三,四,五
type6:  日,风,山,马,狗,飞机
type7:  在,当,随着,从,到
type8:  鲁迅,马来西亚,春天,明年,早晨,星期天
type9:  和,跟,同,与,对
type10:  不,别,未必,能,会,敢
type11:  哈哈,哦,啊,的 
type12:  很,极,十分,全,多,少,都
type13:  难道,到底,简直,也许,不仅,或者,如果
type14:  尺,斤,磅,分,元
type15:  曾经,刚刚,正在,马上,常
type16:  上,下,来,去,左,右,东,南


[1.8] 词性之间的关系
//4.2 词性之间的关系
图略

例句1：6个苹果重1kg200g
6 apples weighing 1 kg 200 g
5，6 4 5 14 5 14
图略(5-6-4-5-14-5-14)

例句2：我想去巴西
I want to go to Brazil
1 10  7  8
图略(1-10-7-8)

// 词性
Save:node\Pythons\mysql\Macro_Pythons_Mysql.h \[4.33\] 手动查找/更新词性
// 查询词性
Save:node\Pythons\sql_sp\bak_data_update.py \[1.1\] 查询


[1.9] 代码
//4.3 代码说明
相关代码与运行命令. 截图，保存在附件中。

//4.3.1 代码
...



[1.10] 预处理--多义
//预处理--多义
type17:  作为多义词
_token.py
get_cate17_best_cx()

cx:4,5
# 多义--词性列表--拆分字符串:
#   格式("cx:4,5")


//预处理--分词--手动处理


[1.11] 6总结
//6 Conclusion
// 总结. 前景及结文：
//a）快速简短的总结；
//b）未来工作的展望；
//c）结束全文。

为什么这个模型会有效？我觉得是语言的产生在符合某种理论。
基础一些智慧现象也在符合某种理论。




[1.12] 8扩展 Extension
//7 Extension
如果考虑理论的通用性，这段内容可能有些帮助。否则它是无关的。

//7.1 性格也是一种智慧的现象
至今没有人解释性格是怎样形成的。
我认为性格即不是先天的，也不是后天的，而是主要由第三种因素影响的。

//7.2 性格预测方法
以中国人为例，如何计算一个人的性格，需要通过他姓名的发音。

现在选取9个例子(中国2019年典型负面人物):
孙文斌，sūn wén bīn, 声调是1-2-1, 编码是1-2-1, 类型C
刘忠有，liú zhōng yǒu, 声调是2-1-2, 编码是2-1-2, 类型C
余祝生，yú zhù shēng, 声调是2-4-1, 编码是2-3-1, 类型C
钟元，  zhōng yuán, 声调是1-2, 编码是1-2, 类型D
孙小果，sūn xiǎo guǒ, 声调是1-3-3, 编码是1-2-2, 类型A
张扣扣，zhāng kòu kòu, 声调是1-4-4, 编码是1-3-3, 类型A
张小波，zhāng xiǎo bō, 声调是1-3-1, 编码是1-2-1, 类型C
杜少平，dù shào píng , 声调是4-4-2, 编码是3-3-2, 类型B
艾文礼，ài wén lǐ, 声调是2-4-1, 编码是2-3-1, 类型C

编码与声调的关系: 
1: 1
2: 2/3
3: 4
类型与编码的关系: 
类型A: 111, 122, 133, 213, 221, 232, 312, 323, 331
类型B: 222, 233, 211, 332, 321, 313, 112, 123, 131
类型C: 333, 311, 322, 113, 121, 132, 223, 212, 231
类型D: 12, 23, 31
类型E: 11, 22, 33
类型F: 32, 21, 13

具体性格类型:
类型A: 温和，抽象，狡猾
类型B: 沟通，简易，圆滑(墙头草)
类型C: 强势，逻辑，暴力
类型D: 原则，保守
类型E: 行为，现状
类型F: 目标，收益

//7.3 性格预测方法
简单验证的办法:
类型C的负面人物主要是暴力，暴力的负面人物主要是类型C
XX国家的高级领导的类型主要是A型


//7.4 两个模型相似性--画图
相关模型:
3X3的性格模型。
4X4的语言模型。

画图




[1.13] 8 Others
//	不公开
篇幅有限，不能讲太复杂。
发表此文，没有跟傻逼讲道理的意思，
只是不想若干年后，被其他人发表了。


//References 略

//8 Others
// 致谢. 附录. 脚注。
相关代码与运行命令. 截图，保存附件中。



[1.14] 



[2.1] nlp ai-list
针对自然语言处理（NLP）方向比较著名的几个会议有：
ACL. EMNLP. NACAL. CoNLL. IJCNLP. COLING. ICLR. AAAI. NLPCC等

//时间查询1
https://www.cnblogs.com/think90/p/11619541.html
//时间查询2
http://www.call4papers.cn/C4PREST/servlet/Search?keyword=ACL

//  ACL-2020
截稿时间：2019年12月9日
CCF分类: A类
会议官网：http://acl2020.org

//  EMNLP-2020
截稿时间：待定
CCF分类: B类
会议官网：https://acl2020.org/calls/workshops/#emnlp

//  COLING-2020
截稿时间：待定
CCF分类：B类
会议官网：https://coling2020.org/

//  ICLR-2020
截稿时间：2019.09.25
CCF分类: 无
会议官网：http://www.iclr.c

//  AAAI 2020
截稿时间：2019.09.05
CCF分类: A类
会议官网： http://www.aaai.org/aaai20

//	RSS 2020
截稿时间：2020.02.01
CCF分类: 无
会议官网： http://www.roboticsconference.org

//  ALT 2020
截稿时间：2019.09.20
会议官网：http://alt2020.algorithmiclearningtheory.org

//	WWW 2020
截稿时间：2019.10.14
会议官网： https://www2020.thewebconf.org


[2.2] cv ai-list


[2.3] AAAI 2020
//aaai
https://aaai.org/conferences/aaai-20/aaai20call/
//截稿时间：2019年9月5日

//提交准备清单
作为提交过程的一部分，要求作者检查其提交是否符合以下所有条款，并且可能将提交的内容退还给不遵守这些准则的作者。
提交的内容以前未曾发布过，也未提交其他期刊审议（或在“编辑意见”中提供了解释）。
提交文件为PDF，Microsoft Word Docx格式或RTF文档文件格式。
文本是等距的；使用至少10点字体；使用斜体，而不是下划线（URL地址除外）；并且所有插图，图形和表格都放置在文本中的适当位置，而不是末尾。
文本符合《作者指南》中“作者指南”中概述的文体和书目要求，或者，如果论文被接受，作者同意对其进行修改以符合此类要求。
提交内容以流利的英语撰写，没有很高的技术术语或专业术语。
为提交提供了元数据，包括作者的隶属关系，电子邮件和（如果有，则为ORCHID标识）。
包含50-250个字的摘要。
为了包括500多个单词的受版权保护的文本，作者已获得该文本的版权所有者的书面许可。 AAAI对因许可而产生的费用概不负责。
所有数字均为该提交的原始图片，并由该提交的作者创建。如果该图不是本提交的原始图片，则表明作者已获得该图的版权所有者的书面许可。
未经书面许可，AAAI不会发布非原始数据。 AAAI对因许可而产生的费用概不负责。
作者简介已完成或已更新，其中包括电子邮件，电话和家庭住址信息。
来自所有合著者的简短自传声明附在文章末尾。
作者指南
提供这些指南是为了帮助AI Magazine文章的作者和潜在作者准备其投稿或被接受的作者。
仔细阅读本文档将确保及时发布被接受的文章，并且可能是接受已提交论文的一个因素。

//必须向我们发送一封电子邮件，其中包含以下信息：

你的名字
您的隶属关系
您的永久电子邮件地址
您的论文标题
论文摘要
经过积极的非正式审查后，编辑将要求提交全文以进行完整和正式的审查。

如果您之前已经在AI Magazine上发表过，我们仍然需要您向编辑发送带有摘要的查询，询问他是否对发表论文感兴趣。
如果答案是肯定的，编辑将为您提供提交说明。

https://www.aaai.org/scripts/Contact/contact.php

//
No school

Hello, can individuals send nlp related papers to which email?


https://zhuanlan.zhihu.com/p/81930463

//Register
https://cmt3.research.microsoft.com/User/Register?ReturnUrl=%2FAAAI2020%2F
seefs@163.com
s0f0s0
//
Google Scholar Id


[2.4] ACL-2020
//  ACL-2020
截稿时间：2019年12月9日
会议官网：http://acl2020.org


[2.5] COLING-2020
//	COLING-2020
截稿时间：2020年5月8日，延长至7月1日
会议时间：12月8日至13日
CCF分类：B类
会议官网：https://coling2020.org/

//
2020年6月1日：匿名期开始
2020年7月1日：应提交最终作品
2020年10月1日：通知
2020年11月1日：适用于摄像头（PDF）
2020年12月8日至11日：主要会议
2020年12月12日至13日：会后教程和讲习班


在此处下载官方的COLING 2020 MS Word和LaTeX模板：
https://coling2020.org/coling2020.zip

提交和审核将在START系统中进行管理：
http://www.softconf.com/coling2020/demos
https://www.softconf.com/coling2020/TextGraphs/user/scmd.cgi?scmd=aLogin&passcode=1X-H8D8E8A7B6

提交的唯一可接受格式是PDF。被接受的论文将在会议记录中的单独一本专门用于演示系统的册子中出现。

//Register
//	seefs
//	seefs@163.com
//	xjs0f0s0
// 3X-J9A5C8D5P3

// 最终论文:
https://www.softconf.com/coling2020/demos/user/scmd.cgi?scmd=aLogin&passcode=3X-J9A5C8D5P3



重要的日子
//	讲习班和教程：2020年12月12日至13日
//	主要会议：2020年12月8-11日
//
//	2020年3月8日 2020年6月1日：匿名期开始
//	2020年4月8日 2020年7月1日：应提交最终作品
//	2020年6月10日 2020年10月1日：通知
//	2020年6月30日 2020年11月1日：适用于摄像头（PDF）
//	2020年9月13日至14日 2020年12月12日至13日：会后教程和讲习班
//	2020年9月15日至18日 2020年12月8日至11日：主要会议




[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 




[3.1] 结构范例
//优秀论文结构范例：
//1. Abstract
//   对自己工作及其贡献的总结：
//  a）阐述问题；
//  b）说明自己的解决方案和结果。
//2. Introduction
//	背景，以及文章的大纲：
//	a）题X是重要的；
//	b）前人的工作A. B曾经研究过这个问题；
//	c）A. B有一些缺陷；
//	d）我们提出了方法D；
//	e）D的基本特征，和A. B进行比较；
//	f）实验证明D比A. B优越；
//	g）文章的基本结构，大纲。
//3. Previous Work
//	说明自己与前人的不同：
//	a）将历史上前人的工作分成类别；
//	b）对每项重要的历史工作进行简短的回顾(一到几句)，注意要回顾正确，抓住要点，避免歧义；
//	c）和自己提出的工作进行比较；
//	d）不要忽略前人的重要工作，要公正评价前人的工作，不要过于苛刻；
//	e）强调自己的工作和前人工作的不同，最好举出各自适用例子。
//4 Our Work
// 描述自己的工作，可分成多个部分：
//	a）从读者角度阐明定义和表示法；
//	b）提供算法的伪码，图解和相应解释；
//	c）用设问的方式回答读者可能提出的潜在问题；
//	d）复杂的冗长的证明和细节可以放在附录中，这里关键是把问题阐述清楚；
//	e）特例和例外应该在脚注中给予说明。
//5. Experiments
//	验证提出的方法和思路：
//	a）合理地设计实验（简洁的实验和详尽的实验步骤）；
//	b）必要的比较，突出科学性；
//	c）讨论，说明结果的意义；
//	d）给出结论。
//6 Conclusion
//	 总结. 前景及结文：
//	a）快速简短的总结；
//	b）未来工作的展望；
//	c）结束全文。
//7. References
//	对相关重要背景文献的全面引用：
//	a）选择引文（众所周知的结论不必引用，其他人的工作要引用）；
//	b）与前文保持一致。
//8. Others
//	致谢. 附录. 脚注。


[3.2] Author
// Affiliation 联系
//  第一行/Address line1: 所在区+所在城市+所在省（+所在国家）。
//  第二行/Address line2: 门牌号+楼号+街道号。
// Zipcode：邮政编码
First Author： Jia xiao
Affiliation / Address line 1： Shenzhen, Guangdong, 518000 China
Affiliation / Address line 2： 
Affiliation / Address line 3： 
email@domain： seefs@163.com

//哈尔滨市道里区安固45号3单503室:
//LINE 1: Room 503, Unit 3, No 45, Angu Street
//LINE 2: Daoli Qu, Haerbin, Heilongjiang, 150016 China



参考格式
//1. 姓名
//2. 部门 组织机构名称（隶属关系）
//3. 城市，国家
//4. 电子邮件地址或ORCID



[3.3] Abstract
//1. Abstract 总结
//   Credits  本文档
//2. Introduction 引言--背景
//	 General Instructions 一般说明
//3. Previous Work 前人工作



[3.4] PDF制作
3.2电子手稿格式
要制作电子手稿，您必须使用Adobe的可移植文档格式（PDF）。 
PDF文件通常是使用latelate命令从LATEX生成的。
如果您的LATEX版本产生Postscript文件，则可以使用ps2pdf或dvipdf将它们转换为PDF。
在Windows上，您也可以使用Adobe Distiller生成PDF。
请确保您的PDF文件包含所有必需的字体（尤其是树形图，符号和非拉丁字符的字体）。
当您打印或创建PDF文件时，打印机设置中通常会包含一个选项，不包含，不包含全部或仅包含非标准字体。
请确保选择包括所有字体的选项。发送之前，请通过与创建PDF的计算机不同的计算机进行打印来测试您的PDF。
此外，某些文字处理程序可能会生成非常大的PDF文件，其中每个页面都呈现为图像。这样的图像可能再现不佳。
在这种情况下，请尝试其他方法来获取PDF。在某些系统上，一种方法是为后置打印机安装驱动程序，将文档发送到打印机，并指定“输出到文件”，然后将文件转换为PDF。
格式化纸张时，最重要的是指定A4格式（21厘米x 29.7厘米）。例如，使用dvips时，应指定-t a4。
如果您不能满足上述要求，那么请尽快与出版物联席主席联系。


[3.5] 布局
3.3布局
将这些指令以单列格式格式化为页面格式。 A4纸上的页面的确切尺寸为：
•左右边缘：2.5厘米
•上边距：2.5厘米
•底边距：2.5厘米
•宽度：16.0厘米
•高度：24.7厘米
不得以任何其他纸张尺寸提交论文。 如果您不能满足上述要求，则请尽快与上述出版物的共同主席联系。

开始新段落时缩进。
文字和小节标题使用11磅，
节标题使用12磅，
标题使用15磅。


[3.6] online
online要比见刊晚


[3.7] 缩进
//	首段：两端对齐，无缩进。
//	其余各段：两端对齐，首行缩进0.63cm；段间无空行

//移行时要加连字符?

//标题, 标点符号

[3.8] 


[3.9] 


[3.10] 














