#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>nums={1,3,5,6,8,9};
	//returns if exists or not
	//cout << binary_search(nums.begin(),nums.end(),11) << endl;;

	cout << lower_bound(nums.begin(),nums.end(),4)-nums.begin() << endl;
	//gives first occurence,if not exist, then place of that element
	cout << upper_bound(nums.begin(),nums.end(),7)-nums.begin()-1 << endl;
	//index next to element
	return 0;
}
