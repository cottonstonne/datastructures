#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int>a={1,2,3};
	vector<int>b={1,3,2};
	if(a<b){
		cout << "equal" << endl;
	}
	for(auto i:a){
		cout << i << endl;
	}
	return 0;
}
