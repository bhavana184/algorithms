#include<stdio.h>
#include<stdlib.h>
#include<sstream>//fr stringstream
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv){
	string arr=argv[1];
	vector<int> a;
	int res;
	int flag=0;
	stringstream s(arr);
	int temp;
	while(s>>temp)
	{
		a.push_back(temp);
	}
	int len=a.size();
//	cout<<k;
//	for(int i=0;i<k;i++) cout<<a[i]<<" ";
	///*
	for(int i=0;i<len;i++)
	{
		int c=1;
		for(int j=i+1;j<len;j++){
			if(a[i]==a[j])
				c++;
		}
		if(c>=len/2) //cout<<a[i]<<" ";
		{	flag=1;
			res =a[i];
		}
	//	else cout<<"NONE";	
	}
	if(flag==1) cout<<res;
	else cout<<"NONE";
//	*/
return 0 ;
}
