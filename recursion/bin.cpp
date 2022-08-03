#include<bits/stdc++.h>
using namespace std;

bool binser(int n,vector<int> &a,int st,int en){
	if(st<=en){
		int mid=(st+en)/2;
		if(a[mid]==n)
			return true;
		if(n<a[mid]){
			en=mid-1;
		}
		else{
			st=mid+1;
		}
		return binser(n,a,st,en);
	}
	else
		return false;
}

int main(){
	vector<int>a={1,2,4,5,6,7,8,9,10};
	int n;
	cout << "enter number to search" << endl;
	cin >> n;
	bool ans=binser(n,a,0,a.size()-1);
	if(ans)
		cout << "found" << endl;
	else
		cout << "not found" << endl;
	return 0;
}
