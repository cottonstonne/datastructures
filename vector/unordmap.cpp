#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<string,int>hash;
	unordered_map<string,string>chash;
	chash["lol"]="mark";
	cout << chash["lol"] << endl;
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
	cout << hash["ok"] << endl;
        // initilising at the decleration
	unordered_map<string,string>store={{"tom","cat"},{"jerry","mice"}};
	for(auto i:store){
		cout << i.first << " : " << i.second << endl;
	}
	cout << endl;
	return 0;
}
