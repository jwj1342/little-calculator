# 小小计算器

### 简单介绍：

荷兰大学的c++期末程序设计，要求是做出本学期学习的知识，当然我认为一个大作业不可能就只是黑乎乎的命令行。

无意中了解到了EasyX这个库，于是便打开了新世界的大门，紧接着编译器从原先习惯的Devc转变成了略复杂的VS2022。

当然，把所有的代码都写在一个源文件内，会使的文件可读性变差，所以浅学习了一下如何使用多个源文件进行编译。

在学习的过程中，深刻的理解了变量在内存中的存活时间，即`extern`与`ststic`。以及`.h` `.cpp`等文件的用途。



### 相关知识总结：

1. `extern`：
   该关键字的意思是用来说明此变量或函数是定义在别的文件中的，在此文件中引用。默认情况下，声明和定义一个函数，都有一个`extern`的前缀，这意味着在声明和定义函数时前面不写`extern`，它也是默认存在的。修饰符`extern`用在变量或者函数的声明前，用来说明“此变量/函数是在别处定义的，要在此处引用“。

2. `static`：
   该关键字的意思是用来说明此变量或函数不能再别的文件中引用，未加static关键字的全局变量和函数具有全局可见性，其他源文件中也可以引用。如果加上static关键字，就会对其他源文件进行隐藏。而且会将定义的范围限制为当前对象文件，并允许多个对象文件具有其自己的变量副本。在修饰全局变量的时候，这个全局变量只能在本文件中访问，不能在其它文件中访问，即便是 extern 外部声明也不可以。

3. `.h`头文件

   `.h`文件实现的功能是声明本文件或`.cpp`文件中需要被别人使用或知道的变量、类型、函数及宏定义等。`.h`文件就像是一个接口，具体的实现可以在`.cpp`中也可以在.h中(网传不推荐)。	

   头文件还有一个有意思的是，开头和结尾必须按照以下格式：

   ```c++
   #ifndef MYFILENAME_H
   #define MYFILENAME_H
   
   // code here
   
   #endif
   
   ```

   原因见此：[浅谈头文件(.h)和源文件(.cpp)的区别](https://www.cnblogs.com/scyq/p/12287140.html)

4. 在git同步的时候，出现了以下的问题：

    ```shell
    发布到远程存储库时遇到错误: Git failed with a fatal error.
    Git failed with a fatal error.
    unable to access 'https://github.com/jwj1342/little-calculator.git/': OpenSSL SSL_read: Connection was reset, errno 10054
    ```

    解决方案是，从这个网站的来的：[解决OpenSSL SSL_read: Connection was reset, errno 10054问题](https://juejin.cn/post/7041207219978764296)，简单来说就是在项目的根目录下`git bash`然后使用命令`git config http.sslVerify false`。

5. 暂无

### 对个人有帮助的网站：

https://zhuanlan.zhihu.com/p/95253745
https://www.cnblogs.com/rcgn/p/3203332.html
https://blog.csdn.net/qq_44934156/article/details/119729160