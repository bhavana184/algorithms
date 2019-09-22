#include<iostream>
#include<fstream>
using namespace std;
//selection sort
 void SS(int a[], int n){//n:no. of elements
int min,temp;

  for(int sort_i = 0 ; sort_i <= n-1 ; sort_i++)
   {
      min = sort_i;

      for(int sort_j = sort_i+1 ; sort_j <= n-1 ; sort_j++)
       {
         if ( a[sort_j] < a[min] )
           {
             min = sort_j;
                          //Swapping
             temp = a[min];
             a[min] = a[sort_i];
             a[sort_i] = temp;

          }
        }
   }	
}

int main(int argc, char** argv)
{
ifstream in(argv[1]);
ofstream out(argv[2]);
int input[30],i=0;//output[30],j=0
string s1,s2;
while(in>>input[i])
	{
  		getline(in, s1 ,' ');
			i++;
	}
	in.clear();
	in.seekg(0, ios::beg);
	int index;
	while(in>>index)
	{
	  getline(in, s2, '\n');
	  //j++;
	}
	int x=index;
//call to SS
	SS(input,i);


	for(int k=0;k<i;k++)
	{
	if(x-1==k)out<<input[k]<<endl;
	}
//}
/*for(int k=0;k<i;k++)
out<<input[k]<<" ";*/
in.close();
out.close();
return 0;
}
