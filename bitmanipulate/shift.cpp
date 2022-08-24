#include<bits/stdc++.h>
using namespace std;

int main(){
	int a=6;
	cout << a << endl;
	cout << (a>>1) << endl;
	cout << (a<<1) << endl;
	if(a&1==1)
		cout << "odd" << endl;
	else
		cout << "even" << endl;
	return 0;
}
