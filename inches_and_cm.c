#include<stdio.h>
int main()
{
	double Input_inches;
	double Ratio_cm;
	double result;
	double ec;
	Ratio_cm = 2.54;
	ec = 114514.114514;
	printf("Ó¢´ç×ªÀåÃ×³ÌÐò\nÇëÊäÈëÓ¢´ç \n");
	scanf("%lf",&Input_inches);
	result = Input_inches * Ratio_cm;
	if (result >= ec)
		printf("===================================\n%f Ó¢´ç = %f ÀåÃ×\n===================================\n o(>_<)o¼ÆËã¼§¾õµÃÕâ¸öÊý¾ÝºÜ³ô³ô£¡",Input_inches,result);
	else
		printf("===================================\n%f Ó¢´ç = %f ÀåÃ×\n===================================\n",Input_inches,result);
	//printf("%f Ó¢´ç = %f ÀåÃ×",Input_inches,result);
	//printf("%f",Input_inches);
	getchar();
	getchar();
	return 0;
}