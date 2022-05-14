#include<stdio.h>
int main(){
	
	int arr[5]={22,44,44,55,66},i=1,found=0;
	int key=44;
	while(arr[i]==key){
		found++;
		i++;
	}
	//how many time repeate a value in array find
	if(found>0)
	{
		printf("Key is Flound %d time",found);
	}
	else
	printf("Not found ");
	
	
	
	return 0;
}
