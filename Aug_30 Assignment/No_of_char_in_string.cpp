#include<iostream>
using namespace std;

int ncharacters(string s){
	int count=0;
	for(int i=0;s[i]!='\0';i++){
		count++;
	}
	return count;
}

int main(){
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	cout<<ncharacters(s)<<" characters in this string"<<endl;
	return 0;
}
