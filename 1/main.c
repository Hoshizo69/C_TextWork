#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,o;
	float n,m,temp;
	float a[7]={0.03,0.1,0.2,0.25,0.3,0.35,0.45};
	int b[2][6]={{36000,144000,300000,420000,660000,960000},{1080,11880,43080,73080,145080,250080}};
	scanf("%f",&n);
	m=0;
	for(i=0;i<6;i++)
	{
		temp=n-b[0][i];
		if(temp<=0)
		{
			m=b[1][i]+(n-b[0][i])*a[i];
			break;
		}
	}
	
	printf("%.2f",m);			
	return 0;
}
