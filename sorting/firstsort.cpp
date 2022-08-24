#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[10]={100,999,678,411,789,564,116,220,822};
	for(int i=0;i<10;i++){
		int mn=a[i];
		for(int j=i+1;j<10;j++){
			mn=min(mn,a[j]);
		}
	}
	return 0;
}
