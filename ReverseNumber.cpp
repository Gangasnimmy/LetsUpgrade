#include<iostream>
using namespace std;

int reverse(int a){
	int rem, ans=0;
	while(a){
		rem = a%10;
		ans = ans*10 + rem;
		a /= 10;
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter any positive number to reverse: ";
	cin>>n;
	cout<<"The reversed number is "<<reverse(n)<<endl;
	
	return 0;
}
