#include<iostream>
using namespace std;

int main(){
	int n,a=0,b=1,c;
	cout<<"Enter the number of term to print fibonacci series:";
	cin>>n;
	cout<<a<<" "<<b<<" ";
	n -= 2;   //reducing the number of terms by 2 as we already printed the first 2 terms
	while(n!=0){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
		n--;
	}
	return 0;
}
