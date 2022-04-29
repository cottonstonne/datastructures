#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<string,int>hash;
	hash["ab"]=1;
	hash["ab"]++;
	hash["bc"]++;
	if(hash["cd"]==0)
		cout << "not" << endl;
	cout << hash["ab"]<< endl;
	cout << hash["bc"]<< endl; //inserts a value if not exists.
	return 0;
}
