#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[5]={4,5,2,3,1};
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	sort(a,a+5);
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
