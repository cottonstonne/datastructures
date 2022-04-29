#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<vector<int>>arr;
	arr.push_back({1,2});
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[0].size();j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << arr[0][*]<< endl; //cannot print like this
	return 0;
}
