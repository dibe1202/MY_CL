//#include <stdio.h>//包含头文件，相当于将头文件中的内容全部放到这里了。
///*#开头的命令，叫预处理指令。
// 一个应用程序从写代码开始到程序运行，经历的过程：
// 编辑，预处理，编译，汇编，连接，运行
// 1，编辑：写代码
// 2，预处理：#号开头的指令叫预处理指令，主要是做代码替换的功能，
//    因为C语言是先声明再使用的语言。
//    因为我们使用printf函数，就要包含printf所在的头文件。
//    因为stdio.h文件中，有关于printf这个函数原型的声明。
// 3，编译：将代码翻译成汇编语言的过程。
// 4，汇编：生成提供给链接使用的目标代码的过程。
// 5，链接：将多个文件的目标代码链接成应用程序的过程。
// 6，运行，将应用程序加载到内存中运行。
// *
// 关于函数有三个术语：
// 1，函数的原型的声明：声明函数返回值类型 函数的名称，以及参数列表。
// 2，函数定义
// 3，函数调用：函数调用的依据就是函数原型。根据函数原型进行调用
//    编译器会根据函数原型的声明，来测试调用的是否正确。
// * */
//
//int main() {//写任何一个C语言或者C++程序，必须有且只有一个main函数。
//            //它是所有应用程序执行的入口。
//            //int main()叫函数头，{}大括号包裹的这部分代码
//            //我们叫他函数体，函数体中写程序的运行逻辑。
//    printf("Hello, World!\n");//函数的调用。
//    //关于字符串：双引号引起来的叫字符串，字符串里有两类字符
//    //一类叫普通字符，对于printf来讲，原样输出，
//    //还有一类叫特殊字符，例如\n表示换行，%开头的表示格式化输出
//    // 后面的值。
//    printf("今天是个好日子\n");
//    printf("我要努力学习，认真听课，争取迎娶白富美\n");
//    printf("今天是%-3d号",13);//每条语句后必须加；表示执行完毕。
//    return 0;
//}
/*
 定义变量四件事：
 1,比照类型分配对应大小的空间。例如int就是四个字节。
    一个字节8个bits,4个字节就是32个bits.
 2, 给这个空间取名，也就是所谓的变量名。它代表里面的值。
 3，要赋初始值，如果不赋初始值则为乱值。
 4，一定有个首地址，记为&变量名，（例如：&a);
 * */
//#include <stdio.h>
//int main(){
//    int a = 0;
//    int b = 0;
//    int sum = 0;
//    a = 123;//= 赋值运算符，它就是把右边的值赋值给左边的变量。
//    b = 456;//
//    sum = a+b;//a代表的值加上b代表的值，赋值给sum
//    printf("a = %d , b= %d , sum = %d\n",a,b,sum);
//    /*printf功能是输出双引号引起来的字符串，*/
//    /*逗号就表示分隔符，我们调用函数的依据是函数原型的声明*/
//}
/*例，输入两个数，计算两个数的和，并且输出*/
//#include <stdio.h>
//int main(){
//    int age1 = 50;//十进制表示的常量的写法
//    int age2 = 062;//八进制表示的常量的写法
//    int age3 = 0x32;//十六进制表示的常量的写法
//    printf("%d %d %d\n",age1,age2,age3);
//    printf("0%o 0%o 0%o\n",age1,age2,age3);
//    printf("0x%x 0x%x 0x%x\n",age1,age2,age3);
//}
/*
 如何理解有无符号？
 从两个角度理解
 （1）从数据类型的角度。理解有无符号。
      有符号，就是二进制中的第一位存放符号位，0表示正数，1，表示负数。
      无符号，就是二进制中的所有位，都表示数值位，没有符号位。
       也就是无符号的数据类型，只能存放正数。
  （2） 我们可以选择按有无符号来输出。
        如果按有符号输出，第一位如果是1，那么是补码，要推导到原码才知道是什么值。
        如果按无符号输出，就没有符号位，就全是数值位，就是8421码。
 * */
//#include <stdio.h>
//int main(){
//    printf("只要你坚持不懈的努力，一定会100%%de成功率.");
//}
/*
 %d   按有符号10进制（读入或者输出）
 %u   按无符号10进制（读入或者输出）
 %x   按无符号16进制（读入或者输出）
 %o   按无符号8 进制（读入或者输出）
 * */
/*关于字符串：双引号引起来的叫字符串，字符串里有两类字符
一类叫普通字符，对于printf来讲，原样输出，
还有一类叫特殊字符，例如\n表示换行.
%开头的表示格式化输出后面的值。
%%表示输出一个%*/
/*
、定义变量四件事：
1,比照类型分配对应大小的空间。例如int就是四个字节。
一个字节8个bits,4个字节就是32个bits.
2, 给这个空间取名，也就是所谓的变量名。它代表里面的值。
  (扩展来讲，所有的标识符都代表值）
3，要赋初始值，如果不赋初始值则为乱值。
4，一定有个首地址，记为&变量名，（例如：&a);
 */
//#include <stdio.h>
//int main(){
//    short int a = -123;
//    printf("%ho\n",a);
//    printf("%hx\n",a);
//    printf("%hu\n",a);
//    printf("%hd\n",a);
//}

/*
 short int   2            [-32768,32767]
 long  int   4            （-21亿,21亿）
 int         4            （-21亿,21亿）
 unsigned short int   2   [0,65535]
 unsigned long  int   4   [0,42亿）
 unsigned       int   4   [0,42亿）

 float  4    -10^38  10^38
double  8    -10^308  10^308
 * */
//#include <stdio.h>
////数值加到最大，会变最小的。
////数值最小减1，会变最大。所以我们学习数据类型时，一定要关注
////数值范围。
///*写一个浮点型常量，有两种写法：小数形式和科学计数法
// 写一个正确的科学计数法表示的浮点数，要满足两条：
// 1，e/E前必须有数字
// 2，e/E后必须有整形数
// */
//int main(){
//     char ch = 'a';//把字符常量a赋值给char型变量ch,
//                   //实际上就是字符对应的ASCII码值赋值给ch了。
//     printf("%hhd\n",ch);
//     printf("%c\n",ch);
//     char ch1 = -3;
//     printf("%hhd\n",ch1);
//     return 0;
//}
/*
 char类型有两种身份：
 1，一个字节整型数的数据类型。
     char a = -3;
 2, 存放字符的ASCII码值（就是给每个字符编的号码）；
     char ch = 'A';
 关于ASCII码，我们需要记住的：
 空格   32
 '0'   48
 '1'   49
 '9'   57
 'A'   65
 'B'   66
 'Z'   90
 'a'   97
 'b'   98
 'z'   122
 '\n'  10
 '\a'  7
 '\b'  8
 '\t'  9
 '\0'  0 c语言系统设计出来一个字符，表示字符串末尾，
 大写字母和小写字母相差 32，大写字母小，小写字母大。
 0到127，共128个。
 * */
/*
 例如：输入一个字符，判断它是大写字母，小写字母还是数字字符
 * */
//#include <stdio.h>
//int main(){
//    /*所有带* 的指针变量，在32位系统下都是4个字节，64位系统下8个字节*/
//   int a = 30;
//   int * p = &a;//p只能保存的是int型内存块的地址。
//   printf("1:%d\n",p[0]);//[i]表示某个地址后，下标为i的内存块，啥样类型的内存块，就看p是啥样内存块的地址，啥样内存块的地址，p[i]就是啥样内存块。
//   printf("2:%d\n",(&a)[0]);
//   (&a)[0] = 40;
//   printf("3:%d\n",p[0]);
//   float b = (float)3.14;
//   float * q = &b;//q只能保存的是float型内存块的地址。
//   printf("4:%.2f\n",q[0]);
//   q[0] = (float)5.86;
//   printf("5:%.2f\n",b);
//   char ch = 'A';
//   //&ch的数据类型是char * 型。
//   char * r = &ch;
//    (&ch)[0] = 'B';
//   printf("6:%c\n",r[0]);
//   char * w =  "w\x53\\\np\103q";//把一个字符串的地址赋值给char *型的指针变量，实际上是字符串第一个字符的地址赋值给指针变量了。
//   printf("7:%d\n",w[1]);
//}
/*
 关于转义字符：
 1，在单引号或者双引号引起来的字符序列中，\将其后面的字符
    转义成字符本身，让它失去系统赋予他的特殊含义。
 2,在单引号或者双引号引起来的字符序列中,\ooo(至多三个八进制数），表示八进制
 数作为ASCII码值，对应的字符。\xhh(最多两个十六进制数），表示16进制数作为ASCII
 码值，对应的字符。
 */
//#include <stdio.h>
//int main(){
//    int a = 30;
//    int *p = &a;
//    printf("%d\n",p[0]);//30
//    a = 40;
//    printf("%d\n",p[0]);//40
//    p[0] = 50;
//    printf("%d\n",a);//50
//    int b = 100;
//    p = &b;
//    printf("%d\n",p[0]);//100
//    p[0] = 200;
//    printf("%d\n",a);//50
//}
//#include <string.h>
//#include <stdio.h>
/*
int  strlen( char *_Str);
 函数原型有三部分构成 返回值类型 + 函数名 + 形参列表,是我们调用函数的依据。
 返回值类型：函数运算完后，返回的数值的类型，调用者就可以根据类型，定义相应的变量，来接收函数返回值数值，进行下一步处理。
 函数名：为了调用的。当然要符合命名规范。
 函数形参：函数原型括号里面的就是形参，函数被调用时，比照类型分配空间，接收实际参数的值的。
         形参相当于等号的左侧，实参相当于等号的右侧。
         必须按数目一样，类型一样，顺序一样，实参赋值给形参（自动赋值的）。
 */
/*
 int scanf( char *__format, ...)
 返回值类型是int,我们查资料知道，它是正确读取数值的个数。
 * */
//#include <stdio.h>
//int main(){
//    printf("%d\n",sizeof(int));//4
//    printf("%d\n",sizeof(short int));//2
//    printf("%d\n",sizeof("abcd"));//5
//    printf("%d\n",sizeof("aaaaa"));//6
//    printf("%d\n",sizeof(unsigned short int *));//8
//    printf("%d\n",sizeof(unsigned long int * ));//8
//}

//int main(){
//    int a = 0;
//    int b = 0;
//    int k = scanf("%d%d",&a,&b);
//    //1，输入xyz ,输出0
//    //2，输入3 xyz,输出1
//    //3, 输入3 5  输出2
//    //4, 输入3 5 7 输出2
//    printf("%d",k);
//    if(k == 2){
//        printf("两个数的和是：%d",a+b);
//    }else{
//        printf("输入错误！");
//    }
//}
/*
 例题：有个函数叫pow，它能计算两个数，例如x,y 能计算x的y次方。在#include <math.h>定义的
 现在输入两个数x,y，你能写出代码计算x的y次方吗？
 * */
//#include <math.h>
//int main(){
//    int x = 0;
//    int y = 0;
//    int k = scanf("%d%d",&x,&y);
//    if(k == 2){
//        double result = pow(x,y);//函数调用赋值给变量，就是函数的返回值赋值给变量了
//        printf("%lf",result);
//    }else{
//        printf("数据输入错误");
//    }
//}

/*例题：
 double  atof(const char *_String);
有个库函数叫atof，它的函数原型是上面的，形参是给个数值字符串的首地址，
 返回值，就是将字符串里面的数值，转换成double型的值了。
 请写代码将“123.456789”,转成double型数值，并保留小数点后两位输出。
 */
//请写代码将“123.456789”,转成double型数值，并保留小数点后两位输出。
//double atof(char *_String);
//int main(){
//    char * str = "123.456789";
//    double result = atof(str);
//    printf("%.2lf",result);
//}
//#include <math.h>

/*例题：
 double  atof(const char *_String);
有个库函数叫sqrt，它的函数原型是上面的，形参是给个数值字符串的首地址，
 返回值，就是将字符串里面的数值，转换成double型的值了。
 请写代码将“123.456789”,转成double型数值，并保留小数点后两位输出。
 */
/*有个库函数，叫sqrt，函数原型  double  sqrt(double _X);
 作用是开根号。参数有一个，要被开根号的数值，
 返回值是开根号后的结果。
 题目：实现如下程序，输入一个数，请输出开根号的结果值，小数点后保留三位。*
 */
//#include <stdio.h>
//#include <string.h>
//int main(){
//    double x = 0;
//    scanf("%lf",&x);
//    double y = sqrt(x);
//    printf("%.3lf",y);
//}
//strlen
/*
 有个库函数叫strcmp,功能是比较字符串的大小，
 逐个字符比较ascii码值，例如 ABcd ab 第二个串大于第一个串，返回-1。
 ABcd ABab 第一个串大于第二个串，返回1。
 它的函数原型 int strcmp( char *_Str1, char *_Str2);
 形参有两个，传入两个字符串首地址。
 返回值：第一个串大于第二个串，返回值为1，
 第一个串小于第二个串，返回值为-1，
 如果字符串相同，返回值为0；
 给定两个字符串，编程输出：（1）第一个大于第二个串，
                       （2）第一个小于第二个串，
                       （3）相等。
 “bacded”   "baCDEd"

 * */
//给定两个字符串，编程输出：
// (1)第一个大于第二个串，
// (2)第一个小于第二个串，
// (3)相等。
//#include <string.h>
//#include <stdio.h>
//int main(){
//    char * str1 = "bacded";
//    char * str2 =  "baCDEd";
//    /*请加入你的代码*/
//    int k = strcmp(str1,str2);
//    if(k == 1){
//        printf("第一个大于第二个串");
//    }else if(k == -1){
//        printf("第一个小于于第二个串");
//    }else{
//        printf("相等");
//    }
//    /*请加入你的代码完毕*/
//}
/*
 有个库函数叫strchr，
 函数原型是char * strchr( char *_Str,int _Val);
 作用：在字符串中查找某个字符出现的位置，
 形式参数1，字符串的首地址。
 形式参数2，要查找的字符。
 返回值：该字符出现在字符串中的地址。
 * */
// 请调用该函数，输出地址后的所有字符。
//#include <stdio.h>
//#include<string.h>
//int main(){
//    char * str = "abcdefgdijklmnopq";
//    char chr = 'd';
//    char * res = strchr(str,chr);
//    printf("%s",res);
//}
//    #include <stdio.h>
//    int main(){
//        printf("%d\n",sizeof(int));//4
//        printf("%d\n",sizeof(short int));//2
//        printf("%d\n",sizeof(long int));//4
//
//        printf("%d\n",sizeof(unsigned int));//4
//        printf("%d\n",sizeof(unsigned short int));//2
//        printf("%d\n",sizeof(unsigned long int));//4
//
//        printf("%d\n",sizeof(char ));//1
//        printf("%d\n",sizeof(unsigned char ));//1
//        printf("%d\n",sizeof(unsigned  long long int ));//4
//
//        printf("%d\n",sizeof(float ));//4
//        printf("%d\n",sizeof(double));//1
//
//        printf("%d\n",sizeof(unsigned int *));//8
//        printf("%d\n",sizeof(unsigned short int *));//8
//        printf("%d\n",sizeof(unsigned long int * ));//8
//    }
/*
     sizeof(字符串）就是字符串字符个数+1。
     sizeof(指针变量）就是8个字节。
 * */

/*
有两点好处(理解)：
   1，代码可读性好
   2，维护方便

 */
//#define WELCOME   "welcome join us!"
//#define PI 3.14
//#include <stdio.h>
//int main(){
//    int r = 0;
//    printf(WELCOME);
//    scanf("%d",&r);
//    printf("周长：%lf\n",PI * 2 * r);
//    printf("面积：%lf\n",PI * r * r);
//}
//预处理阶段完成的，做代码替换，代码中所有的3都用PI替换
/*用#define的好处
  1，代码可读性好
  2，维护方便*/

