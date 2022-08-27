#include<iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}

void printAnswer(int a, int b, int ans){
	cout<<"The addition of "<<a<<" and "<<b<<" is "<<ans<<endl;
}

int main(){
	int a,b;
	cout<<"Enter two numbers to add: ";
	cin>>a>>b;
	int sum = add(a,b);       // calling add() function by passing two parameters to add
	printAnswer(a,b,sum);     // calling printAnswer() to print the answer
	return 0;
}
