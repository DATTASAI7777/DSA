#include<bits/stdc++.h>
using namespace std;
void help(vector<int> &arr,int &count,int sum,int target,int index,vector<vector<int>> &res,vector<int> &res1){
	if(sum==target){
		res.push_back(res1);
		count++;
		return ;
	}
	else if(sum>target || index==int(arr.size())) return ;
	for (int i=index;i<int(arr.size());i++){
		res1.push_back(arr[i]);
		help(arr,count,sum+arr[i],target,i,res,res1);
		res1.pop_back();
	}
}
int main(){
	vector<int> arr={2,2,3,7};
	int count=0;
	vector<vector<int>> res;
	vector<int> res1;
	help(arr,count,0,7,0,res,res1);
	set<vector<int>> set1;
	for (auto it:res){
		set1.insert(it);
	}
	for (auto it=set1.begin();it!=set1.end();it++){
		for (auto it1:(*it)){
			cout<<it1<<" ";
		}
		cout<<endl;
	}
//	cout<<count<<endl;
}
