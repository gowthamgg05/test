#include<iostream>
#include<stdlib.h>
using namespace std;
void fibo(int number)
{
	if(number>0){
		int current=1,previous=-1,next=0;
		for(int i=0;i<number;i++){
			next = previous+current;
			cout << next <<"\n";
			previous = current;
			current = next;
		}
	}else{
		cout << "please specify the number which is greater than 0";
	}
}
int main(int argc,char *argv[])
{
	cout << "Here is the Fibonacci Series of " << argv[1] << ":\n";
	fibo(atoi(argv[1]));	
}
