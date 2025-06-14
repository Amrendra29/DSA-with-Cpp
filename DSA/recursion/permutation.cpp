#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

    void solve(vector<int>& nums,int index,vector<vector<int>>&ans){
        if(index>=nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            //recursion 
            solve(nums,index+1,ans);
            //backtrack
             swap(nums[index],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums,index,ans);
        return ans;
    }

int main(){
     int n;
    cout << "ENTER THE NO: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! The number of elements must be positive." << endl;
        return -1;  // Exit the program if the input is invalid
    }
    vector<int>nums(n);
    cout<<"ENTER THE NUMS ARRAY VALUES:";
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
      vector<vector<int>>ans= permute(nums);
     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
       cout<<ans[i][j]<<" ";

    }
    cout<<endl;
     }
    
    return 0;

}