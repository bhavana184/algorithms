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
int output[30],l=0;
string s1;
string s2;
while(in>>input[k]) {
  		getline(in, s1 ,' ');
			k++;
		}
in.clear();
in.seekg(0,ios::beg);
while(in>>output[l]){
	getline(in,s2,'\n');
	l++;
}
//int temp;
for(int a=1;a<l;a++)
{
	int x = output[a];
	int i,j;
	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		 //temp = x-input[i];
		if(( x-input[i])==input[j])
			out<<input[i]<<","<<input[j]<<endl;
	}
}
    

in.close();
out.close();
return 0;
}
