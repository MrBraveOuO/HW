#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int ex01()
{
	printf("*********\t\t   ***   \t\t  *  \t\t    *    \n");
	printf("*       *\t\t *     * \t\t *** \t\t   * *   \n");
	printf("*       *\t\t*       *\t\t*****\t\t  *   *  \n");
	printf("*       *\t\t*       *\t\t  *  \t\t *     * \n");
	printf("*       *\t\t*       *\t\t  *  \t\t*       *\n");
	printf("*       *\t\t*       *\t\t  *  \t\t *     * \n");
	printf("*       *\t\t*       *\t\t  *  \t\t  *   *  \n");
	printf("*       *\t\t *     * \t\t  *  \t\t   * *   \n");
	printf("*********\t\t   ***   \t\t  *  \t\t    *    \n");
	return 0;
}
int ex02()
{
	int num1,num2,num3,max,min;
	printf("請輸入三個數取出最大值和最小值\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 > num2)
	{
		max = num1;
		min = num2;
	}
	else
	{
		max = num2;
		min = num1;
	}
	if (max < num3)
	{
		max = num3;
	}
	if (min > num3)
	{
		min = num3;
	}
	printf("最大值：%d\n", max);
	printf("最小值：%d\n", min);
	return 0;
}
int ex03()
{
	int num1;
	printf("請輸入一整數\n");
	scanf("%d", &num1);
	printf("\n");
	if (num1 % 2 == 1)
	{
		printf("輸入為奇數(odd)\n");
	}
	else if (num1 % 2 == 0) {
		printf("輸入為偶數(even)\n");
	}
	return 0;
}
int ex04()
{
	printf("  JJ     \n");
	printf(" J       \n");
	printf("J        \n");
	printf(" J       \n");
	printf("  JJJJJJJ\n");
	printf("\n");
	printf("AA  A    \n");
	printf("  A   A  \n");
	printf("  A     A\n");
	printf("  A   A  \n");
	printf("AA  A    \n");
	printf("\n");
	printf("    CC   \n");
	printf(" CC   CC \n");
	printf("C       C\n");
	printf("C       C\n");
	printf("C       C\n");
	printf("\n");
	printf("KKKKKKKKK\n");
	printf("    K    \n");
	printf("   K  K  \n");
	printf(" K     K \n");
	printf("K       K\n");
	printf("\n");
	printf("       YY\n");
	printf("    YY   \n");
	printf("YYY      \n");
	printf("    YY   \n");
	printf("       YY\n");
	
	return 0;
}
int ex05()
{
	int num1, num2;
	printf("請輸入兩個整數\n");
	scanf("%d%d", &num1,&num2);
	printf("\n");
	if (num1%num2==0)
	{
		printf("第一項是第二項之倍數\n");
	}
	else
	{
		printf("第一項不是第二項之倍數\n");
	}
	return 0;
}
int ex06()
{
	int star = 1;
	int white = 4;
	for (int k = 5; k > 0; k--)
	{
		for (int i = white; i > 0; i--) 
		{
			printf(" ");
		}
		for (int j = star; j > 0; j--)
		{
			printf("*");
		}
		star=star+2;
		white--;
		printf("\n");
	}
	return 0;
}
int ex07()
{	
	printf("number\t\tsqare\t\tcube\n");
	for (int i = 0; i <= 10; i++)
	{
		printf("%d\t\t%d\t\t%d\n", i, i * i, i * i *i);
	}
	printf("\n");
	return 0;
}
int ex08()
{
	float bmi,wt, ht;
	printf("請輸入體重(kg)\n");
	scanf("%f", &wt);
	printf("請輸入身高(m)\n");
	scanf("%f", &ht);
	printf("\n");
	bmi = wt / (ht*ht);
	printf("您的BMI為：%.1f\n",bmi);
	printf("\n");
	printf("BMI VALUES\n");
	printf("Uderweight:\tless than 18.5 \n");
	printf("Normal:\t\tbetween 18.5 and2 4.9 \n");
	printf("Overweight:\tbetween 25 and 29.9 \n");
	printf("Obese:\t\t30 or greater \n");
	return 0;
}
int ex09()
{	
	float kilo, gas_m, gas_kilo, parking_m, passing_m;
	printf("請輸入所述資訊:\n\n");
	printf("一整天的總里程數(km)\n");
	scanf("%f", &kilo);
	printf("汽油一公升多少錢(NT)\n");
	scanf("%f", &gas_m);
	printf("一公升汽油的行駛距離(km)\n");
	scanf("%f", &gas_kilo);
	printf("一天的停車費(NT)\n");
	scanf("%f", &parking_m);
	printf("一天的通行費(NT)\n");
	scanf("%f", &passing_m);
	printf("\n");
	printf("一天自用車花費:%.1f NT", kilo / gas_kilo * gas_m + parking_m + passing_m);
	return 0;
}