#include <stdio.h>
/*
 关于数组：
 1，数目固定，类型相同，连续存放一组有序的集合。
 2，C语言规定，数组名就是内存块的首地址，它是一个指针常量（数组名不能自增自减，也不能另外赋新值）
 3，a[i]表示a代表的地址后，第i个内存块（啥样类型的内存块呢？就看a是啥样类型内存块的地址。
                                   啥样内存块的地址，就啥样类型的内存块）。
 4，部分元素赋初始值，其它未赋值的元素均为零，如果不赋初始值，所有值都为乱值。
    数值型（int a[10])只有一种赋初始值的方法。
    char型数组有两种赋初始值的方法,第一种，按数值型方法来赋值。
    char str[100] = {'a','b',-3}；
    第二种按字符串的方法来赋值：
    char str1[100] = {"abcde"};
 5，sizeof(数组名),测试的是数组的大小。
 6，数组长度如果不写的前提条件是：必须全部元素赋初始值了。
 7，数组名作为函数形参，退化成指针变量。
 * */
/*
 20、输入一串字符，将其中的大写字母变成对应的小写字母并输出。
 * */
#include <math.h>
#include <strings.h>
/*任意输入两个double型的数(x和y)，编程实现，输出x的y次方的结果。*/
//int main(){
//    double x = 0;
//    double y = 0;
//    double z = 0;
//    //预防性编程
//    int k = scanf("%lf%lf%lf",&x,&y,&z);
//    if(k != 3){
//        printf("输入错误");
//        return 0;
//    }
//    if(x<=0||y<=0||z<=0||x+y<=z||x+z<=y||y+z<=x){
//        printf("无法构成三角形");
//        return 0;
//    }
//    double s = (x+y+z)/2;
//    double area = sqrt(s*(s-x)*(s-y)*(s-z));
//    printf("%.2lf",area);
//    return 0;
//}
/*
 (一)算术运算符：
  + - * / % -(负号）
  关于 /:
  (1)两个整数相除，必得整数，为地板除。
  (2)分子或者分母，只要有一个是浮点数，就是通常意义的除法了。
  (3)分母不能为0，否则崩溃。
  关于%:
  (1)用于计算两个数相除后得到的余数。余数为0，表示两个数整除了。
  (2)参与运算的量必须是整形量，其结果也是整形量。
  (3)某个正数和n取余，其结果范围是[0,n-1]。
  （二）关于自增 自减：
  （1）自增自减只能应用于变量。例如数组名就不能自增自减。
  （2）单独的一条语句，i++或者++i是没有区别的。
        但是i++或者++i在其它表达式上的时候，变量在前，先用变量参与
        所在表达式的运算，然后再自增。符号在前，先自增，再参与所在表
        达式的运算。（i--和--i规则相同）
   (3) 当多个+或者多个-连写的情况，编译器识别前两个+或者前两个-为自增
       自减运算符。
   （三）关于关系运算符号：> >= < <= == !=
      1，关系运算的结果只能是0（假），1（真）
      2，只能表达简单的关系。例如某个数，3<x<5,这样写是错误的。
         应该用逻辑运算符连接起来 3<x && x< 5
      3,= 优先级是14，表示赋值，把右侧的值赋值给左侧的变量。
        ==  优先级是7 ，表示比较，相等为真，不相等为假。
   （四）关于逻辑运算符：&& （11级优先级） || （12级优先级） ！（2级优先级）
   (1) 运算结果也只能是0或者1.
   (2) 注意短路：例如&&，只要前面有一项为假，后面不会再计算。
                   ||，只要前面有一项为真，后面都不再计算。
   （五）关于三目运算运算符：？: 优先级13
       嵌套是右结合的，计算是左结合的。
   （六）关于赋值运算符：=    += -= *= /= %=
                     &= |= ^= <<= >>= (共10个）
          等号左侧一定是可以赋值的内存单元（例如变量）
   （七）关于逗号运算符：
      （1）逗号表达式是多条赋值语句的表达式写法，计算时，将逗号看成分号。
      （2）逗号表达式的结果是以最后一个表达式的结果为结果的。
   （八） 关于强制类型转换：
 （1）指针类型的数据，可以任意强制转换成任意的指针类型，只要你认为合理。
      例如，大小端字节序。CPU在处理整形数的时候，
      高字节放到低地址，叫大端。
      低字节放到低地址，叫小端。
      例如 整形数0x12345678
      大端：12 34 56 78
      小端：78 56 34 12
      如何写程序判断CPU是大端还是小端？
  （2）如何取出整型数的第二个字节？
       int a = 0x12345678;
       (char *)&a
   (3)相同类型才可以计算，如果类型不同，会自动转成相同类型计算。
       例如int 型 + unsigned int 相加，都会自动转换成unsigned int.
   （九）位运算符： &  优先级8,位与运算，两个数逐个比特位进行计算，两位都是1，则为1，否则为零。
                 |  优先级10，位或运算,两个数逐个比特位进行计算, 两位只要有一个为1，则为1，否则为零
                 ^  优先级9，位异或运算两个数逐个比特位进行计算，相同为0，不同为1；
                 << 优先级5，左移,左移动n位就等于原数乘以2的n次方。
                 >> 优先级5，右移，左移动n位就等于原数除以2的n次方。
                 ~v 优先级2，自反，所有位，0变1,1变0；
        应用场景：
             （1）用你所知道的最快的算法，判断一个数是否是2的n（n>=0)次方？
             （2）用你所知道的最快的算法，计算一个无符号整型数中，到底有多少个1？
             （3）将一个无符号的整形数的第七和第八位置1，代码如何写？
             （4）将一个无符号的整形数的第七和第八位置0，代码如何写？
              (5) 写代码取的第七位和第八位的值？
              (6) 写代码将无符号整形数的后四位清零。
              (7) 已知当有 short int BitsToWaitFor，某位如果为1，表示等待的位。
                   uxEventBits 是当前比特位的情况。如何判断所有位都等到了。
  (十)sizeof运算符，优先级是2
  （十一） [] ,优先级为1，表示某个地址后第几个内存块。
  （十二）& 和 * &块找点，* 点找块。
  （十三）.和-> 结构体专用的。优先级都为1.
  所有表达式的运算规则：
     从左向右两两运算赋比较优先级，左边优先级高的，先计算左边的，
  右边运算符优先级高的，继续向右找，直到找到相对最好的优先级进行
  计算。如果优先级相同，看结合性(单目运算是右结合的，双目运算是
  左结合的，三目运算嵌套是右结合，计算是左结合的），左结合，先计算
  左边的，右结合，继续向右找，直到找到相对最高的优先级进行计算。
     重复以上步骤。
     遇到&&和||注意短路。
 * */
/**已知当有 short int BitsToWaitFor，某位如果为1，表示等待的位。
uxEventBits 是当前比特位的情况。
如何判断所有位都等到了。*/
//int main() {
//    unsigned short int a = 0xffff;
//    a &= ~0xf;
//    printf("%hhx", a);
//}



/*
 for循环的应用场景：
     1，已知循环次数，循环变量从零开始，小于多少就循环多少次。
     2，已知开始值，结束值，和步长循环时，用for循环。
 while循环：
     循环次数是根据中间运算结果决定的。此时while就比较方便。
 * */
/*
 关于强制类型转换：
 （1）指针类型的数据，可以任意强制转换成任意的指针类型，只要你认为合理。
      例如，大小端字节序。CPU在处理整形数的时候，
      高字节放到低地址，叫大端。
      低字节放到低地址，叫小端。
      例如 整形数0x12345678
      大端：12 34 56 78
      小端：78 56 34 12
      如何写程序判断CPU是大端还是小端？
  （2）如何取出整型数的第二个字节？
       int a = 0x12345678;
       (char *)&a
   (3)相同类型才可以计算，如果类型不同，会自动转成相同类型计算。
       例如int 型 + unsigned int 相加，都会自动转换成unsigned int.
 * */
//int main() {
//    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12};
//    int n = sizeof(a)/sizeof(a[0]);
////    int couples = n/2;
////
////    for(int i = 0;i<couples;i++){
////        int t = a[i];
////        a[i] = a[n-1-i];
////        a[n-1-i] = t;
////    }
////    for(int i = 0;i<n;i++){
////        printf("%d ",a[i]);
////    }
//    /*下面用指针法再做一遍。*/
//    int * p = a;
//    int * q = a + n - 1;
//    while(p<q){
//        int t = *p;
//        *p = *q;
//        *q = t;
//        p++;
//        q--;
//    }
//    for(p = a;p<a+n;p++){
//        printf("%d ",*p);
//    }
//}
//int main(){
// 关于sizeof:
//    能测试常量，变量，数组，类型所占或者应占内存空间的大小，单位字节数。
//（1）测试常量字符串就是字符个数加1。
//    printf("%d\n",sizeof("i love china"));//13
///*(2) 测试变量就是变量比照类型分配的空间大小。
//*/
//    char ch = 'A';
//    printf("%d\n",sizeof(ch));//1
///*(3) 测试数组名就是数组所占空间大小。
//*/
//    short int a[10]= {1,2,3}; // short int 类型占2个字节
//    printf("%d\n",sizeof(a));//20
///*(4) 测试类型就是类型应该占空间大小。
//*/
//    printf("%d\n",sizeof(long long int));//8
///*(5) 测试指针变量，在32位系统下，4个字节，64位系统下，是8个字节。
//*/
//    short int a = 10;
//    short int * p = &a;
//    printf("%d\n",sizeof(p));//8
///*(6) 数组名，作为函数形参，退化成指针变量，sizeof(指针变量）,
// * 在32位系统下，4个字节，64位系统下，是8个字节。
//*/
//}
// 关于strlen:
//  unsigned long long int strlen( char * str);
//  作用：能测试出从某个地址开始，截止到第一个\0中间字符的个数，（不含\0);
//  参数：接收字符串地址的指针变量。即从此地址开始测试字符串长度。
//  返回值；从某个地址开始，截止到第一个\0中间字符的个数，（不含\0);
//
//int main(){
//    char * p = "asfasdf";
//    unsigned long long n = strlen(p); // 传入字符串首地址p
//    printf("%d\n",n);
//    printf("%d\n", strlen("abc")); // 字符串作为参数，C语言中字符串即为字符数组，传入字符数组的首地址，即第一个字符a的地址。
//    printf("%d\n", strlen('a')); // 'a'作为字符常量，数据类型与参数char * str不符, 报错。
//}

//13、从键盘输入n和a的值，计算a+aa+aaa+...+aa...a(n个a)的值。
//int main() {
//    int n = 10;
//    int a = 2;
//    int sum = 0;
//    for (int i = 0; i < 10; i++) {
//        sum = sum * 10 + a;
//        printf("%d\n",sum);
//    }
//    printf("%d",sum);
//}
//*/
//int main(){
//   int a = 0;
//   int b = (a=3*5, a*10, a+8);
//   printf("%d",b);
//}
//int main(){
//    char ch = -3;
//    short int a = ch;
//}
//14、输入5个数，求它们中最大值和平均值并输出。
//int main(){
//    char str[100] = {0};
//    scanf("%s",str);
//    int i = 0;
//    int j = 0;
//    for(i = 0;str[i]!='\0';i++){
//        if(str[i]!='a'){
//            str[j++] = str[i];
//        }
//    }
//    str[j] = '\0';
//    printf("%s",str);
//}
//8、编写程序，将用户输入的字符串中所有的字符a用*代替，然后输出。
/*关于函数定义：
 1,C语言是先声明再使用的语言，如果调用在前，定义在后，必须进行函数原型的声明。
   函数原型的声明就是告诉编译器，有这么样的函数，编译器会根据函数原型的声明
   来测试函数调用的语法是否正确。如果定义在前，调用在后，可以不进行函数原型的
   声明。
 2，函数返回值值类型是函数运算完成后，返回的数值的类型，调用者就可以根据返回值类型，定义相应类型的变量
   来接收函数返回值，进行下一步的处理。函数的形参是函数被调用时，根据它的类型分配空间，接收实际参数的值的。
   可以认为形参就是函数的局部变量。定义在函数体中的变量叫局部变量，局部变量保存函数运算过程中中间结果数据的。
   局部变量的作用范围是本函数（不同的函数，可以用相同名字的局部变量，他们不冲突，代表不同的存储单元）。
 3，函数被调用时，产生栈帧，形参将分配空间，接收实际参数的值。在运行过程中，局部变量也将分配空间。
    函数调用结束后，栈帧将释放（形参和局部变量分配的空间会自动释放）（不能返回局部变量的地址)
 4, 必须按数目一样，类型一样，顺序一样的原则进行函数实参和形参的结合。实参赋值给形参是单向传递的。
    也就是实参的值可以赋值给形参，而形参的改变不会影响到实际参数。
 */

/*输入n的值，计算并输出1*1+2*2+3*3+4*4+5*5+...+n*n的值。要求编写函数f求平方*/
/*42、输入一个不多于19位的正整数，判断它是几位数，
 * 并逆序返回各位数字,
 * 要求写一个函数，完成这些功能。*/
/*从键盘输入10个数，统计非正数的个数，并计算非正数的和。*/
/*一个皮球从100米高度自由落下，每次落地后反弹回原高度的一半，再落下，再反弹。
 * 求当它第10次落地时，共经过了多少米，第10次反弹多高？*/
/*24、输入一个正整数，输出它的阶乘。*/
/*指针是一把双刃剑，带来便利的同时，也带来了不希望改变主调函数的变量的情况下，
 * 改变调用者变量的风险*/
//double fun(unsigned int a){//形参设计指针变量，大概率是调用者想得到一些数据，
//    double ret = 1;
//    for(int i = 1;i<=a;i++){
//        ret *= i;
//    }
//    return ret;
//}
//int main(){
//    for(int i = 1;i<=100;i++){
//        printf("%.0lf\n",fun(i));
//    }
//}
/*
 进程和线程：
    （1）运行起来的程序叫进程，它是资源管理的最小单位，资源主要指的是内存。
    每个进程都有自己独立的内存空间。当然这个空间是虚拟内存，不是物理内存。
    （2）同一个进程中多条同时运行的执行路径，线程必须依赖于进程存在。也就是
    一个进程中必有一个线程，当然也可以有多个线程。
    线程就是CPU调度的最小单位。
 内存的五大分区：
 （1）栈区 函数的形参和局部变量分配到栈区，函数调用时，形参和局部变量将分配空间，
          函数调用结束后，形参和局部变量分配的空间将自动释放。
          栈区的大小一般是1M或者2M。
          栈的增长方向是向下增长的。
 （2）堆区  由malloc函数分配出来的内存空间，分配到堆区，
           分配出来的内存必须通过free函数释放内存，否则内存泄漏。
            void *  malloc(unsigned long long int _Size);
            作用：在堆区分配_Size大小的内存空间，单位字节。
            参数_Size：表示将在堆上分配多少字节的内存空间。
            返回值 void * ：返回产生_Size字节数内存空间的首地址。
            使用时强制类型转换到实际的指针类型。
 （3）常量文本区
           常量字符串存放在常量文本区，常量区的内容是只能读的 不能被修改的,修改会崩溃.
 （4）全局静态区
           全局变量和静态局部变量存放的区域：
           函数外定义的变量叫全局变量。
           局部变量前static,表示静态局部变量：静态局部变量存放到全局静态区，
           每次函数调用结束后，内存不释放，值仍保留。每次函数重新调用时，也不会为其
           重新分配内存，只初始化一次。
           在编译链接阶段。
           未初始化的全局变量和静态局部变量 分配到BSS段。
           也将置为0.
           初始化的全局变量和静态局部变量，分配到DATA段。

 （5）程序代码区
          程序的代码存放的区域。
 * */
