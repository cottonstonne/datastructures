#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int>& v1,vector<int> &v2){
	return v1[2] < v2[2];
}

int main(){
	vector<vector<int>>nums={{1,4,2},{5,8,0},{3,6,7}};
	for(auto i:nums){
		for(auto j:i){
			cout << j <<" ";
		}
		cout << endl;
	}
	sort(nums.begin(),nums.end(),cmp);
	cout << "after sort:" << endl;
	for(auto i:nums){
		for(auto j:i){
			cout << j <<" ";
		}
		cout << endl;
	}
	return 0;
}
