#include<stdio.h>
int main()
{
	double Input_inches;
	double Ratio_cm;
	double result;
	double ec;
	Ratio_cm = 2.54;
	ec = 114514.114514;
	printf("Ӣ��ת���׳���\n������Ӣ�� \n");
	scanf("%lf",&Input_inches);
	result = Input_inches * Ratio_cm;
	if (result >= ec)
		printf("===================================\n%f Ӣ�� = %f ����\n===================================\n o(>_<)o���㼧����������ݺܳ�����",Input_inches,result);
	else
		printf("===================================\n%f Ӣ�� = %f ����\n===================================\n",Input_inches,result);
	//printf("%f Ӣ�� = %f ����",Input_inches,result);
	//printf("%f",Input_inches);
	getchar();
	getchar();
	return 0;
}