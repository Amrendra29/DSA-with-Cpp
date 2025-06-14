#include<iostream>
#include<vector>
using namespace std;

//sorted array given {2,7,11,15} target=13 print pairs index
// brute force approach O(n^2)

int main(){
    vector<int> nums={2,7,11,15};
    int target =13;
     vector<int> ans;
    for(int i=0;i<nums.size();i++){
        for ( int j=i+1;j <nums.size(); j++)
        {
           if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
        cout<<ans[0]<<" "<<ans[1]<<endl;
        cout<<ans.at(0)<<" "<<ans.at(1);
           }
        }
        
    }
    
   return 0;

}