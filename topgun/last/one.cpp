#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int k;
	cout << "enter size:";
	cin >> n;
	cout << "enter target:";
	cin >> k;
	vector<vector<int>>nums(n,vector<int>(n,0));
	int p=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			nums[i][j]=p++;
		}
	}
	int x=nums.size()-1;
	int y=0;
	while(x>=0 and x<nums.size() and y>=0 and y<nums.size()){
		if(nums[x][y]==k){
			cout << "found" << endl;
			return 0;
		}
		else if(nums[x][y]>k)
			x--;
		else
			y++;
	}
	cout << "not found" << endl;
	return 0;
}
