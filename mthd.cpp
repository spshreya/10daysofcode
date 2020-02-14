#include<iostream>
using namespace std;

class Class1{
	//by default private
	public:
		void mthd1(){
			cout<<"Method is a function that belongs to a class."<<endl;
		}
};

int main(){
	//object for the class
	Class1 obj1;
	//method used with a . with the object
	obj1.mthd1();
	return 0;
}
