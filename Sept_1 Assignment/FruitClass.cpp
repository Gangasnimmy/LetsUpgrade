#include<iostream>
using namespace std;

class Fruit{
	private:
		string name;
		string taste;
		string size;
		string color;
		string season;
	public:
		Fruit(string n,string t,string sz,string clr,string s){
			name = n;
			taste = t;
			size = sz;
			color = clr;
			season = s;
		}
		string getName();
		string getTaste();
		string getSize();
		string getColor();
		string getSeason();	
};

string Fruit::getName(){
	return name;
}

string Fruit::getTaste(){
	return taste;
}

string Fruit::getColor(){
	return color;
}

string Fruit::getSeason(){
	return season;
}

string Fruit::getSize(){
	return size;
}

int main(){
	Fruit f1("Mango","sweet","big","yellowish orange","summer");
	Fruit f2("Orange","sour","medium","Orange","Winter");
	cout<<"Fruit name: "<<f1.getName()<<endl;
	cout<<"Taste: "<<f1.getTaste()<<endl;
	cout<<"Size: "<<f1.getSize()<<endl;
	cout<<"Colour: "<<f1.getColor()<<endl;
	cout<<"Season: "<<f1.getSeason()<<endl<<endl;
    cout<<"Fruit name: "<<f2.getName()<<endl;
	cout<<"Taste: "<<f2.getTaste()<<endl;
	cout<<"Size: "<<f2.getSize()<<endl;
	cout<<"Colour: "<<f2.getColor()<<endl;
	cout<<"Season: "<<f2.getSeason()<<endl;
	return 0;
}
