#include<iostream>
#include<vector>
using namespace std;

//sorted array given {2,7,11,15} target=13 print pairs index
// better approach O(n)



vector<int> pairsum(vector<int> nums,int target){
    int i=0,j=nums.size()-1;
    int ps=0;
    vector<int> ans;
    while(i<j){
        ps=nums[i]+nums[j];
        if(ps>target){
            j--;
        }
        else if(ps<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main(){
    vector<int>nums={2,7,11,15};
    int target=9;
     vector<int> ans= pairsum(nums,target);
    cout<<ans[0]<<" "<<ans[1];
     return 0;
}