//#include <stdlib.h>
//
//char *fun() {
//    //char str[100] = {"hello world!"};//栈内存，函数调用完后立即释放，导致指针成为野指针
//    char *p = (char *) malloc(100);//产生堆内存，因为函数调用完后，不释放。
//    char *str = "hello word!";
//    int i = 0;
//    for (i = 0; str[i] != '\0'; i++) {
//        p[i] = str[i];
//    }
//    p[i] = '\0';
//    return p;
//}
//int main(){
//    char * p = fun();
//    printf("%s",p);
//    free(p);//必须要释放，否则内存泄漏。
//    p = NULL;//free后，p的值不可能被改变。因为我们要想改变主调函数变量的值，必须传入
//            //变量的地址才有可能。此处free时，没有传入变量地址，所以变量的值不可能被free改变。
//}

//#include <stdlib.h>
//char * fun(){
//    char * p = (char *)malloc(100);//产生堆内存，因为函数调用完后，不释放；
//    char * str = "hello world!";//若没有上一行代码malloc函数，此处的str将会变成野指针，因为函数被调用完成后，局部变量在栈内的内存会被自动释放；
//    int i = 0;
//    for(i = 0;str[i] != '\0';i++){
//        p[i] = str[i];
//    }
//    p[i] = '\0';
//    return p;
//}
//int main(){
//    char * p = fun();
//    printf("%s\n",p);
//    printf("%x\n",p);
//    free(p);//必须要释放，否则会内存泄漏；
//    /*free后，p的值不可能被改变。因为我们要想改变主调函数变量的值，必须传入变量的地址才有可能。
//     * 此处free时，没有传入变量地址，所以变量的值不可能被free改变*/
//    printf("%x\n",p);
//    printf("%s\n",p);
//    p = NULL;
//    printf("%x\n",p);
//    printf("%s\n",p);
//}

//void fun(char * * q){
//    *q = "hello world";//这里的*q,就是找到了主调函数的p.
//}
//int main(){
//    char * p = "abcdef";
//    fun(&p);
//    printf("%s",p);
//}
//char * fun1(){
//    char ch = '3';
//    return &ch;//不能返回局部变量的地址。
//}
//char fun2(){
//    char ch = '3';
//    return ch;
//}
//int main(){
//    char *p = fun1();
//    printf("%d\n",*p);
//    char ch = fun2();
//    printf("%d\n",ch);
//}
//    void fun(int a){
//        int b = 0;
//        static int c = 0;
//        b++;
//        c++;
//        printf("%d: b=%d,c=%d\n",a,b,c);
//    }
//    int main(){
//        for(int i = 0;i<2;i++){
//            fun(i);
//        }
//    }
/*
 /*
 1,指针：
    指针也叫地址，内存块的首位置，英文名叫pointer,
    它是一个常量，例如 int a= 10;&a就是a的地址，就是一个常量值。
    再例如数组名，int a[10],a就是常量，a就是地址，也叫指针。
 2，指针变量：
    顾名思义，指针（地址）变量，也就是存放指针（地址）的变量。
    例如int * p :p只能存放int型内存块的地址。
    关于指针变量，要注意：
    （1）指针变量必须初始化，否则禁止使用。
    （2）把谁的地址赋值给指针变量，换句话说，指针变量保存了谁的
        地址，我们就说，指针变量指向了谁。
    （3）在32位系统下，所有指针变量都是4个字节。
        在64位系统下， 所有指针变量都是8个字节。
3，*p的含义：
    点找块（根据p代表的地址值，找对应类型的内存块。
          啥样类型？就看p代表啥样类型内存块的地址，
          啥样类型内存块的地址，就找啥样类型的内存块。）
    注意：（1）如果p为NULL，*p 会崩溃。
         （2）如果p为乱值， *p 会崩溃。
4，p+n的含义：
    表示p代表的地址，向右偏移n个存储单元，得到一个新的地址值。
    啥样存储单元？就看p代表啥样类型存储单元的地址，
          啥样类型存储单元的地址，就偏移n个存储单元的字节数。
    例如：double * p ; p+=3;//p向右跳了24个字节。
    在一个连续空间中，两个指针相减，等于间隔的内存单元的个数。
    （啥样内存单元？就看两个指针是啥样类型存储单元的地址，
          啥样类型存储单元的地址，就间隔啥样类型的存储单元。）
5，p[n]的含义：
     表示p代表的地址后，下标为n的内存块。
     （啥样类型的内存块？就看p代表啥样类型内存块的地址，
          啥样类型内存块的地址，就为啥样类型的内存块）。
6，支持的运算：
     (1),算术运算符 + - * / % -(负号）
               4 4 3 3 3 2
       两个指针能相加吗？不能。
       一个指针能加个整型数吗？能，表示向右偏移n个存储单元，得到一个新的地址。
       两个指针能相减吗？在一个连续空间中，两个指针相减才有意义。
       两个指针 * / % - 都是没有意义的。
      (2)（强转），指针数据可以强转成任意的指针类型。
         整形数据是否可以强转成指针数据呢？可以，可以互相转。
      (3) 自增，自减（++ --），优先级为2
          指针变量能否自增，自减？能。
      (4) 关系运算符   > >= < <= == !=
                     6  6 6 6  7  7
          指针数据是支持的。
      (5) 逻辑运算符   && || ！
                     11 12 2
          非常支持。
      (6) 三目运算符  ？： 支持。
      (7) 赋值运算符   相当的支持。
      (8) 逗号运算符   支持。
      (9) 位运算符    & | ^ << >> ~ 指针不支持
                    8 10 9 5 5 2
      (10) sizeof运算符： sizeof(指针变量） 32系统下都是4个字节。
                                        32系统下都是8个字节。
      (11) [] 优先级是1级运算符。支持
           表示某个地址后，下标为n的内存块。
      (12) &和* 支持。
          指针变量的地址，是**的类型。
          普通变量的地址，是*的类型。
          * 就是点找块。
       (13) .和-> 都是一级运算符，结构体使用。
 * */

// 11月30日作业
//27、输入一串字符，逆序输出。要求使用数组实现。

//void func(char *str) {
//    int n = strlen(str);
//    int temp = 0;
//    for (int i = 0; i < n / 2; i++) {
//        temp = str[i];
//        str[i] = str[n - i - 1];
//        str[n - i - 1] = temp;
//    }
//}
//
//int main() {
//    char str[100] = {0};
//    printf("请输入一个字符串: ");
//    scanf("%s", str);
//    func(str);
//    printf("逆序输出字符串: %s", str);
//}

//28、求1-1/2+1/3-1/4+...+1/99-1/100的值。

//void func(float *p_sum) {
//    *p_sum = 0;
//    int symbol = 1;
//    for (int i = 1; i <= 100; i++) {
//        *p_sum += symbol * (1.0 / i);
//        symbol = -symbol;
//    }
//}
//
//int main() {
//    float sum = 0;
//    func(&sum);
//    printf("%.2f", sum);
//}


//30、求两个正整数的最大公约数。
#include <stdio.h>
#include <assert.h>
/*辗转相除法，又称欧几里得算法，用于计算两个正整数a和b的最大公约数（GCD）。
 * 其计算过程基于这样一个事实：两个数的最大公约数不改变，如果较大数减去较小数。
 * 更有效的方法是用较小数除较大数，取余数，再用较小数除得到的余数，依此类推，
 * 直至余数为0。此时，较小数即为两数的最大公约数。*/
// 定义一个函数来计算两个整数的最大公约数
//int gcd(int a, int b) {
//    // 当b不等于0时，继续执行循环
//    while (b != 0) {
//        // 计算a除以b的余数，并将其存储在r中
//        int r = a % b;
//        // 将b的值赋给a
//        a = b;
//        // 将余数r的值赋给b
//        // 下一轮循环将使用新的a和b值继续计算
//        b = r;
//    }
//    // 当b等于0时，循环结束，此时a中存储的就是最大公约数
//    // 返回最大公约数a
//    return a;
//}

//
//int main() {
//    int a = 48, b = 18;
//    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
//    return 0;
//}
//31、求100之内自然数中奇数之和。
//int func(int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        if (i % 2 != 0) {
//            sum += i;
//        }
//    }
//    return sum;
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int sum = func(n);
//    printf("%d", sum);
//}
//32、输出所有200-400之间能被3整除且个位数字为7的整数。
//int fun(int a[]){ //数组名作为函数参数，将退化成int *a
//    int cnt = 0;
//    for(int i = 200;i<=400;i++){
//        if(i%3 == 0&& i%10 == 7){
//            a[cnt] = i;
//            cnt++;
//        }
//    }
//    return cnt;
//}
//int main(){
//    int arr[200] = {0};
//    int cnt = fun(arr);
//    for(int i = 0;i<cnt ;i++){
//        printf("%d ",arr[i]);
//    }
//}
//33、编程计算1*2*3+4*5*6+...+97*98*99
//long long int func() {
//    long long int sum = 0;
//    for (int i = 1; i <= 97; i = i + 3) {
//        sum += i * (i + 1) * (i + 2);
//    }
//    return sum;
//}
//
//int main() {
//    long long int res = func();
//    printf("%lld", res);
//
//}
//41、从键盘输入一个字符串，再输入两个正整数m和n，输出字符串中从m开始，连续n个字符。例如，输入abcdefg，2，3，输出bcd。

//void func(char *p_str, int m, int n) {
//    for (int i = 0; i < n; i++) {
//        printf("%c", p_str[m-1]);
//        m++;
//    }
//}
//
//int main() {
//    char str[100] = "0";
//    int m = 0;
//    int n = 0;
//    printf("输入一个字符串: ");
//    scanf("%s", str);
//    printf("输入m: ");
//    scanf("%d", &m);
//    printf("输入n: ");
//    scanf("%d", &n);
//    func(str, m, n);
//}


//38、输入任意三个数，按从大到小的顺序输出

//void func(int *p_arr) {
//    int temp = 0;
//    for (int i = 0; i < 2; i++) {
//        if (p_arr[i] < p_arr[i + 1]) {
//            temp = p_arr[i + 1];
//            p_arr[i + 1] = p_arr[i];
//            p_arr[i] = temp;
//        }
//    }
//    if (p_arr[0] < p_arr[1]) {
//        temp = p_arr[1];
//        p_arr[1] = p_arr[0];
//        p_arr[0] = temp;
//    }
//    for (int i = 0; i < 3; i++) {
//        printf("%d ", p_arr[i]);
//    }
//}
//
//int main() {
//    int arr[3] = {0};
//    for (int i = 0; i < 3; i++) {
//        scanf("%d", &arr[i]);
//    }
//    func(arr);
//}

//int main() {
//    unsigned int *p = (unsigned int *) 0x20000000;
//    p += 6;
//    printf("%#x", p);
//}

// 小端输出，低地址放低字节
//int main() {
//    int a = 0x12345678;
//    char *p = (char *) &a;
//    if (*p == 0x78) {
//        printf("小端");
//    } else {
//        printf("大端");
//    }
//}
//
//void fun(int * a){
//    a++;
//    *a++;
//    (*a)++;
//    a++;
//    *a++;
//    (*a)++;
//    a++;
//    *a++;
//    (*a)++;
//}
//int main(){
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    fun(a);
//    for(int i = 0;i<10;i++){
//        printf("%d ",a[i]);
//    }
//}
//#define PI 3.14
//float func(float r) {
//
//    printf("圆周率为:%f, 半径为: %f\n", PI, r);
//    printf("面积为: %.2f", PI * r * r);
//}
//
//int main() {
//    printf("请输入半径: ");
//    float r = 0.0;
//    scanf("%f", &r);
//    func(r);
//}

//# define stu_cnts 500
//int main(){
//    printf("\"How many student here ?\"\n");
//    printf("\"%d\"",stu_cnts);
//}

//int main(){
//    int a = 0;
//    int b = 0;
//    int temp = 0;
//    scanf("%d%d",&a,&b);
//    temp = a;
//    a = b;
//    b = temp;
//    printf("a = %d, b = %d",a,b);
//}

//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
//    printf("%d", max);
//}
// 输入一个不超过19位的正整数，逆序输出
//unsigned long long int revert(unsigned long long int a) {
//    unsigned long long int b = 0;
//    while (a) {
//        int c = a % 10;
//        b = b * 10 + c;
//        a /= 10;

//    }
//    return b;
//}
//
//int main() {
//    unsigned long long int a;
//    scanf("%llu", &a);
//    unsigned long long int b = revert(a);
//    printf("%llu", b);
//}


//    /* 关于 break
//     如果发生break,那么循环条件必定满足，因为循环条件满足，才可以进入
//     循环体，才有可能执行break,如果发生break,那么循环条件必定满足。
//     如果循环完成后，循环判定条件不满足了。
//     那么一定没有发生break,是正常循环结束了。
//     我们根据这样的结论，在循环结束后，通过判断循环条件是否满足，
//     就可以判定，是否发生了break，对于本题来讲，如果发生break,
//     那么对应字符不一样，就不是回文了。理解并使用这个编程套路，可以解决
//     70%到80%的编程任务。
//     * */
// 判断输入的数是否为一个回文数
//#include <stdbool.h>
//
//bool judge_str(char *str) {
//    char *p = str;
//    char *q = str + strlen(str) - 1;
//    while (p < q) {
//        if (*p != *q) {
//            break;//跳出循环
//        }
//        p++;
//        q--;
//    }
//    if (p < q) {  // 判断循环提交是否满足，如果满足，代表break执行了。如果不满足，代表循环正常结束。
//        return false;
//    }
//    return true;
//
//}
//
//int main() {
//    char *str = {"abcdefdcba"};
//    if (judge_str(str)) {
//        printf("回文");
//    } else {
//        printf("不是回文");
//    }
//}

/*指针是一把双刃剑，提供便利性的同时，也带来了风险*/
/*
   const char * str:str只能保存const char型的内存地址。
                       const char就是常量char的意思，是不能通过str改变的。
                       str可以改变吗？能
   char *  const str: 常量的str保存 char型的内存地址。
                       能通过str改变指向的内存块的值吗？能
                       str可以改变吗？不能
   const char * const str: 都不能改。
*/

