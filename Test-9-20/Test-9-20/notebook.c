#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	/*const - ������
//		һ.const���εĳ�����*/
//	const int num = 4;
//	printf("%d\n", num);
//	num = 9;
//	printf("%d", num);
//	//��.���泣��
//	//	3;
//	//100;
//	//3.14;
//	//const int n = 10;	//n�Ǳ����������ǳ����ԣ���������˵n�ǳ�����
//	//int arr[n] = { 0 };
//	return 0;
//}
////��.#define ����ı�ʶ������
////#define MAX 10 //���治��Ҫ�ӷֺ�
////int main()
////{
////	int arr[MAX] = { 0 };
////	printf("MAX=%d\n", MAX);
////	return 0;
////}
////�ġ�ö�ٳ���    ö�٣�һ��һ���г���  ���磺   �Ա��У�Ů������       ��ԭɫ���� �� ��    ���ڣ�1, 2, 3, 4, 5, 6, 7
////ö�ٹؼ��֣�enum
////enum Sex
////{
////	MALE,
////	FEMALE,
////	SECRET
////};
//// enum����Ĵ��������Ҫ���Ϸֺţ�����ȱ��       MALE,FEMALE,SECRET:ö�ٳ���
////int main()
////{
////	enum Sex s = MALE;
////	printf("%d\n", MALE);//0
////	printf("%d\n", FEMALE);//1
////	printf("%d\n", SECRET);//2
////	return 0;
////}

////ö�ٳ����÷���
////enum Color
////{
////	RED,
////	YELLOW,
////	BLUE
////};//ö�ٳ����޷��޸�
////int main()
////{
////	enum Color color = BLUE;//color ��һ������,����color�����޸�������
////	color = YELLOW;
////	BLUE=6 ����
////	return 0;
////}
////
////�ַ�������
////int main()
////{
////	"abcdefg"��
////		""��//���ַ���
////	char arr1[] = "abc";//����  "abc"����:'a' 'b' 'c' '\0'  '\0'ָ�����ַ����Ľ�����־
////	char arr2[] = { 'a','b','c','\0' };//''���ֵĽ��ַ�,""���ֵĽ��ַ��� Ascii���룺 '\0'=0  'a'=97 'A'=65  ��Ӧ��ֵ��ASCII��ֵ
////	printf("%s\n", arr1);
////	printf("%s\n", arr2);
////	return 0;
////}
////ע���ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ������� 
////int main()
////{
////	char arr1[] = "abc";
////	char arr2[] = { 'a','b','c' };//\0���ַ�������Ҫ
////	printf("%d\n", strlen(arr1));//strlen-string length -�����ַ����ĳ���           strlen(arr1)=3
////	printf("%d\n", strlen(arr2));//strlen(arr2)=���ֵ
////	return 0;
////}
////ת���ַ���ת��ԭ������˼
////int main()
////{
////	\n -����   \t--ˮƽ�Ʊ��   \?---?   \\--���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
////	���ڵı�������  ??���ϡ���'�ṹ������ĸ��
////	printf("c:\\test\\32\\test.c");
////	printf("%c\n", '\'');//'''�������޷������Ʋ�ţ�������������'\''
////	printf("%s\n", "\"");//"""�������޷����˫Ʋ�ţ�������������"\""
////	return 0;
////}
//#include <stdio.h>
//#include <string.h>
//int main()
//{	//ddd       ddd��ʾ1��3���˽��Ƶ����֡��磺/130x 
////	xdd       dd��ʾ2��ʮ���������֡��磺\x30 0
	//printf("%d\n",strlen("c:\test\32\test.c"));
////	/*printf("%c\n", '\132');*/// \32--32��2��8����  
////	return 0;//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
////	32ת����ʮ����26 26��ΪASCII��ֵ������ַ�
////	/*printf("%c\n", '\x61');*/      //  \�������ǰ˽��� \��x��������ʮ������
////
	//return 0;
//}
////int add(int x, int y)//�ӷ�����
////{
////	int z = x + y;
////	return z;
////}
////int main()
////{
////	int add(int x, int  y);//��������
////	int a, b;
////	scanf("%d%d", &a, &b);
////	printf("%d", add(a, b));//���üӷ�����
////	return 0;
////}

