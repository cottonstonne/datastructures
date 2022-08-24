#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>nums;
	nums.push_back(1);
	nums.insert(nums.end(),2,3);
	for(int i:nums)
		cout << i << endl;
	return 0;
}
