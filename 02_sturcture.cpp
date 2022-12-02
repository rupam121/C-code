#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle {
	int length; // 4 byte
	int Height; //4 byte
	char x; //1 .. 4 byte
}  ; // in line struct variable
// struct Rectangle r1; // global variable
int main() {

	struct Rectangle r1= { 10,20}; // declaration of structure variable
//	cout << "hello world"<<endl;
//	printf("%lu",sizeof(r1));
//  printf("%d",sizeof(r1));

	cout<<r1.length<<endl;
	cout<<r1.Height<<endl;

	return 0;
}
