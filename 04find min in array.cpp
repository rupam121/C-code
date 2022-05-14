#include<stdio.h>
int main() {
	int a[4]= {103,20,30,11};
	int i,min=a[0];
	for(i=0; i<4; i++) {
		if(a[i]<min) {
			min=a[i];
		}

	}
	printf("Min is %d ",min);
	return 0;
}
