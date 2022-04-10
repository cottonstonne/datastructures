#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<vector<int>>v={{1,6,4},{3,4,2},{2,3,4}};
	sort(v.begin(),v.end());
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << v[i][j];
		}
		cout << endl;
	}
	return 0;
}
