#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	/*const - 常属性
//		一.const修饰的常变量*/
//	const int num = 4;
//	printf("%d\n", num);
//	num = 9;
//	printf("%d", num);
//	//二.字面常量
//	//	3;
//	//100;
//	//3.14;
//	//const int n = 10;	//n是变量，但又是常属性，所以我们说n是常变量
//	//int arr[n] = { 0 };
//	return 0;
//}
////三.#define 定义的标识符常量
////#define MAX 10 //后面不需要加分号
////int main()
////{
////	int arr[MAX] = { 0 };
////	printf("MAX=%d\n", MAX);
////	return 0;
////}
////四、枚举常量    枚举：一个一个列出来  例如：   性别：男，女，保密       三原色：红 黄 蓝    星期：1, 2, 3, 4, 5, 6, 7
////枚举关键字：enum
////enum Sex
////{
////	MALE,
////	FEMALE,
////	SECRET
////};
//// enum后面的大括号最后要加上分号，不可缺少       MALE,FEMALE,SECRET:枚举常量
////int main()
////{
////	enum Sex s = MALE;
////	printf("%d\n", MALE);//0
////	printf("%d\n", FEMALE);//1
////	printf("%d\n", SECRET);//2
////	return 0;
////}

////枚举常量用法：
////enum Color
////{
////	RED,
////	YELLOW,
////	BLUE
////};//枚举常量无法修改
////int main()
////{
////	enum Color color = BLUE;//color 是一个变量,所以color可以修改如下例
////	color = YELLOW;
////	BLUE=6 错误
////	return 0;
////}
////
////字符串类型
////int main()
////{
////	"abcdefg"；
////		""；//空字符串
////	char arr1[] = "abc";//数组  "abc"包含:'a' 'b' 'c' '\0'  '\0'指的是字符串的结束标志
////	char arr2[] = { 'a','b','c','\0' };//''这种的叫字符,""这种的叫字符串 Ascii编码： '\0'=0  'a'=97 'A'=65  对应的值是ASCII码值
////	printf("%s\n", arr1);
////	printf("%s\n", arr2);
////	return 0;
////}
////注：字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容 
////int main()
////{
////	char arr1[] = "abc";
////	char arr2[] = { 'a','b','c' };//\0对字符串很重要
////	printf("%d\n", strlen(arr1));//strlen-string length -计算字符串的长度           strlen(arr1)=3
////	printf("%d\n", strlen(arr2));//strlen(arr2)=随机值
////	return 0;
////}
////转义字符：转变原来的意思
////int main()
////{
////	\n -换行   \t--水平制表符   \?---?   \\--用于表示一个反斜杠，防止它被解释为一个转义序列符
////	早期的编译器中  ??加上’）'会构成三字母词
////	printf("c:\\test\\32\\test.c");
////	printf("%c\n", '\'');//'''这样打无法输出单撇号，必须这样输入'\''
////	printf("%s\n", "\"");//"""这样打无法输出双撇号，必须这样输入"\""
////	return 0;
////}
//#include <stdio.h>
//#include <string.h>
//int main()
//{	//ddd       ddd表示1到3个八进制的数字。如：/130x 
////	xdd       dd表示2个十六进制数字。如：\x30 0
	//printf("%d\n",strlen("c:\test\32\test.c"));
////	/*printf("%c\n", '\132');*/// \32--32是2个8进制  
////	return 0;//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
////	32转换成十进制26 26作为ASCII码值代表的字符
////	/*printf("%c\n", '\x61');*/      //  \加数字是八进制 \加x加数字是十六进制
////
	//return 0;
//}
////int add(int x, int y)//加法函数
////{
////	int z = x + y;
////	return z;
////}
////int main()
////{
////	int add(int x, int  y);//声明变量
////	int a, b;
////	scanf("%d%d", &a, &b);
////	printf("%d", add(a, b));//调用加法函数
////	return 0;
////}

////
////int main()
////{
////	int a = 5, b = 0, c;
////	b = a / 2;//除法操作符‘/’ 它的值取得是商
////	c = a % 2;//取余操作符‘%’ 它的值取得是余数
////	printf("%d \n%d\n", b, c);
////	return 0;
////}
////
////int main()
////{
////	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//定义一个存放10个整数数字的数组     以下两种都可以
////	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
////	int i = 0;//数组下标是从0开始的如     arr[6]=7
////
////	while (i < 10)
////	{
////		printf("%d\n", arr[i]);
////		i++;
////	}
////	return 0;
////}
////
////int main()
////{
////	移（2进制）位操作符
////	<< 左移
////	>> 右移
////	int  a = 1;
////	整型1占4个字节-32bit位
////	 a=0000 0000 0000 0000 0000 0000 00000001
////	int b = a << 1;//b=0000 0000 0000 0000 0000 0000 00000010   将a左移一位
////	printf("%d\n", b);
////	return 0;
////}
////
////int main()
////{
////	(2进制)位操作
////	& 按位与
////	| 按位或
////	^ 按位异或
////	int a = 3, b = 5;
////	int c = a & b;//先把他们转换成2进制做
////	printf("%d\n", c);
////	011
////	101
////	001  按位与运算有零为零，按位或运算有一为一，异或运算：对应的二进制位相同为0，不同为1；
////	return 0;
////}
////
////int mian()
////{
////	int a = 10;
////	a = 20;//=叫做赋值  ==才叫等于，判断是否相等
////	a = a + 10;
////	a += 10;//两种方法都可以
////	a &= 2;
////	a = a & 2;
////	符合赋值符:+= -= *= /= %= >>= <<= &= |=
////	return 0;
////}
////
////单目操作符
////双目操作符
////三目操作符
////int main()
////{
////	int a=10,b=20;
////	a+b   '+'双目操作符 因为有两个操作数
////	c语言中表示真假   0-假   非0-真    ！逻辑反操作   
////}
////

