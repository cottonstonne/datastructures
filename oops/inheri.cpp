#include<bits/stdc++.h>
using namespace std;

class one{
	public:
	void call(){
		cout << "call in one" << endl;
	}
};

class onet{
	public:
	void pick(){
		cout << "in onet" << endl;
	}
};

class two :public one,public onet{
	public:
	void bel(){
		cout << "below" << endl;
	}
	void bel(int x){
		cout << "value " << x << endl;
	}
	void call(){
		cout << "call in two" << endl;
	}
};
int main(){
	two obj;
	obj.call();
	obj.pick();
	obj.bel();
	obj.bel(4);
	return 0;
}
