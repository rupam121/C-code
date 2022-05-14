
#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40},i,pos=3;
	for(i=4;i>=pos;i-- ){
		arr[i+1]=arr[i];
		
	}
	
	int ele=99;
	arr[pos]=ele;
	for(i=0;i<=4;i++){
	printf("%d ",arr[i]);	
	}
	
	return 0;
}