////int main()
////{
////	int arr[10] = { 0 };//10个整型元素的数组
////	10 * sizeof(int) = 40
////		printf("%d\n", sizeof(arr));//40B     
////		 计算数组的元素个数 
////		个数=数组总大小/每个元素的大小
////	int sz = 0;
////	sz = sizeof(arr) / sizeof(arr[0]);
////	printf("%d\n", sz);//sz=10
////	int a = 10;
////	sizeof 计算的是变量或类型所占空间的大小，单位是字节
////	printf("%d\n", sizeof(a));//4B
////	printf("%d\n", sizeof(int));//4B 
////	printf("%d\n", sizeof a);//变量的时候可以省略括号，变量类型时不可以省略括号
////	printf("%d\n", sizeof int);
////	printf("%d", sizeof(arr));//计算整个数组大小，单位是字节
////}
////
////
////九月二十一日
////     strlen     遇到\0才会停止
////int a = 30   //a是全局变量
////int main()
////{
////	int a = 0;//4个字节，32bit位   a局部变量
////	int b = ~a;//    ‘~’按（2进制）位取反
////	a:  00000 000 000000 00 000 00000 00000 000
////	~a: 11111111 11111111 11111111 11111111
////	原码、补码、反码
////	负数在内存中存储的时候，存储的是二进制的补码
////	printf("%d\n", b);//打印的是这个数的原码
////	return 0;
////}
////
////int main()
////{
////	int a = 10;
////	int b = a++;//后置++或--，先使用再加加或减减   a=11 ,b=10
////	int c = ++a;// 前置++或--，先加加或减减再使用  a=11  b=11
////	printf("a=%d b=%d\n", a, b);
////	return 0;
////}
////
////int main()
////{
////	int a = 3.14;//这样正常赋值会出现错误所以要用强制类型转换如
////	int a = (int)3.14;//3.14原来是double型所以用强制类型转换转换成int型
////
////	return 0;
////}
////
////关系操作符
////   >   <  >=   <= !=（不等于）  ==（等于）
////
////逻辑操作符
////   &&逻辑与    ||逻辑或     0表示假   非0表示真   如下
////int a = 3, b = 5, c;//逻辑与 有假为假    逻辑或  有真为真
////c = a && b;
////printf("%d", c);//答案是1   
////
////条件操作符或三目操作符      exp1 ? exp2 : exp3     exp是表达式
////int main()//判断两个数的大小
////{
////	int a = 10, b = 20;
////	int max = 0;
////	max = (a > b ? a : b);//如果a>b为真  就执行a,否则执行b
////	return 0;
////}
////
////逗号表达式    exp1,exp2,x=exo3,.....expN
////
////
////int Add(int x, int y);
////{
////	int z = 0;
////	z = x + y;
////	return z;
////}
////int main()
////{
////	int arr[10] = { 0 };
////	arr[4];//[]叫下标引用操作符
////	int a = 10, b = 20;
////	int sum = Add(a, b);//（）---函数调用操作符
////	return 0;
////}
////
////int main()
////{
////	register int a = 10;//由于a以后要频繁使用所以放到寄存器里面可以节约时间     建议把a定义成寄存器变量
////	signed unsigned  //signed有符号数   unsigned  无符号数      
////		struct  union  //struct 结构体关键字   union联合体或者共用体
////		typedef //类型定义或类型重定义
////		typedef unsigned int u_int;//把unsigned int重新起个名字叫做u_int
////}
////
////void test()
////{
////	static int a = 1;//a是一个静态的局部变量
////	a++;
////	printf("a=%d\n", a);//2 3 4 5 6
////}
////
////int mian()
////{
////	int i = 0;
////	while (i < 5) {
////		test();
////		i++;
////	}
////	return 0;
////}
////
////static 修饰局部变量  局部变量的生命周期变长
////	static 修饰全局变量   改变了变量的作用域  让静态的局部变量只能在自己所在的源文件内部使用，出了原文件就没法使用了
//// extern --声明外部符号的   
////
////#define 定义标识符常量   可以定义宏  带参数 
////
////int Max(int x, int y)
////{
////	int z = x > y ? x : y;
////	return z;
////}//函数的实现
////
////宏的定义
////#define Max(x,y) (x>y?x:y)
////
////
////%p 是打印地址的
////int main()
////{
////	int a = 10;
////	int* p = &a;
////	printf("%p", &a);
////	printf("%p", p);
//////	*p = 10   //    *     解引用操作符  用来存放地址的-指针变量
////		return 0;
////}
////int main()
////{
////	char ch = 'w';
////	char* pc = &ch;
////
////	return 0;
////}//指针大小在32位上是4个字节，在64位上是8个字节
////
////
////int main()
////{
////	int a = 10;//申请了4个字节的空间
////	printf("%p\n", &a);
////	int* p = &a;//p是一个变量---指针变量
////	printf("%p\n",p);
////	*p = 20;//*--解引用操作符/简介访问操作符
////	printf("%p\n", a); 20
////	return 0;
////}
////
////
////复杂对象---- - 结构体------我们自己创造出来的一种类型
////
////
////创建一个结构体类型 
////struct Book
////{
////	char name[20];//C语言程序设计 
////	short price;//55 
////};
////
////int main()
////{
////	利用结构体类型-创建一个该类型的结构体变量 
////	struct Book b1 = { "C语言程序设计"，55 };
////	struct Book* pb = &b1;//指针变量的定义
////	改书名的办法     变量可以直接改，数组不行
////	strcpy(b1.name, "C++");//strcpy---string copy --字符串拷贝-库函数--头文件string.h
////	 利用pb打印出书名和价格
////	printf("%s\n",(*pb).name);
////	printf("%d\n",(*pb).price);
////	printf("%s\n", pb->name);//和上面两个结果一样 
////   .点用于 结构体变量.成员
////->  用于结构体指针.成员 
////	printf("书名：%s\n", b1.name);//打印书的名字 
////	printf("价格：%d\n", b1.price);//打印书的价格
////	b1.price = 15;//改变书的价格
////	return 0;
////}
////
////
////
////#include <stdio.h>
////struct Book {
////	char name[20];
////	short price;
////};
////
////int main()
////{
////	struct Book b1 = { "C语言程序设计",52 };
////	struct Book* p1 = &b1;
////	strcpy(p1->name, "C++");
////	printf("书名：%s\n", p1->name);
////	return 0;
////}
////
////
////
////C语言是一门结构化的程序设计语言
////1.顺序结构
////2.选择结构
////3.循环结构
////
////分支语句      if    switch
////       ;        //是语句，是一个空语句
////if(表达式)
////    语句1;         //如果表达式为真执行该语句
////
////if(表达式)
////    语句1;
////else
////    语句2;        //如果表达式为真执行语句1,否则执行语句2
////
////多分支
////if(表达式1）
////  语句1;
////else if(表达式2）
////  语句2;
////else 
////  语句3;
////
////#include <stdio.h>
////int main()
////{
////    int age = 10;
////    scanf("%d", &age);
////    if (age < 18) {
////        printf("未成年\n");
////        printf("不能谈恋爱\n");
////    }        //{   }-------这对大括号叫做代码块
////    else if(age>=18 && age<28){
////        printf("青年\n");
////    }
////    else if (age >= 28 && age < 50) {
////        printf("壮年\n");
////    }
////    else if (age >= 50 && age < 90) {
////        printf("老年\n");
////    }
////    else {
////        printf("老不死\n");
////    }
////    return 0;
////}
////else 和离他最近的且未进行匹配的if进行匹配
////
////
////if (condition == 1) {
////    return x;//如果condition成立就直接返回x，没有y什么事了
////}
////return y;//如果condition成立返回x，否则返回y     该代码可读性不好不要写成这样，应该写成下列：
////
////
////if (condition) {
////    return x;
////}
////else {
////    return y;
////}
////
////int num = 4;
////if (num = 5)//= 赋值   ==判断等于
////{
////    printf("呵呵\n");
////}//会打印出呵呵,由于赋值和判断等于会输错，所以以后按一下写法
////
////if (5 == num) {
////    printf("呵呵\n");
////}
////
////
////#include <stdio.h>
////int main() 
////{
////    int num;
////    scanf("%d", &num);
////    if (num %2 == 0) 
////    {
////        printf("%d是偶数\n",num);
////    }
////    else 
////    {
////        printf("%d是奇数\n", num);
////    }
////    return 0;
////}
////   
////#include <stdio.h>
////int main()
////{
////    int num;
////    for (num = 1; num <= 100; num++) {
////        if (num % 2 == 1)
////        {
////            printf("%d是奇数\n", num);
////        }
////    }
////    return 0;
////}
////
////switch  多分支语句
////switch(  整型  表达式)       case(   整形   常量   表达式)
////
////
////
////
////#include <stdio.h>
////int main()
////{
////    int day = 0;
////    scanf("%d", &day);
////    switch (day)
////    {
////    case 1:
////        printf("星期一\n"); 
////        break;
////    case 2:
////        printf("星期二\n"); 
////        break;
////    case 3:
////        printf("星期三\n");
////        break;
////    case 4:
////        printf("星期四\n");
////        break;
////    case 5:
////        printf("星期五\n");
////        break;
////    case 6:
////        printf("星期六\n");
////        break;
////    case 7:
////        printf("星期日\n"); 
////        break;
////    }
////    return 0;
////}
////
////#include <stdio.h>
////int main()
////{
////    int day = 0;
////    scanf("%d", &day);
////    switch (day)
////    {
////    case 1:
////    case 2:
////    case 3:
////    case 4:
////    case 5:
////        printf("工作日\n");
////        break;
////    case 6:
////    case 7:
////        printf("休息日\n");
////        break;//终止所有直接跳出
////    default:
////        printf("输入错误");
////        break;//     默认
////    }//switch 允许嵌套使用
////    return 0;
////}
////
////
//#include <stdio.h>
//int main()
//{
//    int n = 1, m = 2;
//    switch (n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//    {
//        switch (n)
//        {
//        case 1:n++;
//        case 2:m++, n++; 
//            break;
//        }
//    }
//    case 4:m++;
//        break;
//    default:
//        break;
//    }
//    printf("m=%d,n=%d\n", m, n);
//    return 0;
//}//m=5, n=3
////
////
////
////循环语句    while for do_while
////    while语法结构
////    while (表达式）    表达式为真就执行循环语句
////          循环语句：
////#include <stdio.h>
////int main()
////{
////    int i = 1;
////    while (i <= 10)
////    {
////        i++;
////        if (i == 5)
////        {
////            continue;//直接跳出本次循环
////            printf("%d", i);
////        }
////    }
////    return 0;
////}
////#include <stdio.h>
////int main()
////{
////    int ch = 0;
////    ctrl+z  =EOF
////    EOF---end of file文件结束标志 --->-1
////    while ((ch = getchar()) != EOF)
////    {
////        putchar(ch);
////    }
////
////
////    /*int ch = getchar();
////    putchar(ch);
////    printf("%c\n", ch);*/
////    return 0;
////}
////
//#include <stdio.h>
//int main()
//{
//    int ret = 0,ch=0;
//    char password[20] = { 0 };
//    printf("请输入密码：");
//    scanf("%s", password);//输入密码并且存放在password数组中
//////    缓冲区还会剩下一个\n,用getchar（）读掉就好了
//    
//   
//    while (ch = getchar() != '\n')
//    {
//        ;
//    }
//      printf("请确认( Y / N ):");
//        ret = getchar();
//        if (ret == 'Y')
//        {
//            printf("确认成功\n");
//        }
//        else if (ret == 'N')
//        {
//            printf("放弃确认\n");
//        }
//        else
//        {
//            printf("输入错误，请重新输入\n");
//        }
//    return 0;
//}
////