// 统计字符串中数字的个数，并删除字符串中的'a'字符
//int get_nums(const char *str) { //对于需求来讲，没有必要改变原串，就要加const关键字保护一下。
//    int cnt = 0;
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (str[i] >= '0' && str[i] <= '9') {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//void delete_chr(char *str) {//既然想改变原始字符串，那就不要加const关键字
//    char *p = str;
//    char *q = str;
//    while (*p) {
//        if (*p != 'a') {
//            *q++ = *p;
//        }
//        p++;
//    }
//    *q = '\0';
//}
//int main() {
//    char str[100] = {0};
//    scanf("%s", str);
//    /*1开始统计数字字符的个数*/
//    int cnt = get_nums(str);
//    printf("%d\n", cnt);
//    /*2删除字符串里的所有a字符*/
//    delete_chr(str);
//    printf("%s", str);
//}

//作业：
//37、输入一个华氏温度，输出摄氏温度，计算公式为c=5/9*(F-32)。要求结果保留两位小数
//double func(double f) {
//    double c = 0.0;
//    c = 5.0 / 9.0 * (f - 32);
//    return c;
//}
//
//int main() {
//    double f = 0.0;
//    scanf("%lf",&f);
//    printf("输入华氏温度:%.2lf, 摄氏温度: %.2lf", f, func(f));
//}
// 38、输入任意三个数，按从大到小的顺序输出
// (1)_1 选择法排序(把最大的放左边), 相对于冒泡法, 从左到右，每一轮下标选最大值, 如果后面的数小于该轮下标值，则不用交换位置。 比冒泡法交换次数要少。
//void selection_order(int *arr, int n) {
//    for (int i = 0; i < n - 1; i++) { // 每个下标位置，进行循环，目的是为每个下标，找到最大值。
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] < arr[j]) {
//                int temp = 0;
//                temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    int arr[10] = {22, 33, 11, 222, 5, 3, 2, 1, 2, 66};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    selection_order(arr, n);
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//}
// (1)_2 冒泡排序(把最小的放右边)
//void bubble_order(int *a,int n){
//    for(int i = 1;i<n;i++){ //比较的轮数，每一轮，冒一个泡。
//        for(int j = 0;j<n-i;j++){
//            if(a[j] < a[j+1]){
//                int t = a[j];
//                a[j] = a[j+1];
//                a[j+1] = t;
//            }
//        }
//
//    }
//}
//int  main(){
//    int a[] = {123,456,78,999,37,143,77,222,333};
//    int n = sizeof(a)/sizeof(a[0]);
//    bubble_order(a,n);
//    for(int *p = a;p<a+n;p++){
//        printf("%d ",*p);
//    }
//
//}


// (2). 求三个数的最大值max，最小值min，然后三数之和减去(max+min)求出第二大数。用宏实现求最大值最小值。
//#define GET_MAX(a,b,c)  ((a)>(b)?((a)>(c)?(a):(c)):((b)>(c)?(b):(c)))
//#define GET_MIN(a,b,c)  ((a)<(b)?((a)<(c)?(a):(c)):((b)<(c)?(b):(c)))
//int main(){
//    int x = 0;
//    int y = 0;
//    int z = 0;
//    scanf("%d%d%d",&x,&y,&z);
//    int max = GET_MAX(x,y,z);
//    int min = GET_MIN(x,y,z);
//    int mid = x+y+z - max -min;
//    printf("%d %d %d ",max,mid,min);
//}
// (3) 宏与函数调用的区别举例
//#define PI 3.14
//#define GET_AREA(r)   (PI*(r)*(r))
//double get_area(int r){
//    return (PI * r * r);
//}
//int main(){
//    printf("%lf\n",GET_AREA(3+2));
//    //printf("%lf\n",(PI*3+2*3+2)); // 宏里的参数必须要加括号，不然做代码替换后，结果可能不对。
//    printf("%lf\n",get_area(3+2));
//}
// (4) 定义个宏，传入数组名，得到数组的长度
//#define  GET_LEN(a) (sizeof(a)/sizeof((a)[0]))
//int main(){
//    int b[] = {1,2,4,5,6,7};
//    int nums = GET_LEN(b);
//    printf("%d",nums);
//}
// (5) 定义个宏，判断一个数，是不是2的n次方
//#define  JUDGE(a) ((a&(a-1)) == 0 ?"是":"不是")
//
//int main() {
//    unsigned int a = 0;
//    scanf("%u", &a);
//    printf("%s", JUDGE(a));
//}

//39、用1元人民币兑换5分、2分、1分的硬币共50枚，每种硬币至少一枚，问共有多少种兑换方案？输出每一种方案中三种硬币的数量
//int main() {
//    int cnt = 0;
//    for (int i = 1; i < 20; i++) { //5分的个数，循环
//        for (int j = 1; j < 50; j++) { //2分的个数，循环
//            if (i * 5 + j * 2 < 100 && i + j + 100 - i * 5 - j * 2 == 50) {
//                cnt++;
//                printf("5:%d,2:%d,1:%d\n", i, j, 100 - i * 5 - j * 2);
//            }
//        }
//    }
//    printf("总方案数：%d", cnt);
//}
//40、从键盘输入圆的半径，计算并输出圆面积与周长，要求结果保留两位小数。
//41、从键盘输入一个字符串，再输入两个正整数m和n，输出字符串中从m开始，连续n个字符。例如，输入abcdefg，2，3，输出bcd。
//#include <assert.h>
//#include <string.h>
//
//int fun(const char *str, int m, int n, char *out) {
//    if (str == NULL || m < 0 || n < 0 || out == NULL) {
//        printf("输入参数有误！\n");
//        return 0;
//    }
//    assert(str != NULL && m > 0 && n > 0 && out != NULL);
//    // 断言：必须满足这些条件，否则我就自己崩溃，会打印出报错的文件，哪一个函数，哪一行代码，这样可以加速调试进度。
//    int len = (int) strlen(str);
//    if (m > len) {
//        return -1;//m太大，取不到字符。
//    }
//    for (int i = 0; i < n; i++) {
//        out[i] = str[m - 1 + i];
//        if (out[i] == '\0') {
//            break;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    char str[100] = {0};
//    int m = 0;
//    int n = 0;
//    char out[100] = {0};
//    scanf("%s%d%d", str, &m, &n);
//    int k = fun(str, m, n, out);
//    if (k == -1) {
//        printf("输入错误！");
//        return 0;
//    }
//    printf(out);
//}
//42、输入一个不多于5位的正整数，判断它是几位数，并逆序输出各位数字
//int fun(int n, int *cnt) {
//    *cnt = 0;
//    int res = 0;
//    while (n) {
//        res = res * 10 + n % 10;
//        n = n / 10;
//        (*cnt)++;
//    }
//    return res;
//}
//
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    int cnt = 0;
//    int res = fun(a, &cnt);
//    printf("逆序输出: %d  一共有%d位", res, cnt);
//}

//关于稳定排序和非稳定排序
//  假设：有如下三个数，请按数字的后三位由大到小排序。 // 对1000取余，得到后三位数
//       1011 2011  3033
//  冒泡：3033 1011  2011
//  选择：3033 2011  1011
//  稳定排序：按某种比较规则如果相等，排序后的次序和排序前的元素次序不变。叫稳定排序。
//           按某种比较规则如果相等，排序后的次序和排序前的元素次序发生了变化。叫非稳定排序。
//           所以，冒泡是稳定排序，而选择法是非稳定排序。
//输入n个数，将n个数，由大到小排序，写个函数
//void bubble_sort(int *a, int n) { //冒泡法排序。
//    for (int i = 1; i < n; i++) { //比较的轮数，每一轮，冒一个泡。
//        for (int j = 0; j < n - i; j++) {
//            if (a[j] % 1000 < a[j + 1] % 1000) {
//                int t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//        }
//    }
//}
//
//void selection_order(int *b, int n) { //选择法排序
//    for (int i = 0; i < n - 1; i++) { //每个下标位置，进行循环，目的是为每个下标找到最大值。
//        for (int j = i + 1; j < n; j++) {
//            if (b[i] % 1000 < b[j] % 1000) {
//                int t = b[i];
//                b[i] = b[j];
//                b[j] = t;
//            }
//        }
//    }
//}
//
//int main() {
//    int a[] = {1011, 2011, 3033};
//    int n = sizeof(a) / sizeof(a[0]);
//    bubble_sort(a, n);
//    for (int *p = a; p < a + n; p++) {
//        printf("%d ", *p);
//    }
//    printf("\n****************************\n");
//    int b[] = {1011, 2011, 3033};
//    int n1 = sizeof(a) / sizeof(a[0]);
//    selection_order(b, n1);
//    for (int *p = b; p < b + n; p++) {
//        printf("%d ", *p);
//    }
//}

//
//int main(){
//    int hours = 3;
//    int minutes = 19;
//    int seconds = 8;
//    printf("%02d:%02d:%02d\n",hours,minutes,seconds);
//    float a = -3.1415926f;
//    printf("%3.4f\n",a);//3指最小宽度，输出宽度大于最小宽度，原样输出。
//    char * str = "abcdefghi";
//    printf("|%3.6s|\n",str);//对于s来讲，.2表示从左向右截取2个字符。
//    long int b = 12345;
//    /*用16进制输出b*/
//    printf("%#lx\n",b);
//    short int c = 124;
//    /*用8进制输出c*/
//    printf("%#ho",c);
//
//}
//
//int main(){
//    int hours = 4;
//    int minutes = 24;
//    int seconds = 7;
//    char buf[128] = {0};
//    sprintf(buf,"%02d:%02d:%02d",hours,minutes,seconds);
//    printf("%s\n",buf);
//    /*给一个10进制数，变成八进制的字符串。*/
//    int  a = 0;
//    scanf("%d",&a);
//    sprintf(buf,"%#o",a);
//    printf(buf);
//}
//int main(){
//    /*输入：tianqing1.80M653120,读姓名，身高，女朋友个数，存款*/
//    char name[50] = {0};
//    float height = 0;
//    int girlfriends = 0;
//    int savings = 0;
//    scanf("%8s%4f%*3c%1d%d",name,&height,&girlfriends,&savings);
//    printf("姓名：%s\n",name);
//    printf("身高：%.2f\n",height);
//    printf("女朋友个数：%d\n",girlfriends);
//    printf("现金存款：%d万元\n",savings);
//}
//
// 多个字符串输入
//int main(){
//    /*输入：i love china*/
//    char str[100] = {0};
//    //scanf("%s",str); //%s,遇到空格，TAB键，回车都结束
//    gets(str);//读入一行，遇到空格，TAB键不结束，遇到回车结束。
//    printf("%s",str);
//}
//int main(){
//    /*输入：i love china*/
//    char str1[100] = {0};
//    char str2[100] = {0};
//    char str3[100] = {0};
//
//    scanf("%s%s%s",str1,str2,str3);
//    printf("%s\n",str1);
//    printf("%s\n",str2);
//    printf("%s\n",str3);
//}
//int main(){
//    /*输入:AB C(回车)*/
//    char a[5] = {0};
//    for(int i = 0;i<5;i++){
//        scanf("%c",&a[i]);
//    }
//    for(int i = 0;i<5;i++){
//        printf("%hhd ",a[i]);
//    }
//}
// 从字符串格式化读入数据
//int main(){
//    char * str = "tianqing1.80M653120";
//    char name[100] = {0};
//    float height = 0;
//    char sex = 0;
//    int weight = 0;
//    int girlfriends = 0;
//    int savings = 0;
//    sscanf(str,"%8s%4f%c%*2d%1d%d",name,&height,&sex
//            ,&girlfriends,&savings);
//    printf("姓名：%s\n",name);
//    printf("身高：%.2f\n",height);
//    printf("性别：%c\n",sex);
//    printf("女朋友个数：%d\n",girlfriends);
//    printf("现金存款：%d万元\n",savings);
//}

//今晚作业：
//43，输出Fibonacci数列的前40项
//int main(){
//    int a[40] = {0};
//    for(int i = 0;i<40;i++){
//        if(i == 0 || i == 1){
//            a[i] = 1;
//        }else{
//            a[i] = a[i-1] + a[i-2];
//        }
//        printf("%d ",a[i]);
//        if((i + 1)%10 == 0){
//            printf("\n");
//        }
//    }
//}
/*
 * 动态规划: 掌握它的思考方法。n个不知道，但前几个应该知道，通过前面几个找到通项公式，一直到第n个。
 * 这类需求的特点: 当前项依赖于前项，而不依赖后项。一个一个顺序向后推导。这就是动态规划(dynamic plan)解题思路。
 * 例题1:
 * 今天的有氧运动训练内容是在一个长条形的平台上跳跃。平台有 num 个小格子，每次可以选择跳 一个格子 或者 两个格子。请返回在训练过程中，学员们共有多少种不同的跳跃方式。
    结果可能过大，因此结果需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。
    示例 1：
    输入：n = 2
    输出：2
    示例 2：
    输入：n = 5
    输出：8
 * int trainWays(int num) {
    if(num == 0 ||num==1){
        return 1;
    }

    int a[num+1];//c99新语法，数组长度可以有变量，但不能初始化。
    a[1] = 1;
    a[2] = 2;
    for(int i = 3;i<num+1;i++){
        a[i] = (a[i-1]+a[i-2])%1000000007;
    }
    return a[num];
}
 * */
/*例题2:
 *  假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
    每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
    示例 1：
    输入：n = 2
    输出：2
    解释：有两种方法可以爬到楼顶。
    1. 1 阶 + 1 阶
    2. 2 阶

    示例 2：
    输入：n = 3
    输出：3
    解释：有三种方法可以爬到楼顶。
    1. 1 阶 + 1 阶 + 1 阶
    2. 1 阶 + 2 阶
    3. 2 阶 + 1 阶
 *
 * */
//int func(int n) {
//    int a[n + 1];
//    a[0] = 1;
//    a[1] = 1;
//    for (int i = 2; i <= n; i++) {
//        a[i] = a[i - 1] + a[i - 2];
//    }
//    return a[n];
//}
//int main(){
//    printf("%d",func(5));
//
//}
/*
 *
 *
 *
 * */
//44，判断某一年是否是闰年
//bool judge(int year){
//    return year%4==0 &&year%100!=0 ||year%400;
//}
//45，起泡法（选择法）对十个数排序
//
//46，判断某个数是否为素数.
#include <stdbool.h>

//bool isPrime(int value){
//    if(value == 0 ||value == 1){
//        return false;
//    }
//    int i = 0;
//    int k = (int)sqrt(value);
//    for(i = 2;i <= k;i++){
//        if(value%i == 0){
//            break;
//        }
//    }
//    if(i<=k){
//        return false;
//    }
//    return true;
//}
//int main(){
//    for(int i = 0;i< 100;i++){
//        if(isPrime(i)){
//            printf("%d 是素数\n",i);
//        }else{
//            printf("%d 不是素数\n",i);
//        }
//    }
//}
//47,编程计算1！+2！+3！+…+10！的值。
//unsigned  long long int  fun(){
//    unsigned  long long int sum = 0;
//    unsigned  long long int t = 1;
//    for(int i = 1;i<=10;i++){
//        t *= i;//求每一项。
//        sum += t;//求和公式。
//    }
//    return sum;
//}
//
//48，求以下数列前十五项的和：2/1，3/2，5/3，8/5，13/8，21/13…。
//int main(){
//    int a = 2;
//    int b = 1;
//    double sum = 0;
//    for(int i = 0;i<15;i++){
//        sum += (float)a/b;
//        int temp = a;
//        a = a+b;
//        b = temp;
//    }
//    printf("sum = %.2lf",sum);
//}
// 思考题： 输入 -3+5*6/2-4*6   输出表达式的结果。-12
// 输入任何一个简答表达式（不含（），只有加减乘除）。请输出结果：
//int main() {
//    int stack[1000] = {0};//用数组模拟栈。
//    int *sp = stack;//sp就是栈顶指针。如果sp和stack相同，表示空栈。
//    scanf("%d", sp++);
//    char ch = 0;
//    while ((ch = getchar()) != '\n') {
//        int value = 0;
//        scanf("%d", &value);//读数字呢。
//        if (ch == '+') {
//            *sp++ = value;//将数字入栈。
//        } else if (ch == '*') {
//            *(sp - 1) *= value;
//        } else if (ch == '/') {
//            *(sp - 1) /= value;
//        } else if (ch == '-') {
//            *sp++ = -value;
//        }
//    }
//    int sum = 0;
//    for (--sp; sp >= stack; sp--) {
//        sum += *sp;
//    }
//    printf("%d", sum);
//}

//今晚作业：
//49，从键盘输入圆柱体高与底面半径，计算并输出圆柱体表面积与体积，要求结果保留两位小数。
//# define PI 3.14
//float func(float height, float r, float *p_area) {
//    *p_area = 2 * PI * r * height + 2 * PI * r * r;
//    float volume = PI * r * r * height;
//    return volume;
//}
//
//int main() {
//    float height = 0;
//    float r = 0;
//    float area = 0;
//    printf("输入圆柱体高:");
//    scanf("%f", &height);
//    printf("输入圆柱体半径:");
//    scanf("%f", &r);
//    float volume = func(height, r, &area);
//    printf("表面积: %f\n体积: %f",area,volume);
//}
// 葛老师代码
//int main(){
//    int r = 0;
//    int h = 0;
//    scanf("%d%d",&r,&h);
//    float surfaceArea = (2 * PI * r * r) + (2 * PI * r * h);
//    float volume = PI * r * r * h;
//    printf("surface area:%.2f\nvolume:%.2f",surfaceArea,volume);
//}
//#include <assert.h>
//#define PI 3.14
//void get_value(float h,float r,float * pArea,float * pVolume){
//    assert(h>=0 && r>=0 && pArea!=NULL && pVolume!=NULL);//预防性编程。
//    *pArea  = 2 * PI*r * h + PI*r*r * 2;
//    *pVolume = PI*r*r * h;
//}
//
//50,从键盘输入一个十进制整型数据，计算并输出其各位上数字之和（忽略正负号）。例如，输入1234，输出10；输入-1234，输出10。
//int func(int value) {
//    value = abs(value);
//    int sum = 0;
//    while (value) {
//        sum += value % 10;
//        value = value / 10;
//    }
//    return sum;
//}
//
//int main() {
//    int value = 0;
//    printf("输入一个十进制整形数据: ");
//    scanf("%d",&value);
//    printf("%d",func(value));
//}
//
//51,已知银行定期存款利率为r=2.25%，输入存款本金x、存款年数n，输出本利之和y=x(1+r)(1+r)...(1+r),共n个(1+r)。
//#define R 0.0225
//
//double func(double money, int n) {
//    for (int i = 1; i <= n; i++) {
//        money = money * (1 + R);
//    }
//    return money;
//}
//int main(){
//    printf("%lf", func(1000,1));
//}

//
//52,编程判断输入的字符串是否为“回文”。所谓“回文”是指顺读和倒读都一样，如abcba。
//bool if_palindrome(char *str) {
//    int len = strlen(str);
//    char *p = str;
//    char *q = str + len - 1;
//    while (p < q) {
//        if (*p != *q) {
//            return false;
//        } else {
//            p++;
//            q--;
//        }
//    }
//    return true;
//}
//
//int main() {
//    printf("%s", if_palindrome("abccdba") ? "回文" : "不是回文");
//}
//
//53、编写程序，将用户输入的字符串中删除所有的数字，然后输出剩余的字符
//void func(char *str) {
//    char *p = str;
//    char *q = str;
//    while (*p) {
//        if (*p < '0' || *p > '9') {
//            *q++ = *p;
//        }
//        p++;
//    }
//    *q = '\0';
//}
//
//int main() {
//    char str[100]={0};
//    scanf("%s",str);
//    func(str);
//    printf("输出删除数字后的字符: %s", str);
//}

//int fun1(int a) {
//    char buf[100] = {0};
//    sprintf(buf, "%o", a);
//    int b = 0;
//    sscanf(buf, "%d", &b);
//    return b;
//}
//
//int fun2(int a) {
//    int sum = 0;
//    int t = 1;
//    while (a) {
//        int b = a % 8;
//        sum += b * t;
//        a /= 8;
//        t *= 10;
//    }
//    return sum;
//}
//
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    printf("0%d\n", fun1(a));
//    printf("%#o\n", a);
//    printf("0%d\n", fun2(a));
//
//}

//int main() {
//    int age = 0;
//    scanf("%d", &age);
//    if (age <= 0) {
//        printf("年纪输入错误: ");
//    } else if (age <= 20) {
//        printf("少年");
//    } else if (age <= 30) {
//        printf("青年");
//    } else if (age <= 40) {
//        printf("中年");
//    } else {
//        printf("老年");
//    }
//}

//# define JUDGE(a) ((a)%2==0?"偶数":"奇数")
//
//int main(){
//    printf("%s", JUDGE(2));
//}

//char * get_comment1(int score){//不靠谱：不能返回局部变量的地址。
//    char str1[10] = "A";
//    char str2[10] = "B";
//    char str3[10] = "C";
//    char str4[10] = "D";
//    char str5[10] = "no pass!";
//    if  ( score>= 90 ){
//        return str1;
//    }else if ( score >= 80 ) {
//        return str2;
//    }else if ( score>= 70 ) {
//        return str3;
//    }else if ( score>= 60 ){
//        return str4;
//    } else{
//        return str5;
//    }
//}
//char * get_comment2(int score){ //靠谱，可以返回常量文本区字符串的首地址。
//    char * str1 = "A";
//    char * str2 = "B";
//    char * str3 = "C";
//    char * str4 = "D";
//    char * str5 = "no pass!";
//    if  ( score>= 90 ){
//        return str1;
//    }else if ( score >= 80 ) {
//        return str2;
//    }else if ( score>= 70 ) {
//        return str3;
//    }else if ( score>= 60 ){
//        return str4;
//    } else{
//        return str5;
//    }
//}
//int main(){
//    int score = 0;
//    scanf("%d",&score);
//    char * p = get_comment1(score);
//    printf("%s\n",p);
//    p = get_comment2(score);
//    printf("%s\n",p);
//}

/*
 关于枚举：某种类型的变量，只能在某个范围内取值，可以定义成枚举。
 1,枚举值相当于定义了若干符号常量，定义完成后，符号常量如何使用，枚举常量值就如何使用。
 2，默认情况下，第一个枚举值就为0，第二个就为1，....,当然也可以另外赋值。
 只有一个目的，就是为了增加代码可读性。
 * */
//#include <stdlib.h>
//#include <time.h>
//enum option {
//    STONE, KNIFE, CLOTH, UNKNOWN
//};
//int main() {
//    enum option user_select = UNKNOWN;
//    enum option computer_select = UNKNOWN;
//    srand(time(NULL));//时间做为种子，让每次产生的数字序列不同。
//    computer_select = rand() % 3;
//    printf("请输入：0，石头 1，剪刀 2 布 \n");
//    int value = 0;
//    scanf("%d", &value);
//    value = value % 3;
//    user_select = value;
//    switch (computer_select) {
//        case STONE: {
//            char *result[3] = {"平局", "输了", "赢了"};
//            printf("%s\n", result[user_select]);
//        }
//            break;
//        case KNIFE: {
//            char *result[3] = {"赢了", "平局", "输了"};
//            printf("%s\n", result[user_select]);
//        }
//            break;
//        case CLOTH: {
//            char *result[3] = {"输了", "赢了", "平局"};
//            printf("%s\n", result[user_select]);
//        }
//            break;
//    }
//    /*再打印出来，计算机出了啥，用户出了啥。*/
//    char *name[3] = {"石头", "剪刀", "布"};
//    printf("用户输入：%s\n", name[user_select]);
//    printf("计算机输入：%s\n", name[computer_select]);
//}

//enum option {
//    ROCK, SCISSOR, PAPER, UNKNOWN
//};
//
//int main() {
//    enum option user_option = UNKNOWN;
//    enum option computer_option = UNKNOWN;
//    srand(time(NULL)); // 设定一个种子
//    computer_option = rand() % 3;
//    printf("输入石头(0)、剪刀(1)、布(2):  ");
//    scanf("%d", &user_option);
////    printf("%d",user_option);
//        switch (computer_option) {
//            case ROCK: {
//                char *result[3] = {"平局", "输了", "赢了"};
//                printf("结果是:%s \n", result[user_option]);
//                break;
//            }
//            case SCISSOR: {
//                char *result[3] = {"赢了", "平局", "输了"};
//                printf("结果是:%s \n", result[user_option]);
//                break;
//            }
//            case PAPER: {
//                char *result[3] = {"输了", "赢了", "平局"};
//                printf("结果是:%s \n", result[user_option]);
//                break;
//            }
//        }
//    }

// 输出一个简单的字符串（只含加,减，乘，除，不含括号，程序保证输入字符串合法），请输出结果。
//int my_scan_f(const char * str,int * pValue){
//    sscanf(str,"%d",pValue); // 从已知字符串中按格式读入数字，存入到变量中。
//    char buf[20] = {0};
//    sprintf(buf,"%d",*pValue); // 12.123; 把数字按格式变成数字字符串，每一个数字作为一个字符存入字符数组。
//    return strlen(buf);
//}
//int calculate(const char * str){
//    int stack[10000] = {0};
//    int * sp = stack;
//    int n = my_scan_f(str,stack);
//    const char * p = str+n;
//    sp++;
//    while(*p){ //通过小p遍历字符串
//        int value = 0;
//        n = my_scan_f(p+1,&value);
//        switch(*p){
//            case '+':
//                *sp++ = value;
//                break;
//            case '-':
//                *sp++ = -value;
//                break;
//            case '*':
//                *(sp-1)*= value;
//                break;
//            case '/':
//                *(sp-1)/= value;
//                break;
//            default:
//                break;
//        }
//        p += 1+ n;
//    }
//    int sum = 0;
//    for(--sp;sp>=stack;sp--){
//        sum += *sp;
//    }
//    return sum;
//}
//int main(){
//    char * str= "-1*16+55*2/5+7";
//    int result = calculate(str);
//    printf("%d",result);
//}
//
/*
 关于结构体：
 c++有4大特性：继承，封装，多态，抽象
 c语言有两个特性：封装，抽象
 封装就是将好多变量打包到一起，操作和理解起来就比较方便。
 抽象：概括总结事务的共性。
 关于结构体的字节对齐：
 (1)结构体各成员的起始位置，相对于结构变量的起始位置的偏移量应该是该种类型所占字节数的最小倍数。
 (2)结构体变量占的总字节数，应该是结构体各成员中占字节最多类型所占字节数的倍数。

 * */

//typedef struct student_t{
//    char sex;
//    double order;
//    int  score;
//} student_t;
//int main(){
//    printf("%d",sizeof(student_t));
//}

//struct student{
//    char name[50];
//    int age;
//    char sex;
//    int score;
//};
//typedef struct student student;
//typedef struct student * p_student;
//int main(){
//    struct student m = {0}; // tianqing 18 M 720 // 输入字符串型和数值型，空格可作为分隔符号， 字符型空格为有效字符
//    scanf("%s%d%*1c%c%d",m.name,&m.age,&m.sex,&m.score);
//    printf("姓名：%s\n年纪：%d\n性别：%c\n分数：%d\n",
//           m.name,m.age,m.sex,m.score);
//}
// 定义一个名为 student 的结构体，包含姓名、年龄、性别和成绩
//struct student {
//    char name; // 姓名，占用50个字节
//    int age;       // 年龄，占用4个字节（假设int为4字节）
//    char sex;      // 性别，占用1个字节
//    int score;     // 成绩，占用4个字节
//};
//
//typedef struct student student; // 为结构体 student 创建一个类型别名 student
//typedef struct student *p_student; // 为指向结构体 student 的指针创建一个类型别名 p_student
//
//int main() {
//    // 初始化一个 student 类型的变量 m，所有成员初始化为0
//    student m = {0};
//    // 打印结构体 student 的大小
//    printf("%d\n", sizeof(struct student)); // 输出结果应该是 50(name) + 4(age) + 1(sex) + 4(score) = 59 字节
//    // 打印使用类型别名后的结构体大小，应该与上面相同
//    printf("%d\n", sizeof(student)); // 输出结果也应该是 59 字节
//    // 打印指向结构体 student 的指针的大小，这通常取决于系统的架构（如32位或64位）
//    printf("%d\n", sizeof(p_student)); // 在64位系统上通常是8字节，32位系统上通常是4字节
//
//    // 下面的代码用于验证结构体内存对齐，特别是 score 前是否补了三个字节
//    char *p = (char *) &m.score; // 将 char 指针 p 指向 m.score 的地址
//    char *q = &m.sex + 1; // 将 char 指针 q 指向 m.sex 后一个字节的地址
//    // 打印 p 和 q 之间的字节差，理论上如果结构体按照描述的方式对齐，
//    // 并且 int 类型占用4个字节，char 占用1个字节，那么这里应该输出3，因为在 sex（1字节）和 score（4字节）之间会有3个字节的填充，以保证 score 的4字节对齐。
//    printf("%d", p - q); // 输出结果应该是3
//    return 0;
//}

//struct student {
//    char name[50];
//    int age;
//    char sex;
//    int score;
//};
//typedef struct student student;
//typedef struct student *p_student;
//
//int main() {
//    student m = {0};
//    printf("%d\n", sizeof(struct student));
//    printf("%d\n", sizeof(student));
//    printf("%d\n", sizeof(p_student));
//    /*我想用代码验证一下：score前确实补了三个字节，如何搞呢？*/
//    char *p = (char *) &m.score;
//    char *q = &m.sex + 1;
//    printf("%d", p - q);
//}
/*
 for的应用场景：先判断，再执行，有可能一次都不执行。
 1，已知开始值，已知结束值，还知道步长，用for
 2, 已知循环次数。从0开始，小于多少，就循环多少次。
 while的应用场景：先判断，再执行，有可能一次都不执行。
   循环次数是由中间运算结果决定的。
 do while，先执行再判定，必须执行一次，这种场景。
  对于要写循环的情况，要分析反复执行啥事：就是循环体。
  如何退出：反过来就是循环条件，要分析这两件事。
 * */



/*用一个空格，分开一组数，例如：1 19 28 37 13 22 45 -9 100 7
 请按由大到小排序输出。*/



//void arr_output(int *p_arr, int cnt) {
//    for (int i = 0; i < cnt; i++) {
//        printf("%d ", p_arr[i]);
//    }
//
//}
//
//void bubble_sort(int *p_arr, int cnt) {
//    for (int i = 1; i < cnt; i++) {
//        for (int j = 0; j < cnt - i; j++) {
//            if (p_arr[j] < p_arr[j + 1]) {
//                int temp = 0;
//                temp = p_arr[j + 1];
//                p_arr[j + 1] = p_arr[j];
//                p_arr[j] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    int arr[10000] = {0};
//    int cnt = 0;
//    do {
//        scanf("%d", &arr[cnt++]);
//    } while (getchar() != '\n');
//    bubble_sort(arr, cnt);
//    arr_output(arr, cnt);
//}

/*
 函数指针：
    每一句代码，在编译时，都会给每一句话编运行地址。函数也不例外，在编译时，函数名就是函数的起始地址，也就是函数
    指针。可以定义变量来保存函数的首地址。
 * */
//int get_sum(int a, int b) {
//    return a + b;
//}
//
//int main() {
//    int (*fun)(int a, int b) = NULL;//定义了一个函数指针变量，能保存啥样的函数地址呢？返回值是int,有两个参数都是int的。
//    fun = get_sum;
//    int sum = 0;
//    sum = get_sum(5, 3);
//    printf("%d\n", sum);
//    sum = fun(5, 3);
//    printf("%d\n", sum);
//
//}
//float get_sum(int a,int b,float c){
//    return a +b + c;
//}
//int main(){
//    float (* fun)(int a,int b,float c) = NULL;//定义了一个函数指针变量，能保存啥样的函数地址呢？返回值是int,有两个参数都是int的。
//    fun = get_sum;
//    float sum = 0;
//    sum = get_sum(5,3,4.0);
//    printf("%.2f\n",sum);
//    sum = fun(5,3,4.0);
//    printf("%.2f\n",sum);
//
//}

//float get_avg(int arr[], int n) {
//    float sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//    }
//    return sum / n;
//}
//
//int read_value(int *arr) {
//    int cnt = 0;
//    do {
//        scanf("%d", &arr[cnt]);
//        cnt++;
//    } while (getchar() != '\n');
//    return cnt;
//}
//
//int get_nums(int arr[], int n, int score) {
//    int nums = 0;
//    for (int i = 0; i < n; i++) {
//        if (arr[i] >= score) {
//            nums++;
//        }
//    }
//    return nums;
//}
//
//int main() {
//    int arr[10000] = {0};
//    int n = read_value(arr);
//    float avg = get_avg(arr, n);
//    printf("%.2f", avg);
//    /*再求大于等于90分的人数*/
//    int nums = get_nums(arr, n, 90);
//    printf("\t%d\n", nums);
//}

//int main() {
//    double sum = 0;
//    double t = 1;
//    int sign = 1;
//    int i = 1;
//    do{
//        t = 1.0/i;
//        sum += t * sign ;
//        i=i+2; //给下一次循环做准备。
//        sign = -sign;//正负号切换。给下一次循环做准备。
//    }while(t>=1e-10);
//    printf("%.10lf",sum*4);
//}
//
//int main(){
//    int n = 0;
//    long double sum = 1;
//    long double t = 1.0;
//    double x = 0;
//    scanf("%d%lf",&n,&x);
//    for(int i = 1;i<n;i++){
//        t *= x/i;
//        sum += t;//求和公式。
//    }
//    printf("%.21Lf\n",sum);
//    printf("%.21lf\n",exp(x));//一定要想办法验证自己的正确性。
//
//}

//int main() {
//    int n = 7;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (int j = 1; j <= i; j++) {
//            char a = 'A';
//            printf("%c", a + j - 1);
//        }
//        for (int j = i - 1; j >= 1; j--) {
//            char a = 'A';
//            printf("%c", a + j - 1);
//        }
//        printf("\n");
//    }
//}
#include <stdio.h>
#include <stdlib.h>

//#define CLASS_NUMS 100
//
//struct student {
//    float score[3];//每个人的三门课。
//    float total_score;//每个人的总分
//    float avg_score;//平均分。
//};
//struct class {
//    int n;//每个班的人数
//    struct student students[100];
//};
//struct school {
//    float max;//全校最好的学生的平均分。
//    float min;//全校最差的学生的平均分。
//    int class_nums; //让用户输入一个学校到底有多少个班。
//    struct class all_classes[CLASS_NUMS];
//};
//
//void read_all_data(struct school *ting_hua_university) { //读数据，并完成必要的运算。
//    printf("请输入学校一共有多少个班: ");
//    scanf("%d", &ting_hua_university->class_nums);
//    for (int i = 0; i < ting_hua_university->class_nums; i++) {
//        printf("请录入第%d个班有多少个学生: ", i + 1);
//        scanf("%d", &ting_hua_university->all_classes[i].n);
//        for (int j = 0; j < ting_hua_university->all_classes->n; j++) {
//            printf("开始录入第%d个班的第%d个学生成绩: ", i + 1, j + 1);
//            for (int k = 0; k < 3; k++) {
//                scanf("%f", &ting_hua_university->all_classes[i].students[j].score[k]);
//            }
//            printf("第%d个班的第%d个学生成绩:%.2f %.2f %.2f\n", i + 1, j + 1,
//                   ting_hua_university->all_classes[i].students[j].score[0],
//                   ting_hua_university->all_classes[i].students[j].score[1],
//                   ting_hua_university->all_classes[i].students[j].score[2]);
//            ting_hua_university->all_classes[i].students[j].total_score =
//                    ting_hua_university->all_classes[i].students[j].score[0] +
//                    ting_hua_university->all_classes[i].students[j].score[1] +
//                    ting_hua_university->all_classes[i].students[j].score[2];
//            ting_hua_university->all_classes[i].students[j].avg_score =
//                    ting_hua_university->all_classes[i].students[j].total_score / (float) 3.0;
//            if (i == 0 && j == 0) {
//                ting_hua_university->max = ting_hua_university->all_classes[i].students[j].avg_score;
//                ting_hua_university->min = ting_hua_university->all_classes[i].students[j].avg_score;
//            } else {
//                ting_hua_university->max =
//                        ting_hua_university->max > ting_hua_university->all_classes[i].students[j].avg_score
//                        ? ting_hua_university->max : ting_hua_university->all_classes[i].students[j].avg_score;
//                ting_hua_university->min =
//                        ting_hua_university->min < ting_hua_university->all_classes[i].students[j].avg_score
//                        ? ting_hua_university->min : ting_hua_university->all_classes[i].students[j].avg_score;
//            }
//
//        }
//    }
//
//}
//
//void out_put_all_info(struct school *ting_hua_university) {
//    printf("该学校共有%d个班\n", ting_hua_university->class_nums);
//    for (int i = 0; i < ting_hua_university->class_nums; i++) {
//        printf("%d班的人数是%d\n", i + 1, ting_hua_university->all_classes[i].n);
//        for (int j = 0; j < ting_hua_university->all_classes[i].n; j++) {
//            printf("\t第%d个学生的第一科成绩:%.2f 第二科成绩:%.2f 第三科成绩:%.2f 总分:%.2f 平均分:%.2f\n",
//                   j + 1,
//                   ting_hua_university->all_classes[i].students[j].score[0],
//                   ting_hua_university->all_classes[i].students[j].score[1],
//                   ting_hua_university->all_classes[i].students[j].score[2],
//                   ting_hua_university->all_classes[i].students[j].total_score,
//                   ting_hua_university->all_classes[i].students[j].avg_score);
//        }
//    }
//    printf("全学校最好的平均分：%.2f\n", ting_hua_university->max);
//    printf("全学校最差的平均分：%.2f\n", ting_hua_university->min);
//
//}
//
//int main() {
//    struct school ting_hua_university = {0};
//    read_all_data(&ting_hua_university);
//    out_put_all_info(&ting_hua_university);
//}
//
//int fun(int start, int end, int divider, int arr[]) {//从start开始，截止到end(含有start和end)中间不能被divider整除的数，返回值是个数量，arr是存放这些数的数组。
//    int j = 0;
//    for (int i = start; i <= end; i++) {
//        if (i % divider != 0) {
//            arr[j] = i;
//            j++;
//        }
//    }
//    return j + 1;
//}
//
//int main() {
//    int arr[1000] = {0};
//    int nums = fun(1, 200, 3, arr);
//    for (int i = 0; i < nums - 1; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n%d", nums);
//}

#include <stdio.h> // 包含标准输入输出库

//关键点解释：
//?scanf("%llu", &n);?：这行代码用于从标准输入读取一个无符号长长整型数。%llu是unsigned long long int类型的正确格式符。
//?位运算检查?：(n & (n - 1)) == 0这个条件用于检查n是否是2的幂。这是一个常用的位运算技巧，基于2的幂在二进制表示中的特性。
//?输出?：根据条件判断的结果，程序会输出“是2的N次方”或“不是2的N次方”。
//这段代码是一个简单而有效的例子，展示了如何使用位运算来检查一个数是否是2的幂。
//int main() {
//    unsigned long long int n = 0; // 定义一个无符号长长整型变量n，并初始化为0
//    // 对于unsigned long long int类型，应该使用%llu格式符。
//    scanf("%llu", &n); // 从标准输入读取一个无符号长长整型数到n
//    // 使用位运算检查n是否是2的幂。原理是：如果一个数是2的幂，那么它的二进制表示中只有一位是1。当这个数减去1时，原来为1的那一位变为0，而其后的所有位都变为1。
//    // 因此，如果这个数与它自身减1的结果做按位与(&)运算结果为0，那么这个数就是2的幂。
//    if ((n & (n - 1)) == 0) {
//        printf("%s", "是2的N次方"); // 如果n是2的幂，输出“是2的N次方”
//    } else {
//        printf("%s", "不是2的N次方"); // 如果n不是2的幂，输出“不是2的N次方”
//    }
//
//    return 0; // 程序正常结束
//}
// 1. 方法的运算次数与输入n最高位1的位置有关，最多循环次数为unsigned int的bit个数。
//int bitCount1(unsigned int n)
//{
//    unsigned int c =0 ; // 计数器
//    for (c =0; n; n >>=1) // 循环移位
//        c += n &1 ; // 如果当前位是1，则计数器加1
//    return c ;
//}
//
////2. 快速法
//// 这种方法速度比较快，其运算次数与输入n的大小无关，只与n中1的个数有关。如果n的二进制表示中有k个1，那么这个方法只需要循环k次即可。
//// 其原理是不断清除n的二进制表示中最右边的1，同时累加计数器，直至n为0，
//unsigned int bitCount2(unsigned int n) {
//    // 定义一个计数器c，用于记录n中1的个数，并初始化为0
//    unsigned int c = 0;
//
//    // 循环直到n变为0
//    for (c = 0; n; ++c) {
//        // 使用位运算n &= (n - 1)来清除n的最低位的1
//        // 这个操作的原理是：n-1会将n的最低位的1变为0，并且这个1之后的所有0都变成1
//        // 然后n & (n - 1)会将n原本最低位的1清零，因为&运算要求两位都为1时结果才为1
//        n &= (n - 1);
//    }
//
//    // 当循环结束时，n已经变为0，此时c的值就是n中原本1的个数
//    return c;
//}


//unsigned int bitTo1OfPos(unsigned int n) {
//    unsigned int a = 1 << 7; // 将1左移7位，得到0x80(二进制10000000
//    unsigned int b = 1 << 6; // 将1左移6位，得到0x40(二进制1000000)
//    // 不需要temp变量，直接计算a和b的和
//    unsigned int mask = a + b; // 得到0xC0（二进制11000000）
//    // 将n与mask进行按位或运算，结果赋值给res
//    unsigned int res = n | ~mask; // mask取反，进行位与运算，将第7、第8个bit置为0
//    // 返回结果
//    return res;
//}
//
//int main() {
//    unsigned int num = 256; // 定义一个unsigned int类型的变量num，并初始化为256
//    unsigned int res = bitTo1OfPos(num); // 调用bitTo1OfPos函数，并将结果赋值给res
//    // 使用%u格式符输出unsigned int类型的变量
//    printf("%u\n", res); // 输出res的值
//    return 0; // 程序正常结束
//}

#include <stdio.h>

//int main() {
//    int d = 7; // 想要检查的位位置（从0开始计数）
//    int x; // 将要读取的整数
//    int n; // 用于存储检查结果（该位是否为1）
//
//    // 从标准输入读取一个整数到x中，并检查是否成功读取
//    if (scanf("%d", &x) != 1) {
//        fprintf(stderr, "读取输入失败\n");
//        return 1; // 非零返回值表示程序异常结束
//    }
//
//    // 检查x的第d位（从0开始计数）是否为1
//    n = (x & (1 << d)) > 0;
//
//    // 打印x的第d位是1还是0
//    printf("%d的第%d位是%d\n", x, d, n);
//
//    // 程序正常结束，返回0
//    return 0;
//}
//int main() {
//    int set0ForLastNBits = 4; // 定义一个整数，表示我们想要将n的二进制表示中的最后4位设置为0
//
//    // 计算掩码：
//    // 1 << set0ForLastNBits：将1左移set0ForLastNBits位，得到二进制数10000（如果set0ForLastNBits是4的话）
//    // (1 << set0ForLastNBits) - 1：得到二进制数1111（即15，是4位全为1的二进制数）
//    // ~((1 << set0ForLastNBits) - 1)：对上面的结果取反，得到一个掩码
//    // 这个掩码的高位全是1，而低位（即最后4位）全是0
//    // 在32位无符号整数中，这个掩码将是：11111111111111111111111111110000
//    unsigned int mask = ~((1 << set0ForLastNBits) - 1);
//
//    unsigned int n = 255; // 定义一个无符号整数n，并初始化为255（二进制表示为11111111）
//
//    // 使用掩码对n进行按位与运算：
//    // 这将保留n的二进制表示中的高位，而将最后4位设置为0
//    // 因为mask的二进制表示中，高位是1，低位是0
//    // 所以，res的结果将是n的高位部分，低位被清零
//    unsigned int res = n & mask;
//
//    // 打印结果：
//    // 由于n是255（二进制11111111），而mask是高位全1、低位全0的掩码
//    // 按位与运算后，res将是240（二进制11110000），因为保留了n的高4位，并将低4位清零
//    printf("%u", res); // 输出240，注意这里应该使用%u来打印无符号整数
//    return 0;
//}

//
//int main() {
//    short int bitsToWaitFor = 125;
//    short int uxEventBits = 222;
//    if ((bitsToWaitFor & uxEventBits) == bitsToWaitFor) {
//        printf("所有bit都等到了。");
//    }else{
//        printf("没等到");
//    }
//}

//void read_10_data(int a[], int n) {
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//}
//
//void get_max_min(int a[10], int n, int *pMax, int *pMin) {
//    *pMax = a[0];
//    *pMin = a[0];
//    for (int i = 1; i < n; i++) {
//        *pMax = (*pMax > a[i]) ? *pMax : a[i];
//        *pMin = (*pMin < a[i]) ? *pMin : a[i];
//    }
//}
//
//int main() {
//    int a[10] = {0};
//    int max = 0;
//    int min = 0;
//    read_10_data(a, 10);
//    get_max_min(a, 10, &max, &min);
//    printf("max=%d,min=%d\n", max, min);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//bool judge_single(int n) {
//    for (int i = 2; i < sqrt(n); i++) {
//        if (n % i == 0) {
//            return false;
//        }
//
//    }
//    return true;
//}
//
//int judge(int start, int end, int arr[]) {
//    int cnt = 0;
//    for (int i = start; i <= end; i++) {
//        if (judge_single(i)) { //n个不好写，那我循环，判断一个。
//            arr[cnt++] = i;
//        }
//    }
//    return cnt;
//
//}
//
///*输出时，要求每10个数，换一行*/
//void out_prime_data(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//        if (i % 10 == 0 && i!=0) {
//            putchar('\n');
//        }
//    }
//}
//
//int main() {
//    int start = 100;
//    int end = 10000;
//    int arr[9900] = {0};
//    int n = judge(start, end, arr);
//    printf("%d\n",n);
//    out_prime_data(arr, n);
//}

//int *minSubsequence(int *nums, int numsSize, int *returnSize) {
//    int map[101] = {0};
//    int sum = 0;
//    for (int i = 0; i < numsSize; i++) {
//        map[nums[i]]++;
//        sum += nums[i];
//    }
//    int *ret = (int *) malloc(numsSize * sizeof(int));
//    int cnt = 0;
//    int sum1 = 0;
//
//    for (int i = 100; i >= 0; i--) {
//        for (int j = 0; j < map[i]; j++) {
//            ret[cnt++] = i;
//            sum1 += i;
//            if (sum1 > sum - sum1) {
//                *returnSize = cnt;
//                return ret;
//            }
//        }
//    }
//    return NULL;
//}

//int main() {
//    int i, j, a = 0;
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 4; j++) {
//            if (j % 2) break;
//            a++;
//        }
//        a++;
//    }
//    printf("%d\n", a);
//}

//int main(){
//    char str1[10] = "123";
//    char str2[10] = "BBA";
//    char str3[10] = "BAT";
//    char * str[3] = {str1,str2,str3};
//    str[1][2] = 'M';
//    for(int i = 0;i< 3;i++){
//        printf("%s ",str[i]);
//    }
//}

//int main(){
//    char * str[3] = {"123","BBA","BAT"};
//    //str[1][2] = 'M'; 修改常量文本区呢。
//    str[1] = "defghi"; // 可以改，相当于更改指针变量的值，使指针指向了新的字符串首地址。
//
//    for(int i = 0;i<3;i++){
//        printf("%s ",str[i]);
//    }
//
//}

/*
/*
1,指针函数和函数指针
  指针函数就是返回值类型是指针的函数，注意不要返回局部变量的地址。
  函数指针就是函数的首地址，也就是函数名。当然我们可以定义函数指针变量，
  来接收函数的首地址，主要是用于回调，解决差异化的问题。
2，指针常量，char * const p;p不能改，指向的内存块是可以改的。
   常量指针，指向常量的指针变量，const char * p ;p可以改变，而指向的内存块是不能改的。
3，指针数组和数组指针。
   （1）指针数组，就是每个元素都是指针变量，例如：
   char * p[3] = {"abc","def","ghi"};
   p[0]保存的是“abc”常量字符串的首地址，就是个变量，可以改变。
   p[0][1]这个不能改，修改修改常量文本区的内容呢。
   p能改吗？数组名当然不可以改。
   p是啥类型？char ** 型的数据，p+1跳几个字节？8个字节。
   （2）数组指针，指向数组的指针，分成一维的数组指针，二维数组指针等。
    int a[10]; int * p = a;//p指向了a这个数组，
    int a[3][4],表示数学上三行四列的矩阵。a[2][3]是最后一个元素
    a[0][0]是第一个元素，总共12个元素，内存中是按行存放的。
    sizeof(a)是48个字节。
    可以定义变量： int (*p)[4] = a;
    a[0]是int * 型的。
    char a[3][4],(1)表示三行四列一个字节整形数的数组。
                 (2)表示3个最大长度为4-1的字符串。
                 二维的char数组，等于一维的字符串数组。
                 当我们存放多个字符串时，就用二维的char数组。
    a[0]表示（1）第0行的首地址，char * 型
           （2）第0个串的首地址。char * 型。
            a[0] +1 跳几个字节？跳1个。
    a 表示 （1）有四列那样的行的首地址。它是char (*p)[4]这种类型的。
          （2）一维的字符串数组的首地址。它同样是char (*p)[4]这种类型的。
    a[1][1] (1)第一行第一列的一个字节整形数。char型的
           （2）第一个字符串的第一个字符。char型的

 */


//int main() {
//    int a[3][6] = {{1, 2, 3, 4, 5, 6},
//                   {7, 8, 9, 10},
//                   {3, 17}};
//    int (*p)[6] = a;
//    printf("*******************************\n");
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(a));
//    printf("*******************************\n");
//    for (int i = 0; i < 3; i++) { //按行循环。
//        for (int j = 0; j < 6; j++) {
//            printf("%d ", a[i][j]);
//        }
//        putchar('\n');
//    }
//    printf("*******************************\n");
//    for (int i = 0; i < 3; i++) { //按行循环。
//        for (int j = 0; j < 6; j++) {
//            printf("%d ", p[i][j]);
//        }
//        putchar('\n');
//    }
//    /*a+1  因为a是行数组的首地址，所以+1，就跳一行*/
//    printf("*******************************\n");
//    p = a + 1;
//    printf("%d\n", p - a);
//    printf("%d\n", (char *) (p) - (char *) a);
//    printf("*******************************\n");
//    /*a[1]+ 1  因为a[1]是int * 型，所以+1，就跳一个int，四个字节*/
//    int *q = a[1] + 1;
//    printf("%d\n", (char *) q - (char *) a[1]);
//    //a[1][1] + 1
//    printf("%d\n", a[1][1] + 1);
//    printf("*******************************\n");
//    //a和a[0](*a)是啥关系?值相同，类型不同，a是行数组的首地址 int(*p)[6]类型。
//    //而a[0](*a)是int *型的。
//    printf("%x\n", a);
//    printf("%x\n", a[0]);
//
//}

