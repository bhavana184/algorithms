#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int no_of_digits(int n) 
{ 
    int count = 0; 
    while (n != 0) {
		count++; 
        n = n / 10; 

    } 
    return count; 
} 

void sop(int a[],int n)
{	int m=1,s=0;
for(int j=0;j<n;j++)
{	
		while(a[j]!=0 && a[j+1]!=0){
		m= (a[j]%10) * (a[j+1]%10);
		s=s+m;
		a[j]=a[j]/10;
		a[j+1]= a[j+1]/10;
	}
	}
cout<<s;
cout<<endl;		
}
	

int main(int argc, char** argv){
int a[20];
int flag=-1;

for(int i=1;i<argc;i++)
{
	a[i-1] = atoi(argv[i]);
}
//printing array
/*for(int j=0;j<argc-1;j++)
{	
	cout<<"a["<<j<<"]= ";
	cout<<a[j]<<" ";
}*/
//cout<<endl;

for(int j=0;j<argc-1;j++)
{	
		if((no_of_digits(a[j]))==(no_of_digits(a[j+1]))){
		flag=1;
		break;
	}
	
}


if(flag==-1) {
	cout<<flag<<endl;
}
else
	sop(a,argc-1);


return 0 ;
}