////
////int main()
////{
////	int a = 5, b = 0, c;
////	b = a / 2;//������������/�� ����ֵȡ������
////	c = a % 2;//ȡ���������%�� ����ֵȡ��������
////	printf("%d \n%d\n", b, c);
////	return 0;
////}
////
////int main()
////{
////	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//����һ�����10���������ֵ�����     �������ֶ�����
////	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
////	int i = 0;//�����±��Ǵ�0��ʼ����     arr[6]=7
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
////	�ƣ�2���ƣ�λ������
////	<< ����
////	>> ����
////	int  a = 1;
////	����1ռ4���ֽ�-32bitλ
////	 a=0000 0000 0000 0000 0000 0000 00000001
////	int b = a << 1;//b=0000 0000 0000 0000 0000 0000 00000010   ��a����һλ
////	printf("%d\n", b);
////	return 0;
////}
////
////int main()
////{
////	(2����)λ����
////	& ��λ��
////	| ��λ��
////	^ ��λ���
////	int a = 3, b = 5;
////	int c = a & b;//�Ȱ�����ת����2������
////	printf("%d\n", c);
////	011
////	101
////	001  ��λ����������Ϊ�㣬��λ��������һΪһ��������㣺��Ӧ�Ķ�����λ��ͬΪ0����ͬΪ1��
////	return 0;
////}
////
////int mian()
////{
////	int a = 10;
////	a = 20;//=������ֵ  ==�Žе��ڣ��ж��Ƿ����
////	a = a + 10;
////	a += 10;//���ַ���������
////	a &= 2;
////	a = a & 2;
////	���ϸ�ֵ��:+= -= *= /= %= >>= <<= &= |=
////	return 0;
////}
////
////��Ŀ������
////˫Ŀ������
////��Ŀ������
////int main()
////{
////	int a=10,b=20;
////	a+b   '+'˫Ŀ������ ��Ϊ������������
////	c�����б�ʾ���   0-��   ��0-��    ���߼�������   
////}
////

