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
int a[20]; int x;//int s=0,m=1;
int c1=0;//for counting no. of digits in 1st number
int c2 =0;//for counting no. of digits in 2nd number
int flag=-1;
//cout<<"argc: "<< argc;
//cout<<endl;
for(int i=1;i<argc;i++)
{
	a[i-1] = atoi(argv[i]);
}
//printing array
for(int j=0;j<argc-1;j++)
{	
	cout<<"a["<<j<<"]= ";
	cout<<a[j]<<" ";
}
cout<<endl;
/*
for(int j=0;j<argc-1;j++)
{
	c1=no_of_digits(a[j]) ;
//	c2=no_of_digits(a[j+1]) ;
	//if(c1!=c2)
	//	cout<"no.s don't have equal no. of digits;
}
cout<<"c1= "<<c1<<endl;
for(int j=1;j<argc-1;j++)
{
	//c1=no_of_digits(a[j]) ;
	c2=no_of_digits(a[j]) ;
	//if(c1!=c2)
	//	cout<"no.s don't have equal no. of digits;
}
cout<<"c2= "<<c2<<endl;
*/
for(int j=0;j<argc-1;j++)
{	
	/*cout<<no_of_digits(a[j])<<endl;
	cout<<no_of_digits(a[j+1])<<endl;*/
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
/*for(int j=0;j<argc-1;j++)
{	
	/*cout<<no_of_digits(a[j])<<endl;
	cout<<no_of_digits(a[j+1])<<endl;
		if((no_of_digits(a[j]))==(no_of_digits(a[j+1]))){
		while(a[j]!=0 && a[j+1]!=0){
		m= (a[j]%10) * (a[j+1]%10);
		s=s+m;
		a[j]=a[j]/10;
		a[j+1]= a[j+1]/10;
	}
	cout<<s;
	cout<<endl;
	}
	else
		cout<<-1;	
}*/
//cout<<"sop=";
/*cout<<s;
cout<<endl;*/


return 0 ;
}
