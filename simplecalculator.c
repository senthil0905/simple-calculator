#include<stdio.h>
int main()
{
	int a,b,choise;
	printf("enter a number to perform a operation 1- ADDITION,2- SUBTRACTION,3-MULTIPLICATION,4-DIVISION : \n");
	printf("enter a choise\n");
	scanf("%d",&choise);
	if( choise>=1&&choise<=4)
	{
		printf("enter two number to perform your operation ");
		scanf("%d %d",&a,&b);
	}
	else
	{
		printf("sorry %d is not in the list please enter your number as shown in the list",choise);
	}
	switch (choise)
	{
		case 1:printf("%d + %d = %d\n",a,b,(a+b));
		break;
		case 2:printf("%d - %d = %d\n",a,b,(a-b));
		break;
		case 3:printf("%d * %d = %d\n",a,b,(a*b));
		break;
		case 4:if(b!=0)
		{
			
		printf("%d  %d = %d\n",a,b,(a/b));
		}
		else
		{
			printf("it can't be divide because the second integer is zero so the operation can't be perfromed\n");
		}
		break;
		default:printf("you have entered the wrong choise");
	}
}
