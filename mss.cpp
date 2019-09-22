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
	int maxsum=0, cursum=0;
	for(int i=0;i<len;i++)
	{
		cursum=cursum+a[i];
		if(cursum<0) 
			cursum=0;
		else if(cursum>maxsum)
			maxsum=cursum;
	}
	cout<<maxsum;
//	*/
return 0 ;
}
