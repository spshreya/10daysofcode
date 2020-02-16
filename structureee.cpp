#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};

void printStudentInfo(struct Student s);

int main(){
    struct Student s[3];
    int i;
    for(i=0;i<3;i++){
   
   cout<<"Enter Student Name: ";
   cin>>s[i].stuName;
   cout<<"Enter Student Roll No: ";
   cin>>s[i].stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s[i].stuAge;
   printStudentInfo(s[i]);}
   return 0;
}

void printStudentInfo(struct Student s){
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge<<endl;
}
