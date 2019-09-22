#include<fstream>
#include<iostream>
using namespace std;

int main(int argc, char** argv){
ifstream in(argv[1]);
ofstream out(argv[2]);
int input[30],k=0;
string s1;
while(in>>input[k]) {
  		getline(in, s1 ,' ');
			k++;
		}

    //insertion sort
    for(int i=1;i<k;i++)
    {
        int temp=input[i];//element to be put at its right place
        int j=i-1;
 		//display
 		for(int l=0;l<k;l++){
			out<<input[l]<<" ";
		}
		out<<"\n";
		//
        while((temp<input[j])&&(j>=0)){
            input[j+1]=input[j];    //moves element forward.
            j=j-1;
        }
 		
        input[j+1]=temp;    //insert element in proper place
     
    }
    //display
    for(int m=0;m<k;m++){
			out<<input[m]<<" ";
		}


in.close();
out.close();
return 0;
} 
