//���ֱ����Ĵ�С������ռ���ֽڴ�С
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
////�����Ķ����ʹ��
//	short age ;
//	int num1,num2,sum;
//	scanf("%d %d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	
//
//		return 0;
//}

//�ַ�����ʹ��
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
//ת���ַ���ʹ��
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
//	printf("%d\n",strlen("abcdef"));//������Ϊ6
//	printf("%d\n",strlen("c:\code\test.c"));//������Ϊ12,��Ϊ���� \ �Ӻ�������ݱ���������һ���ַ�
//	printf("c:\code\test.c\n");
//	return 0;
// }

//���´���Ϊ�������
//#include <stdio.h>
//int main ()
//
//{
//	char a [3];
//	int yes = 1;
//	int no = 0;
//	printf ("���Ƿ�Ҫ�ú�ѧϰ����ѡ��yes or no��\n");
//	scanf ("%s",a);
//	if(a == 1)
//	{
//		printf ("�ҵ��ù���\n");
//	}
//	else
//	{
//		printf("��ҵ����ʧҵ\n");
//	}
//	return 0;
//}
//���ϴ���Ϊ�������

#include <stdio.h>
int main ()

{
	int a = 0;
	printf ("���Ƿ�Ҫ�ú�ѧϰ����ѡ���ǣ�1�����0��\n");
	scanf ("%d",&a);
	if(a == 1)
	{
		printf ("�ҵ��ù���\n");
	}
	else
	{
		printf("��ҵ����ʧҵ\n");
	}
	return 0;
}