////#include <stdio.h>
////int main()
////{
////	int b;
////	b = getchar();
////	putchar(b);
////	return 0;
////}
////


////for 循环     建议for循环控制变量采用前闭后开的形式
////for循环的初始化，调整，判断都可以省略但是for循环不要随便省略会带来想不到的后果
//#include <stdio.h>
//int main()
//{
//    int i = 0, j = 0;
//    for (; i < 10; i++)
//    {
//        for (; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }//只会打印10次
//    return 0;
//}     
////
////#include <stdio.h>
////int main()
////{
////    int n=0,i=0,sum=1,e=0;
////    for (n = 1; n <= 3; n++)
////    {
////        for (i = 1,sum=1; i <= n; i++)
////        {
////            sum *= i;//如果不初始化sum就会出现错误
////        }//内部循环算的是阶乘
////        e += sum;
////    }
////    printf("e=%d", e);
////    return 0;
//}

////#include <stdio.h>
////int main()
////{
////    int sum = 0, ret = 1, n;
////        for (n = 1; n <= 3; n++)
////        {
////            ret *= n;
////            sum += ret;
////        }
////    printf("sum=%d\n", sum);
////    return 0;
////}//对上述代码的优化节省时间，计算1！+2！+......+n！
////
////#include <stdio.h>
////int main()
////{
////	int i, n;
////	int sum=0, ret=1;
////	scanf("%d", &n);
////	for (i = 1; i <= n; i++)
////	{
////		ret *= i;
////		sum += ret;
////	}
////	printf("%d", sum);
////	return 0;
////}

