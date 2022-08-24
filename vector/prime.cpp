#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "enter limit:";
	cin >> n;
	vector<bool>primeb(n+1,true);
	vector<int>primen;
	primeb[0]=false;
	primeb[1]=false;
	for(int i=2;i*i<n;i++){
		for(int j=i+i;j<n;j=j+i){
			primeb[j]=false;
		}
	}
	for(int i=0;i<n;i++){
		if(primeb[i])
			primen.push_back(i);
	}
	cout << primen.size() << endl;
	for(int i:primen)
		cout << i  <<" ";
	cout << endl;
	return 0;
}
