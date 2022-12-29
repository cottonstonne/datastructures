#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> &nums, vector<string> &date) {
    // write your code in C++ (C++14 (g++ 6.2.0))
    unordered_map<int,int>store;
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans+=nums[i];
        if(nums[i]<0){
            string temp=date[i].substr(5,2);
            int key=stoi(temp);
            store[key]+=abs(nums[i]);
        }
    }
    int mul=-12;
    for(auto i:store){
        if(i.second>=100){
		cout << "month: " << i.first << endl;
		mul++;
	}
    }
    cout << mul << endl;
    ans=ans+(5*mul);
    return ans;
}
int main(){
	//vector<int>a={100,100,100,-10};
	//vector<string>b={"2020-12-31","2020-12-31","2020-12-31","2020-12-31"};
	//vector<int>a={180,-50,-25,-25};
	//vector<string>b={"2020-01-01","2020-01-01","2020-01-01","2020-01-31"};
	vector<int>a={1,-1,0,-105,1};
	vector<string>b={"2020-12-31","2020-04-04","2020-04-04","2020-04-14","2020-07-12"};
	int x=solution(a,b);
	cout << x << endl;
	return 0;
}