////#include <stdio.h>//写一个代码，在数组（有序数组）中找到7       如果按照顺序查找复杂度为O（n）---n---要查找的最多次
////int main()
////{
////    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////    int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
////    int left = 0;//左下标
////    int right = sz - 1;//右下标
////    int k;
////    scanf("%d", &k);
////    while (left <= right)
////    {
////       int  mid = (left + right) / 2;
////        
////        if (arr[mid] > k)
////        {
////            right = mid - 1;
////        }
////        else if (arr[mid] < k)
////        {
////            left = mid + 1;
////        }
////        else
////        {
////            printf("找到了,下标是：%d\n", mid);
////            break;
////        }
////    }
////    if (left > right)
////    {
////        printf("找不到了\n");
////    }
////    return 0;
////}//折半（二分）查找算法  复杂度为log 以2为底的n
////

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>//sleep函数头文件
//#include <stdlib.h>//system函数头文件
//int main()
//{
//    char arr1[] = "welcome to bit!!!!!!";
//    char arr2[] = "####################";
//    int left = 0;
//    int right=sizeof(arr1)/sizeof(arr1[0])-2;  //因为字符串结尾有'\0'所以减2
//    //int right = strlen(arr1) - 1;//两种方法都可以  也有'\0'
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(200);//休息一秒 1000ms
//       system("cls");//执行系统命令的一个函数 cls----清空屏幕
//        left++;
//        right--;
//    }
//    printf("%s\n", arr2);
//    return 0;
//}


////#include <stdio.h>
////int main()
////{
////    int i = 0;
////    char password[20] = { 0 };
////    for (i = 1; i <= 3; i++)
////    {
////        printf("请输入密码：");
////        scanf("%s", password);
////        if (strcmp(password, "123456")==0)//== 不能比较两个字符串是否相等，应该使用一个库函数——--strcmp
////        {
////            printf("登陆成功\n");
////            break;
////        }
////        else
////        {
////            printf("密码错误\n");
////        }
////    }
////    if (i == 3)
////    {
////        printf("三次密码均错误，退出程序\n");
////    }
////    return 0;
////}

