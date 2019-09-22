#include <iostream>
#include<stdlib.h>
#include <string.h>
#include<sstream>
using namespace std;

int main (int argc,char* argv[])

 {	/*
    string str = "geeksforgeeks a computer science"; 
    string str1 = "geeks"; 
  
    // Find first occurrence of "geeks" 
    size_t found = str.find(str1); 
    if (found != string::npos) 
        cout << "First occurrence is " << found << endl; 
*/
 	string a=argv[1];

	stringstream s1(a);
   	string b=argv[2];

	size_t i = a.find(b); 

    if (i != string::npos) //npos=-1 ->constant 

        cout <<(i+1) ; 

        else

        cout<<"0";
   return 0;

}


