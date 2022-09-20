#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,c,x1,x2,real,imaginary,discriminant;
    cout<<"Enter coeff value: ";
    cin>>a>>b>>c;
    discriminant= (b*b) - (4*a*c);
    cout<<"Discriminant= "<<discriminant<<endl;
    if(discriminant>0){
    	cout<<"Roots are real and different"<<endl;
    	x1= (-b + sqrt(discriminant))/(2*a);
    	x2= (-b - sqrt(discriminant))/(2*a);
    	cout<<"X1= "<<x1<<" and X2= "<<x2<<endl;
	}
	else if(discriminant==0){
		cout<<"Roots are real and same"<<endl;
		x1= -b/(2*a);
		cout<<"Both X1 and X2 equal to "<<x1<<endl;
	}
    else{
    	cout<<"Roots are complex"<<endl;
    	real= -b/(2*a);
    	imaginary= sqrt(-discriminant)/(2*a);
    	cout<<"X1 ="<<real<<"+"<<imaginary<<"i"<<endl;
    	cout<<"X2 ="<<real<<"-"<<imaginary<<"i"<<endl;
	}	
	return 0;
}
