#include<stdio.h>
int main(){
	
	int arr[5]={20,30,40,33},i,pos=0;
	int ele=100;
	for(int i=4;i>=pos; i--){
		arr[i+1]=arr[i];
		
	}
	
	arr[pos]=ele;
	for(i=0;i<=4;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
