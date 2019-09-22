#include<stdio.h>
#include<stdlib.h>
#include<sstream>//fr stringstream
#include<string.h>
#include<iostream>
using namespace std;
/**to run the file by taking file name from cmd:-
1.build and run the prog. in code blocks
2..exe file is formed for your program
3. now open cmd of windows
4.write : filename.exe input array value 1 or 2
5.enter
6.you see your file formed
*/

int main(int argc, char** argv){
	string arr=argv[1];
	int k=0,a[20];
	stringstream s(arr);
	while(s>>a[k])
	{
		getline(s,arr,' ');
		k++;
	}
	

	int x=atoi(argv[2]);//b=x
	if(x==1){
		int max=a[0];
		for(int i=1;i<k;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		cout<<max;
	}
	if(x==2){
		int min=a[0];
		for(int i=1;i<k;i++)
		{
			if(a[i]<min)
				min=a[i];
		}
		cout<<min;
	}
return 0 ;
}
