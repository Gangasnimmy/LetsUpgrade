#include<iostream>
using namespace std;

int lcm(int a,int b){
	int l=(a>b)?a:b;
	while(1){
		if(l%a==0 && l%b==0)
		return l;
		l++;
	}
	
}

int main(){
	int a,b;
	cout<<"Enter two numbers :";
	cin>>a>>b;
	cout<<"The LCM of given two number is "<<lcm(a,b)<<endl;  // calling lcm() function to calculate the lcm of given numbers by passing them
	return 0;
}