//int fun(int n,int (*p)[n]){
//    int sum = 0;
//    for(int i = 0;i<n;i++){//按行循环呢。
//        for(int j = 0;j<n;j++){
//            if(i!=j&&i+j!=n-1){
//                sum += p[i][j];
//            }
//        }
//    }
//    return sum;
//}
//
//int main(){
//    int a[3][3] = {1,2,3,4,5,6,7,8,9};
//    int sum = fun(3,a);
//    printf("%d",sum);
//}
//
//int fun(int n, int (*p)[n]) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {//按行循环呢。
//        for (int j = 0; j < n; j++) {
//            if (i != j && i + j != n - 1) {
//                sum += p[i][j];
//            }
//        }
//    }
//    return sum;
//}
//
//int fun1(int n, int (*a)[n]) {
//    int sum = 0;
//    for (int (*p)[n] = a; p < a + n; p++) {
//        for (int *q = *p; q < *p + n; q++) {
//            if ((p - a != q - *p) && ((p - a) + q - *p != n - 1)) {
//                sum += *q;
//            }
//        }
//    }
//    return sum;
//}
//
//int main() {
//    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int sum = fun(3, a);
//    int sum1 = fun1(3, a);
//    printf("%d\n%d\n", sum, sum1);
//}

/*29、输入3个学生4门课的成绩{(60,70,65,75)，(75,80,75,90),(95,75,90,65)},计算每个学生的总分和平均成绩并输出，结果保留一位小数。*/

