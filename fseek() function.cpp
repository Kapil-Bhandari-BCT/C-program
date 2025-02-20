#include<stdio.h>
int main()
{
	FILE *f;
	int n;
	f=fopen("source.txt","w");
	printf("Position of file pointer: %d\n",ftell(f));
	fseek(f,10,SEEK_SET);
	printf("Position after seek: %d\n",ftell(f));
	fseek(f,-6,SEEK_CUR);
	printf("Position after seek: %d",ftell(f));
	return 0;
}
