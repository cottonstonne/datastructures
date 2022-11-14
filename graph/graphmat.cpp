#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cout << "enter nodes and edges :";
	cin >> n >> m;
	int graph[n+1][m+1];
	memset(graph,0,sizeof(graph));
	for(int i=0;i<m;i++){
		cout << i+1 << " edge:";
		int x,y;
		cin >> x >> y;
		graph[x][y]=1;
		graph[y][x]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << graph[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
