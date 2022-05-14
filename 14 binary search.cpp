//binary searcing

#include<stdio.h>

int main() { // main functio

	int a[10]= {10,20,30,40,50,60,70,80,90};
	int low=0,high=9,mid,key=60,found=0;

	while(low<=high) {
		mid=(low+high)/2;

		if(key==a[mid]) {
			found=1;
			break;
		} else if(key<a[mid]) {
			high=mid-1;
		} else if(key>a[mid]) {
			low=mid+1;
		}
	}

	if(found==1)
		printf("%d found sucessfull",key); 
	else
		printf("Not found.");

	return 0;
}
