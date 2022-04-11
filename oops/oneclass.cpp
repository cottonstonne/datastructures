#include<iostream>
using namespace std;

class student{
	public:
	string name;
	int no;
	student(){
	}
	student(string a,int b){
		name=a;
		no=b;
	}
};

int main(){
	student s;
	s.name="tom";
	s.no=10;
	student lol("orn",2);
	cout << s.name << endl;
	cout << s.no << endl;
	cout << lol.name << endl;
	cout << lol.no << endl;
	return 0;
}
