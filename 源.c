#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char arr[] = "ddsdffffd";
	memset(arr, '$', 5);
	printf("%s\n", arr);
	return 0;
}
//int main()
//{
//	char arr1[2] = "ss";
//	char arr2[20] = {2 };
//	//strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", sizeof(arr1));
//	return 0;
//}
//int Add(int a,int b)
//{
//	int z = a + b;
//	return z;
//}
//int main()
//{
//	int s = 10;
//	int b = 20;
//	int sum = Add(s, b);
//	printf("%d", sum);
//}
//int main()
//{
//	char input[20] = { 0 };
//A:	system("shutdown -s -t 900");
//	printf("即将爆炸，输入我是傻逼取消=》：\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是傻逼") == 0)
//		system("shutdown -a");
//	else
//		goto A;
//}
//int main()
//{
//	printf("ddd");
//	goto dddd;
//	printf("dddddd");
//dddd:printf("ece");
//	return 0;
//}
//int menu()
//{
//	printf("#########caishuzi########");
//	printf("qingxuanze");
//	printf("1=>yes     0=>no");
//}
//void game()
//{
//	int ret = 0;
//	ret = rand()%100+1;
//	printf("shuru");
//	while (1)
//	{
//		int input2;
//		scanf("%d", &input2);
//		if (input2 < ret)
//			printf("xiaole\n");
//		else if (input2 > ret)
//			printf("dale\n");
//		else
//		{
//			printf("duile\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input;
//	do
//	{
//		menu();
//		printf("请输入》：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("chucuo");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main
// ()
//{
//	int i = 0;
//	double sum = 0.0;
//	int k = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += k*1.0 / i;
//		k = -k;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	char passward[20] = { 0 };
//	int i = 0;
//	printf("输入密码");
//	
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", &passward);
//		if (strcmp(passward,"123456")==0)
//		{
//
//			printf("登陆成功\n");
//			break;
//		}
//		else
//			printf("登陆错误\n");
//	}
// 
//	if (i == 3)
//		printf("锁定\n");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "                                     ";
//	char arr2[] = "#################   #################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	scanf("%d", &k);
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = se - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid;
//		else if (arr[mid] == k)
//		{
//			printf("ok:%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//		printf("no");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i;
//	scanf("%d", &k);
//	int se = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < se; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("ok:%d\n", i);
//			break;
//		}
//	}
//	if (i == se)
//		printf("no");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = arr[4];
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int b = 1;
//	int sum = 0;
// 
//	int n = 1;
//	 
//	for (n;n <= 4;n++)
//	{
//		//n = arr[0];
//		for (i = 1; i <= n; i++)
//		{
//			b *= i;
//		}
//		sum = sum + b;
//		b = 1;
//	}
//	printf("n!=%d\n", sum);
//	return;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 2; i < 7; i =+2)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return;
//}
//int main()
//{
//	int ter;
//	int ch;
//	char arr[20] = { 0 };
//	printf("输入密码");
//	scanf("%s", arr);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("y/n");
//	ter = getchar();
//	if (ter == 'y')
//		printf("yes");
//	else
//	printf("no");
//	return 0;
//	
//}
//int main(){
//    enum week { Mon = 1, Tues = 2, Wed = 3, Thurs = 4, Fri = 5, Sat = 6, Sun = 7 };
//    int day;
//    scanf("%d", &day);
//    switch(day){
//        case Mon: puts("Monday"); break;
//        case Tues: puts("Tuesday"); break;
//        case Wed: puts("Wednesday"); break;
//        case Thurs: puts("Thursday"); break;
//        case Fri: puts("Friday"); break;
//        case Sat: puts("Saturday"); break;
//        case Sun: puts("Sunday"); break;
//        default: puts("Error!");
//    }
//    return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("ddd\n");
//		break;
//	case 6:
//	case 7:
//		printf("dd\n");
//		break;
//	default:
//		printf("shurucuw\n");
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("xqy\n");
//		break;
//	case 2:
//		printf("xq2\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while(i <= 100)
//	{
//		if (i%2== !0)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//struct bk
//{
//	char name[20];
//	int price;
//};
//int main()
//{
//	struct bk b1 = { "lll",30 };
//	struct bk* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%dyuan\n", (*pb).price);
//	strcpy(b1.name, "ccc");
//	printf("%s\n", b1.name);
//}
//#define max(x,y) (x>y?x:y)
//int main()
//{
//	char a = 'f';
//	char* pcc = &a;
//	*pcc = 'x';
//	printf("%p\n", &a);
//	printf("%p\n", pcc);
//	printf("%d\n",sizeof(pcc));
//	return 0;
//}
//extern int dd(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = dd(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	extern int k;
//	printf("k=%d", k);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a < b ? a : b);
//	printf("%d", max);
//	return 0;
//}
// && ||
//int main()
//{
//	int a = 10;
//	// a -= 5;
//	//int f = (int)3.14;
//	int b = a++;//a=11,b=10后置++先赋值再加；
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//int kax(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b= 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = kax(a, b);
//	printf("%d\n", max);
//	return 0;
//}