////#include <stdio.h>
////int main()
////{
////	int i, j;
////	for (i = 1; i < 10; i++)
////	{
////		for (j = 1; j <= i; j++)
////		{
////			printf("%d*%d=%d", j, i, i * j);
////			if (i * j > 9)
////			{
////				printf("  ");
////			}
////			else
////			{
////				printf("   ");
////			}
////		}
////		printf("\n");
////	}
////	return 0;
////}

////将三个数从大到小输出
////#include <stdio.h>
////int main()
////{
////	int a, b, c;
////	scanf("%d%d%d", &a, &b, &c);
////	if (a < b)
////	{
////		int temp;
////		temp = a, a = b, b = temp;
////	}
////	if (a < c)
////	{
////		int temp;
////		temp = a, a = c, c = temp;
////	}
////	if (b < c)
////	{
////		int temp;
////		temp = b, b = c, c = temp;
////	}
////	printf("%d %d %d", a, b, c);
////	return 0;
////}

////打印3的倍数，打印1-100之间所有3的倍数的数字
////#include <stdio.h>
////int main()
////{
////	int i;
////	for (i = 1; i <= 100; i++)
////	{
////		if (i % 3 == 0)
////		{
////			printf("%d ", i);
////		}
////	}
////	return 0;
////}
//
//////给定两个数，求这两个数的最大公约数
//////辗转相除法
//#include <stdio.h>
//int main()
//{
//	int m = 24, n = 18, r = 0;
//	scanf("%d %d", &m, &n);
//	while (m % n !=0 )//判断m%n是否等于0，若为真则条件成立走循环     while中的表达式只要不等于0就一直执行
//	{               //也就是说while中的表达式只要不为真就一直执行，0表示假，非0表示真，如果条件成立就执行
//		r = m % n;
//		m = n, n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

////判断是否为闰年  1.能被4整除并且不能被100整除是闰年  2.能被400整除是闰年
////#include <stdio.h>
////int main()
////{
////	int year,i;
////	for (year = 2000,i=1; year <= 2500; year++)
////	{
////		if (year % 4 == 0 && year % 100 != 0)
////		{
////			printf("%d ", year);
////			i++;
////		}
////		if (year % 400 == 0)
////		{
////			printf("%d", year);
////			i++;
////		}
////		if (i % 10 == 0)
////		{
////			printf("\n");
////		}
////	}
////	printf("\n闰年一共有%d个",i-1);
////	return 0;
////}
////
////打印100-200之间的素数
////试除法
////#include <stdio.h>
////
////int main()
////{
////	int i,j;
////	for (i = 100; i <= 200; i++)
////	{
////		for (j = 2; j < i; j++)
////		{
////			if (i % j ==0)
////			{
////				break;
////			}
////		}
////		if (j == i)
////		{
////			printf("%d ", i);
////		}
////	}
////	return 0;
////}
////优化
////#include <stdio.h>
////#include <math.h>
//////i=a*b  a和b中至少有一个数字小于等于根号i
////int main()
////{
////	int i, j;
////	for (i = 100; i <= 200; i++)
////	{
////		for (j = 2; j <= sqrt(i); j++)
////		{
////			if (i % j == 0)
////			{
////				break;
////			}
////		}
////		if (j >sqrt(i))
////		{
////			printf("%d ", i);
////		}
////	}
////	return 0;
////}

///输出1/1+1/2+。。。。。。+1/100
////#include <stdio.h>
////int main()
////{
////	int i;
////	double sum = 0,p;
////	for (i = 1; i <= 100; i++)
////	{
////		p = 1.0 / i;//要小数必须加上小数点
////		sum += p;
////	}
////	printf("%lf", sum);
////	return 0;
////}
////
////
////
////求十个数的最大值
////#include <stdio.h>
////int main()
////{
////	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
////	int max = arr[0];
////	int i;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	for (i = 1; i < sz; i++)
////	{
////		if (max < arr[i])
////		{
////			max = arr[i];
////		}
////	}
////	printf("%d\n", max);
////	return 0;
////}

//#include <stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	int i, j;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 8,6,5,7,9,1,3,4,2,10 };
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	printf("%d", sz);
//	BubbleSort(arr, sz);
//	int i;
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