////int main()
////{
////	int arr[10] = { 0 };//10������Ԫ�ص�����
////	10 * sizeof(int) = 40
////		printf("%d\n", sizeof(arr));//40B     
////		 ���������Ԫ�ظ��� 
////		����=�����ܴ�С/ÿ��Ԫ�صĴ�С
////	int sz = 0;
////	sz = sizeof(arr) / sizeof(arr[0]);
////	printf("%d\n", sz);//sz=10
////	int a = 10;
////	sizeof ������Ǳ�����������ռ�ռ�Ĵ�С����λ���ֽ�
////	printf("%d\n", sizeof(a));//4B
////	printf("%d\n", sizeof(int));//4B 
////	printf("%d\n", sizeof a);//������ʱ�����ʡ�����ţ���������ʱ������ʡ������
////	printf("%d\n", sizeof int);
////	printf("%d", sizeof(arr));//�������������С����λ���ֽ�
////}
////
////
////���¶�ʮһ��
////     strlen     ����\0�Ż�ֹͣ
////int a = 30   //a��ȫ�ֱ���
////int main()
////{
////	int a = 0;//4���ֽڣ�32bitλ   a�ֲ�����
////	int b = ~a;//    ��~������2���ƣ�λȡ��
////	a:  00000 000 000000 00 000 00000 00000 000
////	~a: 11111111 11111111 11111111 11111111
////	ԭ�롢���롢����
////	�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
////	printf("%d\n", b);//��ӡ�����������ԭ��
////	return 0;
////}
////
////int main()
////{
////	int a = 10;
////	int b = a++;//����++��--����ʹ���ټӼӻ����   a=11 ,b=10
////	int c = ++a;// ǰ��++��--���ȼӼӻ������ʹ��  a=11  b=11
////	printf("a=%d b=%d\n", a, b);
////	return 0;
////}
////
////int main()
////{
////	int a = 3.14;//����������ֵ����ִ�������Ҫ��ǿ������ת����
////	int a = (int)3.14;//3.14ԭ����double��������ǿ������ת��ת����int��
////
////	return 0;
////}
////
////��ϵ������
////   >   <  >=   <= !=�������ڣ�  ==�����ڣ�
////
////�߼�������
////   &&�߼���    ||�߼���     0��ʾ��   ��0��ʾ��   ����
////int a = 3, b = 5, c;//�߼��� �м�Ϊ��    �߼���  ����Ϊ��
////c = a && b;
////printf("%d", c);//����1   
////
////��������������Ŀ������      exp1 ? exp2 : exp3     exp�Ǳ��ʽ
////int main()//�ж��������Ĵ�С
////{
////	int a = 10, b = 20;
////	int max = 0;
////	max = (a > b ? a : b);//���a>bΪ��  ��ִ��a,����ִ��b
////	return 0;
////}
////
////���ű��ʽ    exp1,exp2,x=exo3,.....expN
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
////	arr[4];//[]���±����ò�����
////	int a = 10, b = 20;
////	int sum = Add(a, b);//����---�������ò�����
////	return 0;
////}
////
////int main()
////{
////	register int a = 10;//����a�Ժ�ҪƵ��ʹ�����Էŵ��Ĵ���������Խ�Լʱ��     �����a����ɼĴ�������
////	signed unsigned  //signed�з�����   unsigned  �޷�����      
////		struct  union  //struct �ṹ��ؼ���   union��������߹�����
////		typedef //���Ͷ���������ض���
////		typedef unsigned int u_int;//��unsigned int����������ֽ���u_int
////}
////
////void test()
////{
////	static int a = 1;//a��һ����̬�ľֲ�����
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
////static ���ξֲ�����  �ֲ��������������ڱ䳤
////	static ����ȫ�ֱ���   �ı��˱�����������  �þ�̬�ľֲ�����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����ԭ�ļ���û��ʹ����
//// extern --�����ⲿ���ŵ�   
////
////#define �����ʶ������   ���Զ����  ������ 
////
////int Max(int x, int y)
////{
////	int z = x > y ? x : y;
////	return z;
////}//������ʵ��
////
////��Ķ���
////#define Max(x,y) (x>y?x:y)
////
////
////%p �Ǵ�ӡ��ַ��
////int main()
////{
////	int a = 10;
////	int* p = &a;
////	printf("%p", &a);
////	printf("%p", p);
//////	*p = 10   //    *     �����ò�����  ������ŵ�ַ��-ָ�����
////		return 0;
////}
////int main()
////{
////	char ch = 'w';
////	char* pc = &ch;
////
////	return 0;
////}//ָ���С��32λ����4���ֽڣ���64λ����8���ֽ�
////
////
////int main()
////{
////	int a = 10;//������4���ֽڵĿռ�
////	printf("%p\n", &a);
////	int* p = &a;//p��һ������---ָ�����
////	printf("%p\n",p);
////	*p = 20;//*--�����ò�����/�����ʲ�����
////	printf("%p\n", a); 20
////	return 0;
////}
////
////
////���Ӷ���---- - �ṹ��------�����Լ����������һ������
////
////
////����һ���ṹ������ 
////struct Book
////{
////	char name[20];//C���Գ������ 
////	short price;//55 
////};
////
////int main()
////{
////	���ýṹ������-����һ�������͵Ľṹ����� 
////	struct Book b1 = { "C���Գ������"��55 };
////	struct Book* pb = &b1;//ָ������Ķ���
////	�������İ취     ��������ֱ�Ӹģ����鲻��
////	strcpy(b1.name, "C++");//strcpy---string copy --�ַ�������-�⺯��--ͷ�ļ�string.h
////	 ����pb��ӡ�������ͼ۸�
////	printf("%s\n",(*pb).name);
////	printf("%d\n",(*pb).price);
////	printf("%s\n", pb->name);//�������������һ�� 
////   .������ �ṹ�����.��Ա
////->  ���ڽṹ��ָ��.��Ա 
////	printf("������%s\n", b1.name);//��ӡ������� 
////	printf("�۸�%d\n", b1.price);//��ӡ��ļ۸�
////	b1.price = 15;//�ı���ļ۸�
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
////	struct Book b1 = { "C���Գ������",52 };
////	struct Book* p1 = &b1;
////	strcpy(p1->name, "C++");
////	printf("������%s\n", p1->name);
////	return 0;
////}
////
////
////
////C������һ�Žṹ���ĳ����������
////1.˳��ṹ
////2.ѡ��ṹ
////3.ѭ���ṹ
////
////��֧���      if    switch
////       ;        //����䣬��һ�������
////if(���ʽ)
////    ���1;         //������ʽΪ��ִ�и����
////
////if(���ʽ)
////    ���1;
////else
////    ���2;        //������ʽΪ��ִ�����1,����ִ�����2
////
////���֧
////if(���ʽ1��
////  ���1;
////else if(���ʽ2��
////  ���2;
////else 
////  ���3;
////
////#include <stdio.h>
////int main()
////{
////    int age = 10;
////    scanf("%d", &age);
////    if (age < 18) {
////        printf("δ����\n");
////        printf("����̸����\n");
////    }        //{   }-------��Դ����Ž��������
////    else if(age>=18 && age<28){
////        printf("����\n");
////    }
////    else if (age >= 28 && age < 50) {
////        printf("׳��\n");
////    }
////    else if (age >= 50 && age < 90) {
////        printf("����\n");
////    }
////    else {
////        printf("�ϲ���\n");
////    }
////    return 0;
////}
////else �������������δ����ƥ���if����ƥ��
////
////
////if (condition == 1) {
////    return x;//���condition������ֱ�ӷ���x��û��yʲô����
////}
////return y;//���condition��������x�����򷵻�y     �ô���ɶ��Բ��ò�Ҫд��������Ӧ��д�����У�
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
////if (num = 5)//= ��ֵ   ==�жϵ���
////{
////    printf("�Ǻ�\n");
////}//���ӡ���Ǻ�,���ڸ�ֵ���жϵ��ڻ���������Ժ�һ��д��
////
////if (5 == num) {
////    printf("�Ǻ�\n");
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
////        printf("%d��ż��\n",num);
////    }
////    else 
////    {
////        printf("%d������\n", num);
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
////            printf("%d������\n", num);
////        }
////    }
////    return 0;
////}
////
////switch  ���֧���
////switch(  ����  ���ʽ)       case(   ����   ����   ���ʽ)
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
////        printf("����һ\n"); 
////        break;
////    case 2:
////        printf("���ڶ�\n"); 
////        break;
////    case 3:
////        printf("������\n");
////        break;
////    case 4:
////        printf("������\n");
////        break;
////    case 5:
////        printf("������\n");
////        break;
////    case 6:
////        printf("������\n");
////        break;
////    case 7:
////        printf("������\n"); 
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
////        printf("������\n");
////        break;
////    case 6:
////    case 7:
////        printf("��Ϣ��\n");
////        break;//��ֹ����ֱ������
////    default:
////        printf("�������");
////        break;//     Ĭ��
////    }//switch ����Ƕ��ʹ��
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
////ѭ�����    while for do_while
////    while�﷨�ṹ
////    while (���ʽ��    ���ʽΪ���ִ��ѭ�����
////          ѭ����䣺
////#include <stdio.h>
////int main()
////{
////    int i = 1;
////    while (i <= 10)
////    {
////        i++;
////        if (i == 5)
////        {
////            continue;//ֱ����������ѭ��
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
////    EOF---end of file�ļ�������־ --->-1
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
//    printf("���������룺");
//    scanf("%s", password);//�������벢�Ҵ����password������
//////    ����������ʣ��һ��\n,��getchar���������ͺ���
//    
//   
//    while (ch = getchar() != '\n')
//    {
//        ;
//    }
//      printf("��ȷ��( Y / N ):");
//        ret = getchar();
//        if (ret == 'Y')
//        {
//            printf("ȷ�ϳɹ�\n");
//        }
//        else if (ret == 'N')
//        {
//            printf("����ȷ��\n");
//        }
//        else
//        {
//            printf("�����������������\n");
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


