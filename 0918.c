#include <stdio.h>
int main(void)
{
	float a=1.0,b=0,sum=0.0;
	
	while(1){
		b = a*a;
		sum += b;
		printf("x가 %f일때 넓이의 차는 %f - %f = %f입니다.\n",a,sum,sum-b,b);
		
		a = a/2;
		
		if(b<=0.000001)
	break;
}

	printf("계산한 넓이 합은 %f 입니다.\n",sum-b);
}