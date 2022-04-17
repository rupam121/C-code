#include<stdio.h>
#include<stdlib.h>
#define size 5

void insertfirst(int arr[],int ele,int siz){

	for(int i=siz; siz>=0; i++) {
		arr[i+1]=arr[i];
	}
		arr[0]==ele;
    printf("Insert first succes !!");
}

int main() {
	int arr[size]= {10,20,30,40};
	int ele=20;
	insertfirst(arr,ele,size);
    for(int i=0;i<size;i++){
    	printf(" %d ",arr[i]);
	}
	return 0;
}
