#include<stdio.h>
int main()
{
	int a[7]={10,20,30,40};
	int i,ele=999;

	a[4]=ele;
//	printf("hi ");
	
		for(i=0;i<5; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
