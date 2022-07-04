# TensorFlow  
创建仓库命令   
下表列出了 git 创建仓库的命令：  
命令	     说明  
git init	初始化仓库  
git clone	拷贝一份远程仓库，也就是下载一个项目。  

提交与修改  
Git 的工作就是创建和保存你的项目的快照及与之后的快照进行对比。  
下表列出了有关创建与提交你的项目的快照的命令：  
命令	 说明  
git     add	添加文件到仓库  
git     status	查看仓库当前的状态，显示有变更的文件。  
git     diff	比较文件的不同，即暂存区和工作区的差异。  
git     commit	提交暂存区到本地仓库。  
git     reset	回退版本。  
git     rm	删除工作区文件。  
git     mv	移动或重命名工作区文件。  

提交日志  
命令	说明  
git    log	查看历史提交记录  
git    `blame <file>以列表形式查看指定文件的历史修改记录`    
远程操作  
命令	说明  
git    remote	远程仓库操作  
git    fetch	从远程获取代码库  
git    pull	下载远程代码并合并  
git    push	上传远程代码并合并  

`1. git clone https://e.coding.net/doctorlm/python/TensorFlow.git`
2. 修改一下README.md文件，修改完之后可以用git status看下当前的状态  
3. 出现红色说明文件没有添加到暂存区，用 git add .（注意add后边有一个点）可以将所有文件添加到暂存区  
4. 再使用  git commit -a -m'msg'  提交暂存区到仓库区(没有在暂存区中的也能提交，git commit -m 只能把暂存区中的提交)  
5. git push -u origin master 上面命令将本地的master分支推送到origin主机，同时指定origin为默认主机，后面就可以不加任何参数使用git push了


$ git config credential.helper store
$ git push git@e.coding.net:doctorlm/python/TensorFlow.git
git config命令的–global参数，用了这个参数，表示你这台机器上所有的Git仓库都会使用这个配置，当然也可以对某个仓库指定不同的用户名和Email地址。
1.查看git配置信息
$ git config --list
2.查看git用户名、密码、邮箱的配置
$ git config user.name
$ git config user.password
$ git config user.email
3.设置git用户名、密码、邮箱的配置
$ git config user.name "freedom"
$ git config user.password "123456"
$ git config user.email "1548429568@qq.com"
3.设置git用户名、密码、邮箱的配置（全局配置）
$ git config --global user.name 用户命
$ git config --global user.name freedom
$ git config --global user.password 密码
$ git config --global user.password abc0506abc
$ git config --global user.password 邮箱
$ git config --global user.email "1548429568@qq.com"
4.修改git用户名、密码、邮箱的配置（跟设置语法一样，没有用户名就添加，有了用户名就修改）
$ git config user.name "freedom"
5.修改git用户名、密码、邮箱的配置（全局配置）
$ git config --global user.name "freedom"
6.删除git用户名、密码、邮箱的配置