//void get_result(int n, int m, float(*score)[m]) { //请用下标法实现
//    for (int i = 0; i < n; i++) {
//        float sum = 0;
//        for (int j = 0; j < m; ++j) {
//            sum += score[i][j];
//        }
//        score[i][4] = sum;
//        score[i][5] = sum / 4;
//    }
//}
//
//void get_result1(int n, int m, float(*score)[m]) {//请用指针法实现。
//
//    for (float (*line)[m] = score; line < score + n; line++) {
//        float sum = 0;
//        for (float *col = *line; col < *line + m; col++) {
//            sum += *col;
//        }
//        *(*line + 4) = sum;
//        *(*line + 5) = sum / 4;
//    }
//}
//
//int main() {
//    float score[3][6] = {{60, 70, 65, 75}, //4 是总分，5 是平均分
//                         {75, 80, 75, 90},
//                         {95, 75, 90, 65}};
//    get_result(3, 6, score);
//
//    for (int i = 0; i < 3; i++) {
//        printf("第%d个学生的总分是：%.2f,平均分是：%.2f\n", i + 1, score[i][4], score[i][5]);
//    }
//    printf("--------------------------------------------------------------------------\n");
//
//    float score1[3][6] = {{60, 70, 65, 75}, //4 是总分，5 是平均分
//                          {75, 80, 75, 90},
//                          {95, 75, 90, 65}};
//    get_result1(3, 6, score1);
//    for (int i = 0; i < 3; i++) {
//        printf("第%d个学生的总分是：%.2f,平均分是：%.2f\n", i + 1, score1[i][4], score1[i][5]);
//    }
//}

