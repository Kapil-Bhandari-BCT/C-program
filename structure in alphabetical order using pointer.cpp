#include<stdio.h>
#include<string.h>
struct detail{
	char name[30];
    int roll;
};

void sort(struct detail *st){
	struct detail temp;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(strcmp((st+i)->name,(st+j)->name)>0)
			{
				temp=*(st+i);
				*(st+i)=*(st+j);
				*(st+j)=temp;
			}
			
		}
	}


	
}
int main()
{
	int i;
	struct detail d[3];
	for(i=0;i<3;i++)
	{
		printf("Enter name: ");
		scanf("%s",&d[i].name);
		printf("enter roll: ");
		scanf("%d",&d[i].roll);
	}
	

	sort(d);
	
	printf("In alphabetical order: \n");
	for(i=0;i<3;i++)
	{
		printf("%s\t %d\n",d[i].name,d[i].roll);
	}
	
}