////猜数字游戏
////1.电脑会随机产生一个随机数
////2.猜数字
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////void menu()
////{
////	printf("**********************************\n");
////	printf("*********** 1.play     **********\n");
////	printf("*********** 0.exit     **********\n");
////	printf("**********************************\n");
////}
////TDD-测试驱动开发。
////RAND_MAX--rand函数能返回随机数的最大值。
////void game()
////{
////	int random_num = rand() % 100 + 1;
////	int input = 0;
////	while (1)
////	{
////		printf("请输入猜的数字>:");
////		scanf("%d", &input);
////		if (input > random_num)
////		{
////			printf("猜大了\n");
////		}
////		else if (input < random_num)
////		{
////			printf("猜小了\n");
////		}
////		else
////		{
////			printf("恭喜你，猜对了\n");
////			break;
////		}
////	}
////}
////int main()
////{
////	int input = 0;
////	srand((unsigned)time(NULL));
////	do
////	{
////		menu();
////		printf("请选择>:");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			game();
////			break;
////		case 0:
////			break;
////		default:
////			printf("选择错误,请重新输入!\n");
////			break;
////		}
////	} while (input);
////	return 0;
////}
//
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 10");
//again:
//    printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//    scanf("%s", input);
//    if (strcmp(input, "我是猪"))
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}
//
////函数
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char arr1[] = "bit";
////	char arr2[20] = "#########";
////	strcpy(arr2, arr1);//char *strcpy(char *destination ,char*source);    都表示地址
////	printf("%s\n", arr2);
////	return 0;
////}
////
////memset
////void* memset(void* ptr, int value, size_t num);
//
//#include <stdio.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'A', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//
////
////函数的组成:
////ret_type fun_name(paral,*)
////{
////	
////	starement;//语句项
////} 
////ret_type 返回类型
////fun_name 函数名
////paral    函数参数
////
////函数定义
////max(int x, int y)
////{
////	return ( x > y ? x : y);
////}
////
////
////#include <stdio.h>
////int main()
////{
////	int a = 20, b = 10;
////	函数的使用
////	int MAX=max(a, b);
////	printf("%d\n", MAX);
////	return 0;
////}
////
////#include <stdio.h>
////swap(int* p1, int* p2)   //形式参数简称形参
////{
////	int tmp;
////	tmp = *p1, * p1 = *p2, * p2 = tmp;//交换两个数应该用指针来
////}
////
////int main()
////{
////	int a = 20, b = 10;
////swap1(a, b);//当实参传给形参时，形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的
////	swap(&a, &b);//swap是把地址拷过去的所以会改变实参
////	printf("a=%d b=%d", a, b);//实参可以是常量、变量、表达式、函数等
////	return 0;
////}
//
////函数调用
////
////传值调用：函数的形参和实参分别位于不同内存块，对形参的修改不会影响实参
////传址调用：传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
////这种传参方式可以让函数和函数外边的变量建立起正真的联系，也就是函数内部可以直接操
////作函数外部的变量
//
////如果只想获取值就用传值调用，如果要改变实参就用传址调用
//
////#include <stdio.h>
////是素数返回1，不是返回0
////int is_prime(int n)
////{
////	int j;
////	for (j = 2; j < n; j++)
////	{
////		if (n % j == 0)
////		{
////			return 0;//用了return函数就直接结束
////		}
////		else
////		{
////			return 1;//如果写成这样就不对了，必须把return 1写在外面
////		}
////	}
////	return 1;
////}
//
////int main()
////{
////	int i;
////	for (i = 100; i <= 200; i++)
////	{
////		if (is_prime(i) == 1)  //判断i是否为素数
////		{
////			printf("%d ", i);
////		}
////	}
////	return 0;
////}
//
////二分查找法函数体写法
////#include <stdio.h>
////int binary_search(int arr[], int n,int sz)//本质上这里的arr是一个指针
////{
////	int left = 0;
////	int right = sz - 1;
////	while (left <= right)
////	{
////		int mid = (left + right) / 2;
////		if (arr[mid] > n)
////		{
////			right = mid - 1;
////		}
////		else if (arr[mid] < n)
////		{
////			left = mid + 1;
////		}
////		else
////		{
////			return mid;
////		}
////	}
////	return -1;
////}
//
////int main()
////{
////	二分查找
////	在一个有序数组中查找具体的某个数
////	如果找打了返回这个数的小标，找不到的返回-1
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int k;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	scanf("%d", &k);
////	int ret = binary_search(arr, k,sz);//这边的数组arr只传了首元素arr[0]的地址,添加一个sz就可以解决
////	if (ret == -1)
////	{
////		printf("找不到指定的数字\n");
////	}
////	else
////	{
////		printf("找到了，下标是%d\n", ret);
////	}
////	return 0;
////}
////
////函数嵌套调用
////#include <stdio.h>
////void line()
////{
////	printf("hehe\n");
////}
////
////void new_line()
////{
////	int i;
////	for (i = 0; i < 3; i++)
////	{
////		line();
////	}
////}
////
////
////int main()
////{
////	new_line();
////	return 0;
////
////}
////
////链式访问
////#include <stdio.h>
////int main()
////{
////	int len = 0;
////	len = strlen("abc");
////	printf("%d\n", len);
////
////	链式访问
////	printf("%d\n", strlen("abc"));
////	return 0;
////}
////
////#include <stdio.h>
////int main()
////{
////	printf("%d", printf("%d", printf("%d", 43)));//printf函数的返回值是打印字符的个数，所以结果是4321
////	return 0;
////}
////
////#include <stdio.h>
////#include "add.h"
////函数声明
////int ADD(int x, int y);
////
////int main()
////{
////	int a = 10, b = 20, sum = 0;
////	sum = ADD(a, b);
////	printf("%d\n", sum);
////	return 0;
////}
////
////函数体可以在源文件创建一个函数定义---函数名.c ，之后再在头文件部分创建一个文件--函数名.h   对函数进行声明，之后如果要调用
////就直接输入#include "头文件名称加后缀名"即可调用，如#include "add.h"
////
////函数的定义
////int ADD(int x, int y)//如果定义的函数在主函数后面需要先在主函数里面或者主函数前面对所定义函数先进行声明再使用
////{
////	int z = x + y;
////	return z;
////}
////
////函数递归   函数自己调用自己才叫递归
////#include <stdio.h>
////int main()
////{
////	printf("hehe\n");
////	main();
////	return 0;
////}
////函数递归会stack overflow栈溢出
////
////
////
////局部变量
////函数形参                   栈区
////
////动态开辟的内存
////malloc
////calloc                     堆区
////
////全局变量
////static修饰的变量           静态区
////
////#include <stdio.h>
////void print(int n)
////{
////	if (n > 9)
////	{
////		print(n / 10);
////	}
////	printf("%d ", n % 10);//递归书写时存在限制条件，每次递归后越来越接近这个条件
////}
////
////int main()
////{
////	unsigned int num = 0;
////	scanf("%d", &num);//123
////	print(num);
////	return 0;
////}
////
////#include <stdio.h>
////int  my_strlen(char* str)
////{
////	/*int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;*/   //不允许创建临时变量 用另一种方法
////	if (*str != '\0')
////	{
////		return 1 + my_strlen(str + 1);
////	}
////	else
////		return 0;
////}
////
////int main()
////{
////	char arr[20] = { 0 };
////	scanf("%s", arr);
////	int length = my_strlen(arr);
////	/*int length = my_strlen(arr);*///arr是数组，数组传参传过去的不是整个数组,而是第一个元素的地址
////	printf("%d\n", length);
////	return 0;
////}
//
//
//迭代
//#include <stdio.h>
////循环
//int Fac1(int x)
//{
//	int i;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
////函数嵌套
//int Fac2(int x)
//{
//	int ret=1;
//	if (x > 0)
//	{
//		ret =x*Fac2(x-1);
//		return ret;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n,ret;
//	scanf("%d", &n);
//	//ret=Fac1(n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
////描述第n个斐波那契数
//// 1   1    2    3    5     8    13    21 ......
//#include <stdio.h>
//
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}//该函数效率太低
//
//int Fib2(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n=8;
//	int ret = 0;
//	//scanf("%d", &n);
//	//ret = Fib(n);
//	ret = Fib2(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//汉诺塔问题
//#include <stdio.h>
//int main()
//{
//
//	return 0;
//}
//青蛙跳台阶问题
//#include <stdio.h>
//int main()
//{
//
//	return 0;
//}
//
////数组  一维数组
//#include <stdio.h>
//int main()
//{
//	//创建一个数组，创房整型10个
//	int arr[10] = {1,2,3};//不完全初始化,剩下的元素默认初始化为0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab"; //arr3[3]='\0'
//	char arr4[] = "abcdef";//数组中字符串结尾会有'\0
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof 计算 arr4所占空间的大小
//	//7个元素-char 7*1=7
//
//	printf("%d\n", strlen(arr4));//6
//	//strlen  求字符串的长度 遇到 '\0'就停止了，不算'\0'
//	//'\0'之前的字符个数
//
//	int n = 5;
//	char ch[n];//错误写法
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值，因为没有遇到'\0'
//
//	char arr[] = "abcdef";
//	printf("%c\n", arr[3]);//%c打印单个字符，%s打印字符串
//	return 0;
//}
//
////1.strlen 和 sizeof没有什么关系
////2.strlen 是求字符串长度的-只能针对字符串求长度-库函数-使用头文件
////3.sizeof 计算变量，数组，类型的大小-单位是字节-操作符
//
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//一维数组在内存中是连续存放的
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//
////二维数组
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = {{ 1,2,3 } {4, 5}};//
//	char ch[5][6];
//	int arr[][4] = { {2,3},{4,5} };//二维数组的列不可以省略，行可以省略
//	return 0;
//}
//
//打印二维数组
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { { 1,2,3 } ,{4, 5} };	
//	int i,j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%d ", i, j, arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
////打印二维数组的地址
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { { 1,2,3 } ,{4, 5} };//二维数组在内存中是连续存放的
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p ", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}//可以吧二维数组看成n个一维数组，n代表行的个数
//
////数组作为函数参数
////冒泡排序
////设计一个冒泡排序的函数将一个整形数组进行排序
//#include <stdio.h>
//
//void bubble_sort(int arr[],int length)
//{
//	/*确定冒泡排序的趟数*/
//	int i = 0,j;
//	for (i = 0; i <length-1;i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经是有序的了
//		/*每一趟冒泡排序*/
//		for (j = 0; j <length - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;//break只能用在循环和switch中，但是本句的if是在for循环里所以这边的break是终止本次for循环的
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*对arr进行升排序
//	arr是数组,对arr进行传参,传的是数组首元素的地址*/
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
////数组名是什么
////数组名就是首元素的地址
////数组名是数组首元素的地址（有两个例外）
//
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//
//	printf("%p\n", arr);//代表数组第一个元素的地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//代表数组的第一个元素的地址
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//代表整个数组的地址，只是从第一个元素的地址开始
//	printf("%p\n", &arr+1);
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////sizeof(数组名) -数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
//	////&（取地址）数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);//1
//	return 0;
//}
//

