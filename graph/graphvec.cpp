#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> graph[n+1];
	for(int i=0;i<m;i++){
		int x,y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	for(int it=0;it<n;it++){
		cout << it << " :";
		for(int i:graph[it]){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
