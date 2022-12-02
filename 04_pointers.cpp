//pointer
#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	int *p;
	char *p2;
	float *p3;
	double *p4;
	struct Rectangle *p5;

	cout<<sizeof(p)<<endl; //8 byte for all
	cout<<sizeof(p2)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(p4)<<endl;
	cout<<sizeof(p5)<<endl;
	return 0;
}
