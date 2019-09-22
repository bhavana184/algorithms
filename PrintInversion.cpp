#include<iostream>
#include<fstream>
using namespace std;
/**to run the file by taking file name from cmd:-
1.build and run the prog. in code blocks
2..exe file is formed for your program
3. now open cmd of windows
4.write : filename.exe inputfile.txt outputfile.txt
5.enter
6.you see your file formed
*/

int main(int argc, char** argv){
ifstream in(argv[1]);
ofstream out(argv[2]);
int input[30],k=0;
string s1;
while(in>>input[k]) {
  		getline(in, s1 ,' ');
			k++;
		}

 //int arr[] = { 43,56,17,23,60 }; 
   // int n = sizeof(input) / sizeof(input[0]); 
   // out << "inversions are : " <<endl;
    
     // int inv_count = 0; 
    for (int i = 0; i < k- 1; i++) 
        for (int j = i + 1; j < k; j++) 
            if (input[i] > input[j]) 
               // inv_count++; 
               out<<input[i]<<","<<input[j]<<endl;


in.close();
out.close();
return 0;
}
