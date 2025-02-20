#include<stdio.h>
void function(int a,int b);
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d\t%d",&a,&b);
    function(a,b);

}
void function(int a,int b)
{
    int add,sub,div;
    add=a+b;
    printf("addition=%d\n",add);
    sub=a-b;
    printf("sub=%d\n",sub);
    div=a/b;
    printf("div=%d",div);

    
}
