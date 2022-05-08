#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<string,int>hash;
	hash["ab"]=1;
	hash["ab"]++;
	hash["bc"]++;
	for(auto i:hash){
		cout << i.first << endl;
		cout << i.second << endl;
		break;
	}
	auto s="string"; // auto fucking stores every thing
	auto x=1;
	cout << s << x << endl;
	return 0;
}
