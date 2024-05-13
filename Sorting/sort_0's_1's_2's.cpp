#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                    high--;
                
            }
        }return 0;
    }
};

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//          int count0=0;
//          int count1=0;
//          int count2=0;
//          for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 count0++;
//             }else if(nums[i]==1){
//                 count1++;
//             }else if(nums[i]==2){
//                 count2++;
//             }
//          } 
//          for(int i=0;i<count0;i++){
//             nums[i]=0;
//          } 
//          for(int i=count0;i<count0+count1;i++){
//             nums[i]=1;
//          } 
//          for(int i=count0+count1;i<count0+count1+count2;i++){
//             nums[i]=2;
//          }  
//     }
// };