#include<bits/stdc++.h>
using namespace std;

int main(){
	string s="carbon";
	cout << s << endl;
	s.pop_back(); //no pop_front() ,use s.substr()
	cout << s << endl;
	return 0;
}
