
#include<iostream>
using namespace std;

class myclass{
	public:
		int mynum;
		string mystring;
};


int main(){
	myclass x; //object of my class
	x.mynum=10;
	x.mystring="@im.rupam";
	
	cout<<x.mynum<<endl;
	cout<<x.mystring<<endl;
}