////for ѭ��     ����forѭ�����Ʊ�������ǰ�պ󿪵���ʽ
////forѭ���ĳ�ʼ�����������ж϶�����ʡ�Ե���forѭ����Ҫ���ʡ�Ի�����벻���ĺ��
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
//    }//ֻ���ӡ10��
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
////            sum *= i;//�������ʼ��sum�ͻ���ִ���
////        }//�ڲ�ѭ������ǽ׳�
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
////}//������������Ż���ʡʱ�䣬����1��+2��+......+n��
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

////#include <stdio.h>//дһ�����룬�����飨�������飩���ҵ�7       �������˳����Ҹ��Ӷ�ΪO��n��---n---Ҫ���ҵ�����
////int main()
////{
////    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////    int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
////    int left = 0;//���±�
////    int right = sz - 1;//���±�
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
////            printf("�ҵ���,�±��ǣ�%d\n", mid);
////            break;
////        }
////    }
////    if (left > right)
////    {
////        printf("�Ҳ�����\n");
////    }
////    return 0;
////}//�۰루���֣������㷨  ���Ӷ�Ϊlog ��2Ϊ�׵�n
////

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>//sleep����ͷ�ļ�
//#include <stdlib.h>//system����ͷ�ļ�
//int main()
//{
//    char arr1[] = "welcome to bit!!!!!!";
//    char arr2[] = "####################";
//    int left = 0;
//    int right=sizeof(arr1)/sizeof(arr1[0])-2;  //��Ϊ�ַ�����β��'\0'���Լ�2
//    //int right = strlen(arr1) - 1;//���ַ���������  Ҳ��'\0'
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(200);//��Ϣһ�� 1000ms
//       system("cls");//ִ��ϵͳ�����һ������ cls----�����Ļ
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
////        printf("���������룺");
////        scanf("%s", password);
////        if (strcmp(password, "123456")==0)//== ���ܱȽ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯������--strcmp
////        {
////            printf("��½�ɹ�\n");
////            break;
////        }
////        else
////        {
////            printf("�������\n");
////        }
////    }
////    if (i == 3)
////    {
////        printf("��������������˳�����\n");
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

