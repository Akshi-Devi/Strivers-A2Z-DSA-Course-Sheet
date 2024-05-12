#include <bits/stdc++.h> 
using namespace std;
vector<int> twoSum(vector<int> a, int target) 
{
	// Write your code here.
	int i=0;
	int j=a.size()-1;
	while(i<j){
		if(a[i]+a[j]==target){
			return {i,j};
		}else if(a[i]+a[j]<target){
			i++;
		}else{
			j--;
		}
	}return {};
}