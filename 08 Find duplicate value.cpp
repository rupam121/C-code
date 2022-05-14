#include<stdio.h>
#define size 10

int main() //main functon:)
{
	int arr[size]= {30,21,11,21,22,22};


	for(int i=0; i<size; i++) 
	{
		for(int j=i+1; j<size; j++) 
		{
			if(arr[i]==arr[j]) 
			{
				printf("%d\n",arr[j]);
			}
		}
	}
	return  0;
}