////���������Ӵ�С���
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

////��ӡ3�ı�������ӡ1-100֮������3�ı���������
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
//////���������������������������Լ��
//////շת�����
//#include <stdio.h>
//int main()
//{
//	int m = 24, n = 18, r = 0;
//	scanf("%d %d", &m, &n);
//	while (m % n !=0 )//�ж�m%n�Ƿ����0����Ϊ��������������ѭ��     while�еı��ʽֻҪ������0��һֱִ��
//	{               //Ҳ����˵while�еı��ʽֻҪ��Ϊ���һֱִ�У�0��ʾ�٣���0��ʾ�棬�������������ִ��
//		r = m % n;
//		m = n, n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

////�ж��Ƿ�Ϊ����  1.�ܱ�4�������Ҳ��ܱ�100����������  2.�ܱ�400����������
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
////	printf("\n����һ����%d��",i-1);
////	return 0;
////}
////
////��ӡ100-200֮�������
////�Գ���
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
////�Ż�
////#include <stdio.h>
////#include <math.h>
//////i=a*b  a��b��������һ������С�ڵ��ڸ���i
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

///���1/1+1/2+������������+1/100
////#include <stdio.h>
////int main()
////{
////	int i;
////	double sum = 0,p;
////	for (i = 1; i <= 100; i++)
////	{
////		p = 1.0 / i;//ҪС���������С����
////		sum += p;
////	}
////	printf("%lf", sum);
////	return 0;
////}
////
////
////
////��ʮ���������ֵ
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

