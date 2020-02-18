#include <iostream>
#include <fstream>

using namespace std;
 int main(){
     ofstream file1("file1.txt"); //creating a file1
     
     file1<<"this is file 1";
     file1.close();
     
     string text1; //string used to output the text in the file1
     
     ifstream file2("file1.txt");
     
     while (getline (file2, text1)) {
    // Output the text from the file
    cout << text1;
  }
  
  file2.close();
  return 0;
 }
