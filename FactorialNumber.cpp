#include<iostream>
using namespace std;

long factorial(long n){
	if(n == 1)
	return 1;
	
	return n * (factorial(n-1));
}

int main(){
	long n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"The factorial of given number is "<<factorial(n)<<endl;
	return 0;
}
