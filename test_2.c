//各种变量的大小，即所占的字节大小
//#include<stdio.h>
//
//int main()
//{
//		/*printf("char = %d\n",sizeof(char));
//		printf("int = %d\n",sizeof(int));
//		printf("short = %d\n",sizeof(short));
//		printf("long = %d\n",sizeof(long));
//		printf("long long = %d\n",sizeof(long long));
//		printf("float = %d\n",sizeof(float));
//		printf("double = %d\n",sizeof(double));
//		printf("long double = %d\n",sizeof(long double));
//*/
////变量的定义和使用
//	short age ;
//	int num1,num2,sum;
//	scanf("%d %d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	
//
//		return 0;
//}

//字符串的使用
//#include <stdio.h>
//
//int main ()
//{
//	char zifu [] = "love";
//	char zifu1 [] = {'l','o','v','e'};
//	char zifu2 [] = {'l','o','v','e','\0'};
//	printf ("%s\n",zifu);
//	printf ("%s\n",zifu1);
//	printf("%s\n",zifu2);
//	
//	return 0;
//
//}
//转义字符的使用
//#include <stdio.h>
//
//int main ()
//{
//	printf("c:\code\test.c\n");
//	printf("c:\\code\\test.c\n");
//	return 0;
//}


//#include <stdio.h>
// int main ()
// {
//	printf("%d\n",strlen("abcdef"));//输出结果为6
//	printf("%d\n",strlen("c:\code\test.c"));//输出结果为12,因为两个 \ 加后面的内容被解析成了一个字符
//	printf("c:\code\test.c\n");
//	return 0;
// }

//以下代码为错误代码
//#include <stdio.h>
//int main ()
//
//{
//	char a [3];
//	int yes = 1;
//	int no = 0;
//	printf ("你是否要好好学习？请选择（yes or no）\n");
//	scanf ("%s",a);
//	if(a == 1)
//	{
//		printf ("找到好工作\n");
//	}
//	else
//	{
//		printf("毕业等与失业\n");
//	}
//	return 0;
//}
//以上代码为错误代码

#include <stdio.h>
int main ()

{
	int a = 0;
	printf ("你是否要好好学习？请选择是（1）或否（0）\n");
	scanf ("%d",&a);
	if(a == 1)
	{
		printf ("找到好工作\n");
	}
	else
	{
		printf("毕业等与失业\n");
	}
	return 0;
}
