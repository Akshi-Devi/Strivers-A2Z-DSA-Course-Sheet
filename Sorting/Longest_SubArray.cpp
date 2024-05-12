 #include<bits/stdc++.h>
  using namespace std;
  
  class subArray{
  public:
    int lenOfLongSubarr(int a[],  int N, int K) 
    { 
        // Complete the function
        map<long long,int>preSumMap;
        long long sum=0;
        int maxLen=0;
        for(int i=0;i<N;i++){
            sum+=a[i];
            if(sum==K){
                maxLen=max(maxLen,i+1);
            }
            int rem=sum-K;
            if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
                
            }
                    if(preSumMap.find(sum)==preSumMap.end())
                    preSumMap[sum]=i;
        }

        return maxLen;
        
    } 

};