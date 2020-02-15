#include<iostream>
using namespace std;

class student{
	public:
		float marks;
		int age;
		char aim;
		student(float a, int b, char c);
};

student :: student(float a,int b,char c){
       marks=a;
	age=b;
 	aim=c;
}	


int main(){
	student obj1(49.2,12,'IAS');
	student obj2(45.0,13,'Doctor');
	cout<<"for student one: "<<endl;
	cout<<"marks="<<obj1.marks<<"	age="<<obj1.age<<"	aim="<<obj1.aim<<endl;
	cout<<"for student 2: "<<endl;
	cout<<"marks="<<obj2.marks<<"    age="<<obj2.age<<"      aim="<<obj2.aim<<endl;







	return 0;
}
