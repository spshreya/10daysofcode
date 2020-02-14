#include<iostream>
using namespace std;

class class1{
	public:
		int mthd(int, int);


};

int class1::mthd(int a, int b){
	cout<<"scope resolution"<<a+b;

}

int main(){
	int a=10;
	int b=20;
	class1 obj1;
	obj1.mthd(a,b);
	return 0;
}

