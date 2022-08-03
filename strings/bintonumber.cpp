#include<bits/stdc++.h>
using namespace std;

int main(){
	string s="101";
	string t="7B316";
	cout << stoi(s,nullptr,2) << endl; //convert any base to integer.2 for binary
	cout << stoi(t,nullptr,16) << endl;
	return 0;
}
