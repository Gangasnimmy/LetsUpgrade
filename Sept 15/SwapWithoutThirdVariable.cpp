#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter a and b value: ";
	cin>>a>>b;
	cout<<"Before swap a="<<a<<" b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swap a="<<a<<" b="<<b<<endl;
	return 0;
}
