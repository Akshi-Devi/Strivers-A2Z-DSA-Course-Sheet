#include<bits/stdc++.h>
using namespace std;
int missingNum(vector<int>&a,int N){
    int ans1=0, ans2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
        ans1=ans1^(i+1);
        ans2=ans2^a[i];
    }
    ans1=ans1^N;
    return ans1^ans2;

}