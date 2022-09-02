#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int mark1;
		int mark2;
		int mark3;
		int mark4;
		int mark5;
	public:
		Student(string n,int m1,int m2,int m3,int m4,int m5){
			name = n;
			mark1 = m1;
			mark2 = m2;
			mark3 = m3;
			mark4 = m4;
			mark5 = m5;
		}
		string getName();
		int getMark1();
		int getMark2();
		int getMark3();
		int getMark4();
		int getMark5();
		int getTotal();
};

string Student::getName()
{
	return name;
}
int Student::getMark1(){
	return mark1;
}
int Student::getMark2(){
	return mark2;
}
int Student::getMark3(){
	return mark3;
}
int Student::getMark4(){
	return mark4;
}
int Student::getMark5(){
	return mark5;
}

int Student::getTotal(){
	return mark1+mark2+mark3+mark4+mark5;
}

int main(){
	 Student s1("Raj",64,75,56,47,88);
	 cout<<"Student Name: "<<s1.getName()<<endl;
	 cout<<"Individual Subject Marks are "<<s1.getMark1()<<" "<<s1.getMark2()<<" "<<s1.getMark3()<<" "<<s1.getMark4()<<" "<<s1.getMark5()<<endl;
	 cout<<"Total mark: "<<s1.getTotal();
	
	return 0;
}