////��������Ϸ
////1.���Ի��������һ�������
////2.������
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
////TDD-��������������
////RAND_MAX--rand�����ܷ�������������ֵ��
////void game()
////{
////	int random_num = rand() % 100 + 1;
////	int input = 0;
////	while (1)
////	{
////		printf("������µ�����>:");
////		scanf("%d", &input);
////		if (input > random_num)
////		{
////			printf("�´���\n");
////		}
////		else if (input < random_num)
////		{
////			printf("��С��\n");
////		}
////		else
////		{
////			printf("��ϲ�㣬�¶���\n");
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
////		printf("��ѡ��>:");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			game();
////			break;
////		case 0:
////			break;
////		default:
////			printf("ѡ�����,����������!\n");
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
//    printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//    scanf("%s", input);
//    if (strcmp(input, "������"))
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
////����
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char arr1[] = "bit";
////	char arr2[20] = "#########";
////	strcpy(arr2, arr1);//char *strcpy(char *destination ,char*source);    ����ʾ��ַ
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
////���������:
////ret_type fun_name(paral,*)
////{
////	
////	starement;//�����
////} 
////ret_type ��������
////fun_name ������
////paral    ��������
////
////��������
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
////	������ʹ��
////	int MAX=max(a, b);
////	printf("%d\n", MAX);
////	return 0;
////}
////
////#include <stdio.h>
////swap(int* p1, int* p2)   //��ʽ��������β�
////{
////	int tmp;
////	tmp = *p1, * p1 = *p2, * p2 = tmp;//����������Ӧ����ָ����
////}
////
////int main()
////{
////	int a = 20, b = 10;
////swap1(a, b);//��ʵ�δ����β�ʱ���β���ʵ��ʵ�ε�һ����ʱ���������βε��޸��ǲ���ı�ʵ�ε�
////	swap(&a, &b);//swap�ǰѵ�ַ����ȥ�����Ի�ı�ʵ��
////	printf("a=%d b=%d", a, b);//ʵ�ο����ǳ��������������ʽ��������
////	return 0;
////}
//
////��������
////
////��ֵ���ã��������βκ�ʵ�ηֱ�λ�ڲ�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
////��ַ���ã���ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
////���ִ��η�ʽ�����ú����ͺ�����ߵı����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ�
////�������ⲿ�ı���
//
////���ֻ���ȡֵ���ô�ֵ���ã����Ҫ�ı�ʵ�ξ��ô�ַ����
//
////#include <stdio.h>
////����������1�����Ƿ���0
////int is_prime(int n)
////{
////	int j;
////	for (j = 2; j < n; j++)
////	{
////		if (n % j == 0)
////		{
////			return 0;//����return������ֱ�ӽ���
////		}
////		else
////		{
////			return 1;//���д�������Ͳ����ˣ������return 1д������
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
////		if (is_prime(i) == 1)  //�ж�i�Ƿ�Ϊ����
////		{
////			printf("%d ", i);
////		}
////	}
////	return 0;
////}
//
////���ֲ��ҷ�������д��
////#include <stdio.h>
////int binary_search(int arr[], int n,int sz)//�����������arr��һ��ָ��
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
////	���ֲ���
////	��һ�����������в��Ҿ����ĳ����
////	����Ҵ��˷����������С�꣬�Ҳ����ķ���-1
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int k;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	scanf("%d", &k);
////	int ret = binary_search(arr, k,sz);//��ߵ�����arrֻ������Ԫ��arr[0]�ĵ�ַ,���һ��sz�Ϳ��Խ��
////	if (ret == -1)
////	{
////		printf("�Ҳ���ָ��������\n");
////	}
////	else
////	{
////		printf("�ҵ��ˣ��±���%d\n", ret);
////	}
////	return 0;
////}
////
////����Ƕ�׵���
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
////��ʽ����
////#include <stdio.h>
////int main()
////{
////	int len = 0;
////	len = strlen("abc");
////	printf("%d\n", len);
////
////	��ʽ����
////	printf("%d\n", strlen("abc"));
////	return 0;
////}
////
////#include <stdio.h>
////int main()
////{
////	printf("%d", printf("%d", printf("%d", 43)));//printf�����ķ���ֵ�Ǵ�ӡ�ַ��ĸ��������Խ����4321
////	return 0;
////}
////
////#include <stdio.h>
////#include "add.h"
////��������
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
////�����������Դ�ļ�����һ����������---������.c ��֮������ͷ�ļ����ִ���һ���ļ�--������.h   �Ժ�������������֮�����Ҫ����
////��ֱ������#include "ͷ�ļ����ƼӺ�׺��"���ɵ��ã���#include "add.h"
////
////�����Ķ���
////int ADD(int x, int y)//�������ĺ�����������������Ҫ�����������������������ǰ��������庯���Ƚ���������ʹ��
////{
////	int z = x + y;
////	return z;
////}
////
////�����ݹ�   �����Լ������Լ��Žеݹ�
////#include <stdio.h>
////int main()
////{
////	printf("hehe\n");
////	main();
////	return 0;
////}
////�����ݹ��stack overflowջ���
////
////
////
////�ֲ�����
////�����β�                   ջ��
////
////��̬���ٵ��ڴ�
////malloc
////calloc                     ����
////
////ȫ�ֱ���
////static���εı���           ��̬��
////
////#include <stdio.h>
////void print(int n)
////{
////	if (n > 9)
////	{
////		print(n / 10);
////	}
////	printf("%d ", n % 10);//�ݹ���дʱ��������������ÿ�εݹ��Խ��Խ�ӽ��������
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
////	return count;*/   //����������ʱ���� ����һ�ַ���
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
////	/*int length = my_strlen(arr);*///arr�����飬���鴫�δ���ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
////	printf("%d\n", length);
////	return 0;
////}
//
//
//����
//#include <stdio.h>
////ѭ��
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
////����Ƕ��
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
////������n��쳲�������
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
//}//�ú���Ч��̫��
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

