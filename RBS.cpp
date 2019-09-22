#include<iostream>
#include<fstream>
using namespace std;
int counter=0;
/**to run the file by taking file name from cmd:-
1.build and run the prog. in code blocks
2..exe file is formed for your program
3. now open cmd of windows
4.write : filename.exe inputfile.txt outputfile.txt
5.enter
6.you see your file formed
*/
int RBS(int a[], int l, int h, int key){//l->low->leftmost index i.e start, h->high->rightmost index i.e end
if (h >= l) {
        int mid = (l+h) / 2;
        if (a[mid] == key)
       {
	   		counter++;
            return mid;
  	   }
       else if (a[mid] > key)
       {
       	counter++;
       	return RBS(a, l, mid - 1, key);
	   }

  		else
  		{
		  counter++;
		  return RBS(a, mid + 1, h, key);
		  }

    }
return -1;	

}

int main(int argc, char** argv){
ifstream in(argv[1]);
ofstream out(argv[2]);
int input[30],output[30],i=0,j=0;
string s1,s2;
while(in>>input[i]) {
  		getline(in, s1 ,',');
			i++;
		}
	in.clear();
	in.seekg(0, ios::beg);
	while(in>>output[j])
	  {
	  getline(in, s2, '\n');
	  j++;
}
//BUBBLE SORT
int n1, n2, temp=0;
    for(n1 = 0; n1 <i; n1++)
    {
        for(n2 = 0; n2 < i-n1-1; n2++)
        {
            if( input[n2] > input[n2+1])
            {
                temp = input[n2];
                input[n2] = input[n2+1];
                input[n2+1] = temp;
            }
        }
    }

for(int a=1;a<j;a++){//in order to fetch every element to be searched from input file based on new line
int x=output[a];//x is the element to be searched
counter=0;//important 
int res=RBS(input,0,i-1,x);
if(res==-1)
    out<<x<<" not found"<<"\n";
else
   out<<x<<" found at position "<<res+1<<" after "<<counter <<" comparisons"<<"\n";
}

in.close();
out.close();
return 0;
}
