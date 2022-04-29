#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<int>arr={1,2,2,4,3,4};
	sort(arr.begin(),arr.end());
	arr.erase(unique(arr.begin(),arr.end()),arr.end());
	for(int i:arr){
		cout << i << endl;
	}
	return 0;
}
