#include <stdio.h>
int main(void)
{
	float a=1.0,b=0,sum=0.0;
	
	while(1){
		b = a*a;
		sum += b;
		printf("x�� %f�϶� ������ ���� %f - %f = %f�Դϴ�.\n",a,sum,sum-b,b);
		
		a = a/2;
		
		if(b<=0.000001)
	break;
}

	printf("����� ���� ���� %f �Դϴ�.\n",sum-b);
}