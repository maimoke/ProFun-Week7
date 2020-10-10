#include<stdio.h>




int main()
{
	int Hour=0, Minute=0,Sum=-30;
	scanf_s("%d %d", &Hour, &Minute);
	if (Hour < 0 || Minute < 0) { printf("It can't be negative"); }
	else if (Hour < 1||(Hour==1&&Minute==0)) { printf("No charge"); }
	else 
	{ 
		Sum = Sum + (Hour*30);
		if (Minute > 0)
			Sum = Sum + 30;
		printf("%d", Sum);
	}
	return 0;
}