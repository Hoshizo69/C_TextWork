#include<stdio.h>

typedef struct{
	float realpart;
	float imagpart;
}complex;

void mul(complex z1,complex z2,complex &z){
	z.imagpart = z1.imagpart * z2.realpart + z2.imagpart *z1.realpart;
	z.realpart = z1.imagpart * z1.realpart + z2.imagpart *z2.realpart;
	printf("»ýÊÇ%f + %f i",z.realpart,z.imagpart);
} 
int main()
{
	complex z1,z2,z;
//	complex* z;
	scanf("%f %f %f %f",&z1.realpart,&z1.imagpart,&z2.realpart,&z2.realpart);
	mul(z1,z2,&z);
	return 0;
}