//   & //按位与
//   | //按位或
//   ^ //按位异或
//   注：他们的操作数必须是整数。
//#include <stdio.h>
//int main()
//{
//	//  &  必须按照二进制位
//	int a = 3;
//	int b = 5;
//	//int c = a & b;
//	//int c = a | b;
//	//int c = a ^ b;
//	//000000000000000000000000000011
//	//000000000000000000000000000101
//	//000000000000000000000000000001
//	printf("%d\n",c);
//	return 0;
//}

////不创建临时变量实现两个数字的交换   用异或运算符
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	////加减法
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//异或法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after is:%d %d", a, b);
//	return 0;
//}

//求一个整数存储在内存中的二进制中的1的个数
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	 //统计num的补码中有几个1
//	while (num != 0)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}//此类算法负数不行

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	//32bit
//	//num & 1==1  按位与
//	//00000000000000000000000000000010
//	//00000000000000000000000000000001
//	//00000000000000000000000000000000
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> 1) & 1)
//		{
//			count++;
//		}
//	}
//
//
//
//	printf("%d\n", count);
//	return 0;
//}

////赋值操作符
//#include <stdio.h>
//int main()
//{
//	if (a)
//	{
//		//a为真执行if
//	}
//	if (!a)
//	{
//		//a为假执行if
//	}
//	return 0;
//}
 