//��ŵ������
//#include <stdio.h>
//int main()
//{
//
//	return 0;
//}
//������̨������
//#include <stdio.h>
//int main()
//{
//
//	return 0;
//}
//
////����  һά����
//#include <stdio.h>
//int main()
//{
//	//����һ�����飬��������10��
//	int arr[10] = {1,2,3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab"; //arr3[3]='\0'
//	char arr4[] = "abcdef";//�������ַ�����β����'\0
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof ���� arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ��-char 7*1=7
//
//	printf("%d\n", strlen(arr4));//6
//	//strlen  ���ַ����ĳ��� ���� '\0'��ֹͣ�ˣ�����'\0'
//	//'\0'֮ǰ���ַ�����
//
//	int n = 5;
//	char ch[n];//����д��
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ����Ϊû������'\0'
//
//	char arr[] = "abcdef";
//	printf("%c\n", arr[3]);//%c��ӡ�����ַ���%s��ӡ�ַ���
//	return 0;
//}
//
////1.strlen �� sizeofû��ʲô��ϵ
////2.strlen �����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ��ͷ�ļ�
////3.sizeof ������������飬���͵Ĵ�С-��λ���ֽ�-������
//
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//һά�������ڴ�����������ŵ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//
////��ά����
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = {{ 1,2,3 } {4, 5}};//
//	char ch[5][6];
//	int arr[][4] = { {2,3},{4,5} };//��ά������в�����ʡ�ԣ��п���ʡ��
//	return 0;
//}
//
//��ӡ��ά����
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
////��ӡ��ά����ĵ�ַ
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { { 1,2,3 } ,{4, 5} };//��ά�������ڴ�����������ŵ�
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
//}//���԰ɶ�ά���鿴��n��һά���飬n�����еĸ���
//
////������Ϊ��������
////ð������
////���һ��ð������ĺ�����һ�����������������
//#include <stdio.h>
//
//void bubble_sort(int arr[],int length)
//{
//	/*ȷ��ð�����������*/
//	int i = 0,j;
//	for (i = 0; i <length-1;i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ����������
//		/*ÿһ��ð������*/
//		for (j = 0; j <length - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;//breakֻ������ѭ����switch�У����Ǳ����if����forѭ����������ߵ�break����ֹ����forѭ����
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*��arr����������
//	arr������,��arr���д���,������������Ԫ�صĵ�ַ*/
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
////��������ʲô
////������������Ԫ�صĵ�ַ
////��������������Ԫ�صĵ�ַ�����������⣩
//
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//
//	printf("%p\n", arr);//���������һ��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//��������ĵ�һ��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//������������ĵ�ַ��ֻ�Ǵӵ�һ��Ԫ�صĵ�ַ��ʼ
//	printf("%p\n", &arr+1);
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////sizeof(������) -��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
//	////&��ȡ��ַ���������������������������飬&��������ȡ��������������ĵ�ַ
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);//1
//	return 0;
//}
//

//   & //��λ��
//   | //��λ��
//   ^ //��λ���
//   ע�����ǵĲ�����������������
//#include <stdio.h>
//int main()
//{
//	//  &  ���밴�ն�����λ
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

////��������ʱ����ʵ���������ֵĽ���   ����������
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	////�Ӽ���
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after is:%d %d", a, b);
//	return 0;
//}

//��һ�������洢���ڴ��еĶ������е�1�ĸ���
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	 //ͳ��num�Ĳ������м���1
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
//}//�����㷨��������

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//ͳ��num�Ĳ������м���1
//	//32bit
//	//num & 1==1  ��λ��
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

////��ֵ������
//#include <stdio.h>
//int main()
//{
//	if (a)
//	{
//		//aΪ��ִ��if
//	}
//	if (!a)
//	{
//		//aΪ��ִ��if
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
//	printf("%d\n", a);//11   ~��λȡ��
//	return 0;
//}

