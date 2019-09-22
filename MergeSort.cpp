#include<stdio.h>
#include<stdlib.h>
#include<sstream>//for stringstream
#include<string.h>
#include<iostream>
using namespace std;

// A function to merge the two half into a sorted data.
void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 
// A function to split array into two parts.
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
 
		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
}

int main(int argc, char** argv){
	
	int x=atoi(argv[1]);//no. of elements
	string arr=argv[2];//array of no.s to be sorted
	int k=0,a[20];
	stringstream s(arr);
	while(s>>a[k])
	{
		getline(s,arr,' ');
		k++;
	}
	//int len=k;//length of array a[]
	//Merge sort
	MergeSort(a, 0, x-1);	
	
	for(int i=0;i<x;i++)
		cout<<a[i]<<" ";
return 0 ;
}
