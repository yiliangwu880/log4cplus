引用开源项目log4cplus，简单包装成简介的使用接口。

编译方法：
	整个文件夹放到linux目录，安装cmake gcc git等。

	主目录执行：sh clearBuild.sh 完成编译

vs浏览代码：
	执行.\vs\run.bat,生成sln文件
	
目录结构：
	bin			==执行文件
	samples     ==使用例子
	
使用方法：
	用户项目引用库和头文件。 在lib目录和include目录
	用户项目执行文件必须有配置文件。 log.conf