//#include <stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + s));
//	printf("%d\n", s);
//	// 2     0
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11   ~按位取反
//	return 0;
//}

//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)  4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)    4   指针要么是4字节要么是8字节
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)  40
//	printf("%d\n", sizeof(ch));//(3)   10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	//&& 逻辑与
//	//|| 逻辑或
//	int a = 0, b = 5;
//	int c = a && b;
//	printf("%d\n", c);// 0
//	int d = a || b;
//	printf("%d\n", d);// 1
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//  //  i = a++ && ++b && d++;//逻辑与短路 只要最左边有一个假剩下的都不算了
//    i = a++||++b||d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);// && 1  2  3  4
//    // || 2  2  3  4 
//    return 0;
//}
////程序输出的结果是什么？ 

/*逗号表达式
逗号表达式，就是用逗号隔开的多个表达式。 逗号表达式，从左向右依次执行。整个表达式的结果是最
后一个表达式的结果。

*/
//if (a > 5)
//b = 3;
//else
//b = -3;
////转换成条件表达式，是什么样？
////exp1, exp2, exp3, …expN
//
//
////代码1
//int a = 1;
//int b = 2;
//int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
////c是多少？
//
//
////代码2
//if (a = b + 1, c = a / 2, d > 0)
//
//
////代码3
//a = get_val();
//count_val(a);
//while (a > 0)
//{
//    //业务处理
//    a = get_val();
//    count_val(a);
//}
//
//
////如果使用逗号表达式，改写：
//while (a = get_val(), count_val(a), a > 0)
//{
//    //业务处理
//}



////下标引用、函数调用和结构成员
////1.[] 下标引用操作符
////操作数：一个数组名 + 一个索引值
//
//int arr[10];//创建数组
//arr[9] = 10;//实用下标引用操作符。
//
////[]的两个操作数是arr和9



////2.() 函数调用操作符 接受一个或者多个操作数：第一个操作数是函数名，剩余的操作数就是传递给函数的参数。
//#include <stdio.h>
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();            //实用（）作为函数调用操作符。
//	test2("hello bit.");//实用（）作为函数调用操作符。
//	return 0;
//}
//
//#include <stdio.h>
////创建一个结构体类型--struct Stu   这个类型struct Stu相当于图纸
//struct Stu//表示类型
//{
//	char name[20];
//	int age;
//	char id[20];
//};//描述Stu的一些特性
//
//int main()
//{
//	int a = 10;
//	//使用struct Stu 这个类型创建了一个学生对象s1,并初始化
//	struct Stu s1 = {"张三",20,"2019010305"};//有了类型相当于图纸就可以直接盖房子了
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	//或者这样写  printf("%s\n", ps->name);
//	// 结构体指针 + " -> " + 成员名
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量.成员名
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	//a和b如何相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000000
//	char c = a + b;
//	//10000000-c
//	//11111111111111111111111100000010-补码
//	printf("%d\n", c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");//c
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}

////算术转换
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int


//指针Pointer

//#include <stdio.h>
//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//	  //将a的地址存放在p变量中，p就是一个之指针变量。
//	return 0;
//}
//指针的大小在32位平台是4个字节，在64位平台是8个字节。
//总结：指针就是变量，用来存放地址的变量。（存放在指针中的值都被当成地址处理)

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//	return 0;//指针的大小在32位平台是4个字节，在64位平台是8个字节。
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa=&a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}

//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p; *p能够访问4个字节
//char* p; *p能够访问1个字节
//double* p;*p能够访问8个字节

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}
//指针类型决定了指针走一步走多远即决定了指针的步长(字节)
//int* p;p+1---->4
//char* p;p+1--->1
//double* p;p+1---->8


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名，首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf(" %d ", arr[i]);
//	}
//	return 0;
//}

//野指针: 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//野指针成因
//   1. 指针未初始化    2. 指针越界访问     3.指针指向的空间释放

//#include <stdio.h>
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值，如果指针是个随机值就是野指针
//	*p = 20;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}//指针越界访问
//	return 0;
//}

//#include <stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;//局部变量a进入test函数创建空间，离开函数销毁空间
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}//指针指向的空间释放
//int* p=NULL;给指针初始化，空指针

//#include <stdio.h>
//int main()
//{
//    int* p = NULL;
//    int a = 10;
//    p = &a;
//    if (p != NULL)
//    {
//        *p = 20;
//    }
//    printf("%d", *p);
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}
//*p++ = 0; 等价于* p = 0; p++;




