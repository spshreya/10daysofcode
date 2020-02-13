#include<iostream>

using namespace std;

int main()
{
	//creating a string obj
	string str;
	
	cout<<"enter a string: "<<endl;
	//getline will get the input without defining the number of characters
	getline(cin,str);
	cout<<"the string you entered: "<<str<<endl;
        
	//push_back adds a character at the end of string
	str.push_back('$');

	cout<<"the string after pushback: "<<str<<endl;

	//pop_back removes the last character from the string
	str.pop_back();

	cout<<"the string after pop back: "<<str<<endl;


	return 0;
}

