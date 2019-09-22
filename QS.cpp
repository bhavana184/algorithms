#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;
int m; 
int c[30]={0};//
ofstream out;
int partition (int a[], int l, int h) //l-low(leftmost index),h-high(righmost index)
{ 
    int pivot = a[h];   
    int i = (l - 1); 
  	int temp,t1;
    for (int j = l; j <= h- 1; j++) 
    {  	
        if (a[j] <= pivot) 
        { 
            i++;   
           temp= a[i] ;
		   a[i]=a[j]; 
		   a[j]=temp;
        } 
    }
    /* if (a[h] < a[i + 1])
        {
            temp = a[i+1];
            a[i + 1] = a[h];
            a[h] = temp;
        }
    return i + 1;*/
    	//to display in said format
		t1=a[h];
        for(int n=h;n>i+1;n--)
        {
        	a[n]=a[n-1];
		}
		a[i+1]=t1;
		c[i+1]=1;	
 return (i + 1); 
} 
void QS(int a[], int l, int h) 
{  int i;
    if (l <= h) 
    {
        int p = partition(a, l, h); 
 //to display in the asked format
      for( i=0;i<m-1;i++)
      {
      	if(c[i]!=1) 
		  {out<<a[i]<<",";
		  }
      	else {
      		out<<"("<<a[i]<<"),";
        }
	  }
	  if(c[i]!=1) 
	  {
	  out<<a[i];
	  }
      else
	  {
	  out<<"("<<a[i]<<")";
	  }
	  out<<endl;
//
      QS(a, l, p - 1); 
      QS(a, p + 1, h);   
    }   
} 
int main(int argc,char** argv)
 { 
    ifstream in;
    string s;
    int a[100];
    int j;
	m=0; 
    in.open(argv[1]); 
    out.open(argv[2]); 
    /*if(!in)
	{
		exit(1);
	}
	 if(!out)
	{
		exit(1);
	}*/
  	
	while(in>>a[m]) {
  		getline(in, s ,' ');
			m++;
		}
	for(  j=0;j<m-1;j++)
    { 	 out<<a[j]<<","; 
	}
 	 out<<a[j]<<endl;
  	//call QS 
 	 QS(a,0,m-1);	
	//      
	for(j=0;j<m-1;j++)
   	{
   	 out<<a[j]<<","; 
    }
	out<<a[j];
    in.close();
    out.close();
 	return 0;
}
