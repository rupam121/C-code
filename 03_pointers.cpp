// Pointers indirectly access dataf
#include<iostream> // library 
#include<stdio.h>  // library 
#include<stdlib.h>
using namespace std;

int main() {
//	int a=10;
//	int *p; //pointer variable
//	p=&a;
//	cout<<a<<endl; //10
//	cout<<*p<<endl; //10

	int *p;
	p=(int*)malloc(5*sizeof(int)); // 5*4=20 c-language
	p=new int[5]; //cpp-language
//	cout<<&p;
	
	int a[4]={2,4,6,7};
	int *x;
	x=a; // initialization
	for(int i=0;i<4;i++){
		cout<<x[i]<<endl;
	}
//	delete [ ] p;  cpp language
//	free(a); c language
	return 0;
}

// acess heap memory
// acess resourse
// parameter passing


