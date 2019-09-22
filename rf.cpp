#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int recfn(int n,int r)
{
   	if(n>0 && r>0)
   		return recfn(n-1,r)	+ recfn(n-1,r-1);
   	else 
   		return 1;
}	

int main(int argc, char** argv){
int n= atoi(argv[1]);
int r= atoi(argv[2]);
int res= recfn(n,r);
cout<<res;

return 0 ;
}