//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)  4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)    4   ָ��Ҫô��4�ֽ�Ҫô��8�ֽ�
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
//	//&& �߼���
//	//|| �߼���
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
//  //  i = a++ && ++b && d++;//�߼����· ֻҪ�������һ����ʣ�µĶ�������
//    i = a++||++b||d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);// && 1  2  3  4
//    // || 2  2  3  4 
//    return 0;
//}
////��������Ľ����ʲô�� 

/*���ű��ʽ
���ű��ʽ�������ö��Ÿ����Ķ�����ʽ�� ���ű��ʽ��������������ִ�С��������ʽ�Ľ������
��һ�����ʽ�Ľ����

*/
//if (a > 5)
//b = 3;
//else
//b = -3;
////ת�����������ʽ����ʲô����
////exp1, exp2, exp3, ��expN
//
//
////����1
//int a = 1;
//int b = 2;
//int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ
////c�Ƕ��٣�
//
//
////����2
//if (a = b + 1, c = a / 2, d > 0)
//
//
////����3
//a = get_val();
//count_val(a);
//while (a > 0)
//{
//    //ҵ����
//    a = get_val();
//    count_val(a);
//}
//
//
////���ʹ�ö��ű��ʽ����д��
//while (a = get_val(), count_val(a), a > 0)
//{
//    //ҵ����
//}



////�±����á��������úͽṹ��Ա
////1.[] �±����ò�����
////��������һ�������� + һ������ֵ
//
//int arr[10];//��������
//arr[9] = 10;//ʵ���±����ò�������
//
////[]��������������arr��9



////2.() �������ò����� ����һ�����߶������������һ���������Ǻ�������ʣ��Ĳ��������Ǵ��ݸ������Ĳ�����
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
//	test1();            //ʵ�ã�����Ϊ�������ò�������
//	test2("hello bit.");//ʵ�ã�����Ϊ�������ò�������
//	return 0;
//}
//
//#include <stdio.h>
////����һ���ṹ������--struct Stu   �������struct Stu�൱��ͼֽ
//struct Stu//��ʾ����
//{
//	char name[20];
//	int age;
//	char id[20];
//};//����Stu��һЩ����
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu ������ʹ�����һ��ѧ������s1,����ʼ��
//	struct Stu s1 = {"����",20,"2019010305"};//���������൱��ͼֽ�Ϳ���ֱ�ӸǷ�����
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	//��������д  printf("%s\n", ps->name);
//	// �ṹ��ָ�� + " -> " + ��Ա��
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//�ṹ�����.��Ա��
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
//	//a��b������
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000000
//	char c = a + b;
//	//10000000-c
//	//11111111111111111111111100000010-����
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

////����ת��
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int


//ָ��Pointer

//#include <stdio.h>
//int main()
//{
//	int a = 10;//���ڴ��п���һ��ռ�
//	int* p = &a;//�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&��������
//	  //��a�ĵ�ַ�����p�����У�p����һ��ָ֮�������
//	return 0;
//}
//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽڡ�
//�ܽ᣺ָ����Ǳ�����������ŵ�ַ�ı������������ָ���е�ֵ�������ɵ�ַ����)

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//	return 0;//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽڡ�
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

//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* p; *p�ܹ�����4���ֽ�
//char* p; *p�ܹ�����1���ֽ�
//double* p;*p�ܹ�����8���ֽ�

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
//ָ�����;�����ָ����һ���߶�Զ��������ָ��Ĳ���(�ֽ�)
//int* p;p+1---->4
//char* p;p+1--->1
//double* p;p+1---->8


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//����������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf(" %d ", arr[i]);
//	}
//	return 0;
//}

//Ұָ��: Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//Ұָ�����
//   1. ָ��δ��ʼ��    2. ָ��Խ�����     3.ָ��ָ��Ŀռ��ͷ�

//#include <stdio.h>
//int main()
//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ�����ָ���Ǹ����ֵ����Ұָ��
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
//	}//ָ��Խ�����
//	return 0;
//}

//#include <stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;//�ֲ�����a����test���������ռ䣬�뿪�������ٿռ�
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}//ָ��ָ��Ŀռ��ͷ�
//int* p=NULL;��ָ���ʼ������ָ��

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
//*p++ = 0; �ȼ���* p = 0; p++;




