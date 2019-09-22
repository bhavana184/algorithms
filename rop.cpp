#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<sstream> 
#include<iostream>
using namespace std;

void isPrime(int n){
    int flag=0;
    for(int i = 2; i <= n / 2; i++) {
       if(n % i == 0) {
          flag = 1;
          break;
       }
    }
     if (flag == 0)
        printf("1 ");
    else 
		printf("0 ");
}	

int main(int argc, char** argv){
int low= atoi(argv[1]);
int high = atoi(argv[2]);
 while (low <= high)
{
            isPrime(low);
            low++;
}

return 0 ;
}
