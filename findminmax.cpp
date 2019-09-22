#include<stdio.h>
#include<stdlib.h>
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
int a[20]; int x;
for(int i=1;i<argc;i++)
{
	a[i-1] = atoi(argv[i]);
}
//printing array
/*for(int j=0;j<argc-1;j++)
{
	cout<<a[j]<<" ";
}
cout<<endl;*/
//printing last element of array

for(int j=0;j<argc-1;j++)
{
	x=a[argc-2];
}
//cout<<x;
//cout<<endl;
//finding min - max

if(x==1){
	int	max=a[0];
		for(int j=0;j<argc-2;j++)
		{
			if(a[j]>max)
				max=a[j];
		}
		cout<<max;	
}
if(x==2){
	int	min=a[0];
		for(int j=0;j<argc-2;j++)
		{
			if(a[j]<min)
				min=a[j];
		}
		cout<<min;	
}
return 0 ;
}
