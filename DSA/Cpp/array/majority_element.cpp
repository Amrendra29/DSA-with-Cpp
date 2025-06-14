
#include<iostream>
#include<vector>
using namespace std;


//print the majority element {1,2,2,1,1} ans=1



//      1
//brute force approach O(n^2) --> 2 for loops used
// for(int val: nums){
//     freq=0;
//     for(int ele:nums){
//         if(ele==nums){
//             freq++;
//         }
//     }
//     if(freq>n/2){
//         return val;
//     }
// }
// return -1;


//       2
//optimize approach O(nlogn)
// using sorting  



// vector<int>majority( vector<int> nums){
//      int ans;
//      //sorting
//      sort(nums.begin(),nums.end());


//     //freq count
//     int freq=1;
//     ans=nums[0];
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             ans=nums[i];
//         }
//     }
//     if(freq>nums.size()/2){
//         return ans;
//     }


// }

// int main(){
//     vector<int> nums={1,2,2,1,1};
//     vector<int>ans=majority(nums);
    
    
// }


//      3
//best approach by MOOR'S VOTING ALGORITHM


int main(){
    vector<int> nums={1,2,2,1,1};
    int freq=0;
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;
    return 0;
}