// 字符串函数

//1. char *  strcat(char *  _Dest,const char * _Source);
//函数的作用，把_Source代表的字符串的地址链接到_Dest代表的地址的字符串的后面。
//返回值：就返回_Dest它代表的地址。
//int main(){
//    char str1[100] = "hello";
//    char * str2 = "world";
//    char * p = strcat(str1,str2);
//    printf("%s",p);
//}

//2. strcpy   char *  strcpy(char *  _Dest,const char *  _Source);
//作用： 把_Source代表的地址开始的字符串拷贝到_Dest代表的地址开始的内存块中。
//返回值：就返回_Dest它代表的地址;
//int main(){
//    char str1[100] = "hello";
//    char * str2 = "world";
//    char * p = strcpy(str1,str2);
//    printf("%s",p);
//}

// 3. strlen
// 4. int strcmp(const char * str1,const char * str2)
// 作用，逐个字符按ascii码值，比较字符串大小。
// 返回值： 0,表示字符串完全一样。
//        1，表示第一个字符串大于第二个字符串
//        -1 表示第二个字符串大于第一个字符串
// 注意：字典序的排序规则和strcmp的排序规则是相同的。
//int main(){
//    char * str1 = "china";
//    char * str2 = "beijing";
//    int k = strcmp(str1,str2);
//    if( k == 1){
//        printf("%s>%s",str1,str2);
//    }else if ( k == -1) {
//        printf("%s<%s",str1,str2);
//    }else{
//        printf("equal!");
//    };
//}

/*解题思路：
 1，按单词循环，每个单词都能生成一个摩尔斯密码字符串。将摩尔斯密码串放入到字符串数组中
 （如何放，就看字符串数组中，有没有同样的串，如果没有，放入新的一个，如果有，不放了。
   能统计出来放入字符串的个数）；
 2，返回放入的不同字符串的个数。
 */
//int uniqueMorseRepresentations(char **words, int wordsSize) {
//    char MorseString[100][40] = {0};//开辟内存，保存不同的摩尔斯字符串。
//    int cnt = 0;//记录到底放入了多少个不同的morse字符串。
//    const char *map[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
//                           "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--",
//                           "--.."};
//    for (int i = 0; i < wordsSize; i++) {//按单词循环。
//            char temp[50] = {0};
//        for (int j = 0; words[i][j] != '\0'; j++) {//遍历字符串的每一个字符。
//            strcat(temp, map[words[i][j] - 97]);
//        }
//        /*判断新生成的morse密码串,是否在MorseString里面已经存在*/
//        int j = 0;
//        for (j = 0; j < cnt; j++) {
//            if (strcmp(MorseString[j], temp) == 0) {
//                break;
//            }
//        }
//        if (j >= cnt) {
//            strcpy(MorseString[cnt], temp);
//            cnt++;
//        }
//    }
//    return cnt;
//}
//
//int main() {
//    char *words[] = {"gin", "zen", "gig", "msg"};//指针数组
//    int n = sizeof(words) / sizeof(words[0]);
//    int nums = uniqueMorseRepresentations(words, n);
//    printf("%d", nums);
//}

//const char *map(char chr) {
//    const char *Mores[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
//                             "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--",
//                             "--.."
//    };
//    return Mores[chr - 97];
//}
//
//int uniqueMorseRepresentations(char **words, int wordsSize) {
//    char MoresString[100][40] = {0};
//    int cnt = 0;
//    for (int i = 0; i < wordsSize; i++) {
//        char temp[50] = {0};
//        for (int j = 0; j < strlen(words[j]); j++) {
//            strcat(temp, map(words[i][j]));
//        }
//        int k = 0;
//        for (k = 0; k < cnt; k++) {
//            if (strcmp(temp, MoresString[k]) == 0) {
//                break;
//            }
//        }
//        if (k >= cnt) {
//            strcpy(MoresString[i], temp);
//            cnt++;
//        }
//
//    }
//    return cnt;
//}
//    int cnt = 0;//记录到底放入了多少个不同的morse字符串。
//    const char *map[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
//                           "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--",
//                           "--.."};
//    for (int i = 0; i < wordsSize; i++) {//按单词循环。
//        char temp[50] = {0};
//        for (int j = 0; words[i][j] != '\0'; j++) {//遍历字符串的每一个字符。
//            strcat(temp, map[words[i][j] - 97]);
//        }
//        /*判断新生成的morse密码串,是否在MorseString里面已经存在*/
//        int j = 0;
//        for (j = 0; j < cnt; j++) {
//            if (strcmp(MorseString[j], temp) == 0) {
//                break;
//            }
//        }
//        if (j >= cnt) {
//            strcpy(MorseString[cnt], temp);
//            cnt++;
//        }
//    }
//    return cnt;
//}

//int main() {
//    char *words[] = {"gin", "zen", "gig", "msg"};//指针数组
//    int n = sizeof(words) / sizeof(words[0]);
//    int nums = uniqueMorseRepresentations(words, n);
//    printf("%d", nums);
//}
//void delete_chr(char *str) {//既然想改变原始字符串，那就不要加const关键字
//    char *p = str;
//    char *q = str;
//    while (*p) {
//        if (*p != 'a') {
//            *q++ = *p;
//        }
//        p++;
//    }
//    *q = '\0';
//}
//
//char *emails_process(char *email) {
//    char *p = email;
//    char *q = email;
//    int split_index = 0;
//    while (*p != '@') {
//        split_index++;
//        p++;
//    }
////    char *p_right = (char *) malloc(strlen(email));
//    char *p_right = p;
////    printf("%s\n", p_right);
//
//    p = email;
//    while (*p != '+') {
//        if (*p != '.') {
//            *q++ = *p;
//        }
//        p++;
//    }
//    *q = '\0';
//    return strcat(email, p_right);
////    printf("%s\n", email);
//}
//
//int numUniqueEmails(char **emails, int emailsSize) {
//    // 1. 遍历email数组，分割每个email地址，按规则得到处理后的email
//    // 3. 遍历处理后的email数组，拿每一个email和其他email地址对比，如果不相同，实际收到邮件的不同地址数目+1。
//    char email_res[100][100] = {0};
//    int cnt = 1;
//    for (int i = 0; i < emailsSize; i++) {
//        emails_process(emails[i]);
//        int j = 0;
//        for (j = 0; j < cnt; j++) {
//            if (strcmp(emails[i], email_res[j]) == 0) {
//                break;
//            }
//        }
//        if (j >= cnt) {
//            strcpy(email_res[cnt], emails[j]);
//            cnt++;
//        }
//
//    }
//
//    return cnt;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//void modify_email(char *str) {
//    char *p = str;
//    char *q = str;
//    while (*p != '@' && *p != '+') {
//        if (*p != '.') {
//            *q++ = *p;
//        }
//        p++;
//    }
//    while (*p != '@') {//让小p跑到@符号这里。
//        p++;
//    }
//    while ((*q++ = *p++)) { ;
//    }
//}
//
//int numUniqueEmails(char **emails, int emailsSize) {
//    char str[1000][200] = {0};
//    int cnt = 0;
//    for (int i = 0; i < emailsSize; i++) {
//        modify_email(emails[i]);//处理一下，将@符号前面的.删除掉，加号后面的去掉。然后再连接@后面的。构成最后email
//        int j = 0;
//        for (j = 0; j < cnt; j++) {
//            if (strcmp(str[j], emails[i]) == 0) {
//                break;
//            }
//        }
//        if (j >= cnt) {//说明，没有找到这个email
//            strcpy(str[cnt], emails[i]);
//            cnt++;
//        }
//    }
//    return cnt;
//}
//
//int main() {
//    char str[3][200] = {"test.email+alex@leetcode.com",
//                        "test.e.mail+bob.cathy@leetcode.com",
//                        "testemail+david@lee.tcode.com"};
//    int n = 3;
//    char *arr[3] = {str[0], str[1], str[2]};
//    int k = numUniqueEmails(arr, n);
//    printf("%d", k);
//}
//
//char * mystrcpy(char * str1,const char * str2){
//    char * p = str1;
//    while((*p++ = *str2++)){
//        ;
//    }
//    return str1;
//}
//
//int main(){
//    char str[10] = {-3,-1,0,'9',7};
//    char str2[10] = {0};
//    mystrcpy(str2,str);
//    for(int i = 0;i<10;i++){
//        printf("%d ",str2[i]);
//    }
//
//}

//void fun(char str[10]){
//    char * p = str;
//    printf("7:%d\n",sizeof(str));//8 数组名作为函数参数，将退化成指针变量，所以是8个字节。
//    printf("8:%d\n",sizeof(p));//8 测试指针变量。64位系统下，就是8个字节。
//    printf("9:%d\n",strlen(str));//3 测试从某个地址开始，截止到第一个\0，中间字符的个数（不含\0）
//    printf("10:%d\n",strlen(p));//3  测试从某个地址开始，截止到第一个\0，中间字符的个数（不含\0）
//}
//int main(){
//    char str[10] = "Boy\0abc";
//    char * p = str;
//    printf("1:%d\n",sizeof(str));//10  测试数组名就是数组所占空间大小。
//    printf("2:%d\n",strlen(str));//3 测试从某个地址开始，截止到第一个\0，中间字符的个数（不含\0）
//    printf("3:%d\n",sizeof(p));//8  测试指针变量，64位系统下，就是8个字节。
//    printf("4:%d\n",strlen(p));//3 测试从某个地址开始，截止到第一个\0，中间字符的个数（不含\0）
//    printf("5:%d\n",sizeof("Boy\0abc"));//8 测试常量字符串，就是字符个数+1.
//    printf("6:%d\n",strlen("Boy\0abc"));//3 测试从某个地址开始，截止到第一个\0，中间字符的个数（不含\0）
//    fun(str);
//}

