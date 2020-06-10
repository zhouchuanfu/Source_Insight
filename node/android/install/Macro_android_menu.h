
基础路径设置:
//basePath = 

基础路径设置:
basePath = D:\project\Android\Demo\android_base
base:\\



/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\install\Macro_android_menu.h \[1.1\] 清理缓存
Save:node\android\install\Macro_android_menu.h \[1.2\] 转换kotlin
Save:node\android\install\Macro_android_menu.h \[1.3\] Clear Link Markers
Save:node\android\install\Macro_android_menu.h \[1.4\] add Module
Save:node\android\install\Macro_android_menu.h \[1.5\] 项目改名
Save:node\android\install\Macro_android_menu.h \[1.6\] 重新打开项目
Save:node\android\install\Macro_android_menu.h \[1.7\] 默认仓库 m2目录
Save:node\android\install\Macro_android_menu.h \[1.8\] 
Save:node\android\install\Macro_android_menu.h \[1.9\] 设置config/system目录
Save:node\android\install\Macro_android_menu.h \[1.10\] 设置.android目录
Save:node\android\install\Macro_android_menu.h \[1.11\] 
Save:node\android\install\Macro_android_menu.h \[1.12\] 
//
Save:node\android\install\Macro_android_menu.h \[2.1\] menu info
Save:node\android\install\Macro_android_menu.h \[2.2\] 
Save:node\android\install\Macro_android_menu.h \[2.3\] 
Save:node\android\install\Macro_android_menu.h \[2.4\] 
Save:node\android\install\Macro_android_menu.h \[2.5\] 
Save:node\android\install\Macro_android_menu.h \[2.6\] 
Save:node\android\install\Macro_android_menu.h \[2.7\] 
Save:node\android\install\Macro_android_menu.h \[2.8\] 
Save:node\android\install\Macro_android_menu.h \[2.9\] 
Save:node\android\install\Macro_android_menu.h \[2.10\] 
Save:node\android\install\Macro_android_menu.h \[2.11\] 
Save:node\android\install\Macro_android_menu.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 清理缓存
//1) clean project  清理项目  
Build  -->     clean project

//2) invalidate caches restart    清理Android studio缓存
File  -->     Invalidate Caches /Restart...    ->   Invalidate and Restart 



[1.2] 转换kotlin
//將Java文件转为kotlin文件
右键 APP --> Convert Java File to Kotlin File

//或者 快捷键 
Ctrl+Alt+Shift+K



[1.3] Clear Link Markers
//
Android Call requires API level 19 (current min is 15)

// 菜单未找到...
右键工程——>Android  Tools——>Clear Link Markers

//
//	if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M)
//	{
//	    requestPermissions(strArray, 1)
//	}


[1.4] add Module
//add Module
//	注意:这种引入方式无法查看aar文件中的代码和资源等文件。
File菜单——>Import .JAR/.AAR Package
  或者
Project Structure——>添加新的Module（New Module…）——>选择Import .JAR/.AAR Package，
——>选择目标aar文件导入。导入之后，在项目根目录下会自动生成一个新的文件夹放置aar文件及其配置文件，如:
——>写图片描述
——>配置build.gradle
compile project(':qiniu-android-sdk-7.2.0')



[1.5] 项目改名
// 1) 修改文件名
base:\\


// 2) 修改settings
settings.gradle
//
//	rootProject.name='WebDav'


// 3) Contents
Git_NB.iml


// 4) 删除缓存
.idea
.idea\.name



[1.6] 重新打开项目
// 重新打开项目
//     设置启动时不自动打开关闭时的工程
Appearance&Behavior > System Settings >  Reopen last project


// 重新打开项目
//     每次打开已存在工程时的默认目录
Appearance&Behavior > System Settings >  Project Opening...
//
//	D:\project\Android



[1.7] 默认仓库 m2目录
// 设置.m2目录
//     修改maven默认仓库(即repository)的路径
Appearance&Behavior > Path Variables, 添加MAVEN_REPOSITORY变量,如下:
//	D:\android\as_config\.m2


// 没看到这个目录，可能是java用到的:
C:\Users\Administrator
C:\Users\Administrator\.m2\repository



[1.8] 




[1.9] 设置config/system目录
//  安装路径
C:\Program^Files\Android\Android^Studio\bin\


//     设置config目录
C:\Program^Files\Android\Android^Studio\bin\idea.properties  idea.config.path
//	idea.config.path=${user.home}/.AndroidStudio/config
//	idea.config.path=D:\android\as_config\.m2/config


//     设置system目录
C:\Program^Files\Android\Android^Studio\bin\idea.properties  idea.system.path
//	idea.system.path=${user.home}/.AndroidStudio/system
//	idea.system.path=D:\android\as_config\.m2/system



[1.10] 设置.android目录
// 设置.android目录
//	.android是android模拟器的保存目录,
//	修改的方法是在Windows操作系统添加 ANDROID_SDK_HOME 系统变量,
//	设置成自己想要的目录,如:



[1.11] 





[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] menu info
File
Edit
View
Navigate    导航
Code
Analyze    分析
Refactor   重构
    ->Migrate to AndroidX    迁移到AndroidX
Build
Run
Tools
VCS
Window
Help
as menu info
//build:
//	sync
//	make
//	make selected
//	clean
//	rebuild
//	build APK
//	gnerate signed APK


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