/*程序是不行的，原因：踩内存*/
//char * fun(char * str){
//    strcat(str,"abcdefg");
//    return str;
//}
//int main(){
//    char ch[10] = {"abc"};
//    char * p = fun(ch);
//    printf("%s",p);
//    printf("|%c|",p[10]);
//}
//#include <stdio.h>
//#include <string.h>
//
//char * fun(char * str){
//    strcpy(str,"abcdefg");
//    return str;
//}
//int main(){
//    char ch[3] = {'A'};
//    char * p = fun(ch);
//    printf("%s",p);
//}
/*以上程序是不行的，原因：踩内存*/
//int main() {
//    // 当前编译器是从右到左调用函数计算结果，再传入参数。
//    // 1. strupr(a) => a为"HELLO"
//    // 2. strlwr(a) => strlwr("HELLO") => a为"hello"
//    // 3. 传参，a的地址指向"hello"， strupr和strlwr结果一样都为"hello"
//    char a[20] = "Hello";
//    printf("%s, %s", strlwr(a), strupr(a)); // hello,hello
//}

//#include <stdio.h>
// 实现strcat
//char *my_strcat(char *str1, const char *str2) {
//    char *p = str1;
//    while (*str1) {
//        str1++;
//    }
//    while ((*str1 = *str2)) {//\0赋值过去了吗？
//        str1++;
//        str2++;
//    }
//    return p;
//}
//
//int main() {
//    char str[100] = "abc";
//    char *p = "defghijkl";
//    char *k = my_strcat(str, p);
//    printf("%s", k);
//}
//
//int getWordsNum(const char *str) {
//    int word_flag = 0;
//    int num = 0;
//    while (*str != '\0') {
//        if (*str == ' ') {
//            word_flag = 0;
//        } else if (word_flag == 0) {
//            word_flag = 1;
//            num++;
//        }
//        str++;
//    }
//    return num;
//}
//
//int main() {
//    char str[100] = {0};
//    gets(str);
//    printf("%s\n", str);
//    int num = getWordsNum(str);
//    printf("%d", num);
//
//}

#include <stdio.h>
#include <string.h>

//int parse_str1(char * str) {
//    char * p =str;
//    int cnt = 0;
//    while((p = strtok(p," "))){
//        cnt++;
//        p = NULL;
//    }
//    return cnt;
//}
//int parse_str2(char * str){
//    int tag = 1;//1，表示前面的字符是空格。0，就是字母。
//    int cnt = 0;
//    for(int i = 0;str[i] != '\0';i++){
//        if(str[i]!=' ' && tag == 1){
//            cnt++;
//            tag = 0;
//        }else if(str[i] == ' '){
//            tag = 1;//为下一次循环做准备。
//        }
//    }
//    return cnt;
//}
//
//int main(){
//    char str1[100] = " this is     a book";
//    int nums = parse_str1(str1);
//    printf("%d\n",nums);
//
//    char str2[100] = " this is a book ";
//    nums = parse_str2(str2);
//    printf("%d",nums);
//
//}
//int fun(int a[10],int n){
//    printf("1:%d\n",sizeof(a));
//    int sum = 0;
//    for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++){
//        sum += a[i];
//    }
//    return sum;
//}
//
//int main(){
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    int sum  = fun(a,10);
//    printf("2:%d\n",sum);
//}

//int main(){
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    int b[10];
//    memcpy(b,a,sizeof(a));
//
//    for(int i = 0;i<10;i++){
//        printf("%d ",b[i]);
//    }
//}

//int main(){
//    char b[12];
//    memset(b,1,sizeof(b));
//
//    for(int i = 0;i<12;i++){
//        printf("%d ",b[i]);
//    }
//    int a = *(int *)b;
//    printf("\n%#x\n",a);
//}

//int fun(int n) {
//    if (n == 1) {
//        return 1;
//    }
//    return n + fun(n - 1);
//}
//
//int main() {
//    int sum = 0;
//    printf("%d", fun(5));
//}

/*沙滩上有一群猴子，还有一堆桃子，猴子每天吃桃子的一半，还多一个，连续吃了10天，还剩下一个
 问，沙滩上最开始有多少桃子？
 */
//int fun(int day){ //这个函数的关系式：就是某一天早上，有多少桃子。
//    if(day == 11){
//        return 1;
//    }
//    return (fun(day+1)+1)*2;
//}
//int main(){
//    int nums = fun(1);
//    printf("%d",nums);
//}

/*青蛙跳台阶，能跳一个台阶，还能跳3个台阶，问n级台阶有多少种跳法？*/
//int fun(int steps){
//    if(steps == 1){
//        return 1;
//    }else if(steps == 2){
//        return 1;
//    }else if(steps == 3){
//        return 2;
//    }
//    return fun(steps-1)+ fun(steps-3);
//}
//int main(){
//    int n = fun(5);
//    printf("%d",n);
//}

//void fun(char * str){
//    str = str+5;
//}
//int main() {
//    char * str = "chinaismycontry";
//    fun(str);
//    printf("%s",str);
//    return 0;
//}
//
//int fun(int a[100],int n){
//    printf("2:%d\n",sizeof(a)); // 8
//    return n;
//}
//int main(){
//    int a[100] = {1,2,3};
//    printf("1:%d\n",sizeof(a)); // 400
//    fun(a,100);
//}


//递归
//double fun(int n){
//    if(n == 1){
//        return 1;
//    }
//    return n*fun(n-1);
//}
//// 动态规划
//double fun1(int n){
//    double value[n+1];
//    if(n==1){
//        return 1;
//    }else if(n==2){
//        return 2;
//    }
//    value[1] = 1;
//    value[2] = 2;
//    for(int i = 3;i<=n;i++){
//        value[i] = value[i-1] * i;
//    }
//    return value[n];
//}
//
//int main(){
//    double k = fun(5);
//    printf("%.0lf\n",k);
//    printf("%.0lf",fun1(5));
//}

//double get_result(int x, double t, double sum) {
//    if (x % 2 == 1) {
//        sum += t;
//    }
//    return sum;
//}
//
//int main() {
//    double t = 1;
//    double sum = 0;
//    for (int i = 1; i <= 19; i++) {
//        t = t * i;
//        sum = get_result(i, t, sum);
//    }
//    printf("%.2lf", sum);
//}
//void fun(char *str) {
//    unsigned long int len = strlen(str);
//    char *p = str;
//    char *q = str + len - 1;
//    while (p <q) {
//        char t = '0';
//        t = *q;
//        *q = *p;
//        *p = t;
//        p++;
//        q--;
//    }
//}
//int main(){
//    char str[100]={0};
//    scanf("%s",str);
//    fun(str);
//    printf("%s",str);
//}

/*
 请实现滤波函数：
    float get_avg(int a);
 要求：(1) 不足10个数，用实际的个数求平均值。
      (2) 超过10个数，用最新的10个数求平均值。
      (3) 算法复杂度为o(1),也就是不要用循环。
      (4) 不允许改变函数原型。
 * */
//float get_avg(int a){
//    static int sum = 0;//前面得到的数据的和。
//    static int pos = 0;//将要替换的数的下标
//    static int arr[10] = {0};//永远保存最新的10个数。
//    static int cnt = 0;//当前传入数据的个数
//
//    if(cnt < 10){
//        cnt++;//来一个数，个数就增1.
//        sum += a;
//        arr[cnt-1] = a;
//        if(cnt == 10) {
//            pos = 0;
//        }
//        return (float)sum/cnt;
//    }
//    sum = sum - arr[pos] + a ;
//    arr[pos++]= a;
//    if(pos==10) {
//        pos = 0;
//    }
//    return sum/10.0;
//}
//
//int cmp(const void *a,const void *b){
//      return *(int *)a > *(int *)b;
//}
//int deleteGreatestValue(int** grid, int gridSize, int* gridColSize) {
//      int sum = 0;
//      while(gridColSize[0] > 0){
//            int max_every_row[gridSize];
//
//            for(int i = 0;i < gridSize;i++){
//                  qsort(grid[i],gridColSize[i],sizeof(int),cmp);
//                  max_every_row[i] =grid[i][gridColSize[i]-1];
//                  gridColSize[i]--;
//                }
//
//           int max_row = max_every_row[0];
//           for(int i = 1;i<gridSize;i++){
//                if(max_every_row[i] > max_row){
//                      max_row = max_every_row[i];
//                    }
//               }
//           sum +=max_row;
//          }
//      return sum;
//}


//#include <stdio.h>
//
//#define MAX(a, b) ((a) > (b) ? (a) : (b))
//
//int dfs1(int **grid, int gridSize, int *gridColSize, int x, int y) {
//    if (x < 0 || x >= gridSize || y < 0 || y >= gridColSize[x] || grid[x][y] == 0) {
//        return 0;//当前的处理的点，是不是在网格上。超出边界，或者不是1，就不是陆地，就不再处理。
//    }
//    grid[x][y] = 0;//消掉一个1，
//    int area = 1;
//    int delta[4][2] = {{-1, 0}, // 向上遍历
//                       {1,  0},  // 向下遍历
//                       {0,  -1}, // 向左遍历
//                       {0,  1}}; // 向右遍历
//    for (int i = 0; i < 4; i++) {
//        int x_new = x + delta[i][0];
//        int y_new = y + delta[i][1];
//        area += dfs1(grid, gridSize, gridColSize, x_new, y_new);//向上遍历。
//    }
//    return area;
//}
//
//int maxAreaOfIsland1(int **grid, int gridSize, int *gridColSize) {
//    int max_area = 0;
//    for (int i = 0; i < gridSize; i++) { //按行遍历
//        for (int j = 0; j < gridColSize[i]; j++) {//按每列遍历
//            if (grid[i][j] == 1) { //找到一个陆地。
//                int area = dfs1(grid, gridSize, gridColSize, i, j);//开始递归，i 和 j 当 前点。
//                max_area = MAX(max_area, area);//就和最大面积去比较，找到小岛中的最大面积。
//            }
//        }
//    }
//    return max_area;
//}
//
//int main() {
//    int grid[][13] = {{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//                       {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
//                       {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
//                       {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0},
//                       {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0},
//                       {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
//                       {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
//                       {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};
//
//    int *p[8];
//    for (int i = 0; i < 8; i++) {
//        p[i] = grid[i];
//    }
//    int gridSize = 8;
//    int gridColSize[8] = {13, 13, 13, 13, 13, 13, 13, 13}; // 每行的列数，这里假设每行都有13列
//    int res = maxAreaOfIsland1(p, gridSize, gridColSize);
//    printf("%d\n", res);
//}

///*被调用函数不能改变实参指针变量的值,  但可以改变实参指针变量所向指变量的值。*/
//#include <stdio.h>
//int fun(int * a){
//    a++;
//    a[0] = 3;
//}
//int main(){
//    int arr[4] = {1,2,3,4};
//    int * a  = arr;
//    fun(a);//传递了其它内存块的地址，和a没有任何关系，被调函数无法改变a
//    printf("%d%d",a[0],a[1]);   //3,3
//}

//#include <stdio.h>
//void func(int n, char  str[ ][5] )
//{
//    int i;
//    for(i = 0; i < n; i++)
//        printf("\nstr[%d] = %s\n", i, str[i]);
//}
//
//int main()
//{
//    char* p[3];
//    char str[][5] = {"abc","def","ghi"};
//    func(3, str);
//}


#include <stdio.h>
//
//int main() {
//    int a[3][5] = {0};
//    printf("%d\n",sizeof(a)/sizeof(a[0][0]));
//    int (*p)[5] = a + 3;
//    printf("%d\n", p - a);
//    printf("%d\n", (char *) p - (char *) a);
//}

/*被调用函数不能改变实参指针变量的值,  但可以改变实参指针变量所向指变量的值。*/



#include <stdio.h>
#include <stdlib.h>
//typedef struct node_t{
//    int value;
//    struct node_t * next;
//}NODE_T,* linklist;
//struct node_t{
//    int value;
//    struct node_t * next;
//};
//typedef struct node_t NODE_T;
//typedef struct node_t * linklist;
//linklist create_list(int a[],int n){
//    /*产生一个头节点*/
//    linklist head = (linklist)malloc(sizeof(NODE_T));
//    linklist p = head;
//    int i = 0;
//    for(i = 0;i<n;i++){ //产生 n个有效节点。
//        p->next = (linklist)malloc(sizeof(NODE_T));
//        p= p->next;
//        p->value = a[i];//处理数据域。
//        p->next= NULL;//确保尾节点指针域为空。
//    }
//    return head;
//}
//void tranverse_linklist(linklist h){
//    while(h->next){
//        h = h->next;
//        printf("%d ",h->value);
//    }
//}
//void release_ist(linklist  h){
//    while(h->next){
//        linklist q = h->next;
//        /*拆下来首节点*/
//        h->next = h->next->next;
//        free(q);
//    }
//    free(h);//干掉头节点。
//}
//void add_one_data(linklist head) {
//    int value = 0;
//    printf("请输入您要插入的数。");
//    scanf("%d",&value);
//    while(head->next){
//        if(head->next->value > value){
//            break;
//        }else{
//            head = head->next;
//        }
//    }
//    if(!head->next){//正常循环完毕，没有一个比这个数大。
//        head->next = (linklist)malloc(sizeof(NODE_T));
//        head->next->value = value;
//        head->next->next = NULL;
//        printf("插入成功");
//        return ;
//    }
//    linklist p = head->next;//保存插入节点前一个节点的地址。
//    head->next = (linklist)malloc(sizeof(NODE_T));
//    head->next->next = p;
//    head->next->value = value;
//    printf("插入成功");
//
//}
//int main(){
//    int a[6] = {18,22,25,30,33,38};
//    linklist head= (linklist)create_list(a,6);//返回头结点的地址
//    tranverse_linklist(head);//遍历链表
//    add_one_data(head);
//    printf("插入后的结果。\n");
//    tranverse_linklist(head);//遍历链表
//    release_ist(head);
//}
/////测试github//////////////
//
//#include <stdio.h>
//int main(){
//    char * str[3] = {"abc","def","ghi"};
//    str[1][1] = '5';
//    *(str[1]+1) = '6';
//    *(*(str+1)+1) = '7';
//    printf("%s %s %s",str[0],str[1],str[2]);
//    return 0;
//}

/*请问，以下程序有没有问题？没有问题，请输出结果
 * 有问题，请指出问题？并改正（尽量少的改正步骤）。
问题：内存泄漏，原因，形参的改变不会影响到实参。
 * */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//void fun(char ** str){
//    *str = (char *)malloc(30);
//    strcpy(*str,"ilovechina");
//}
//int main(){
//    char * str = NULL;//要想改变主调函数指针变量的值，需要将指针变量的地址传递到被调用函数，
//    fun(&str);
//    printf("%s",str);
//    free(str);
//    str= NULL;
//    return 0;
//}

//#include <stdio.h>
//typedef struct  student{
//    char  c ;
//    double  d ;
//    int  i ;
//} stu1,stu2;
//int main(){
//    struct  student m[2] ={0};
//    char * p  = (char *)&m[1];
//    char * q = (char *)&m[0].i + 4;
//    printf("%x %x",q,p);
//}

#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};
struct student {
    long num;
    char name[18];
    char sex;
    int score[2];
    struct date birthday;
};
struct student stu1 = {
        .birthday = {2000, 1, 15},
        .score = {100, 80},
        .name = "李彦宏",
        .num = 10000
};

int main() {
    printf("姓名：%s\n学号：%ld\n学分：%d %d\n生日：%d年%d月%d日",
           stu1.name,
           stu1.num,
           stu1.score[0],
           stu1.score[1],
           stu1.birthday.year,
           stu1.birthday.month,
           stu1.birthday.day);
}