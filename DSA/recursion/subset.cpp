//using recursion but it's tc is 2^n so learn bit manupalution
#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

   
    void  solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>&ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }

        //exclude
        solve(nums,output,index+1,ans);

        //include
        int element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
        output.pop_back();
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int index=0;
        solve(nums,output,index,ans);
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
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }

     vector<vector<int>>ans=  subsets(nums);
     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
       cout<<ans[i][j]<<" ";

    }
    cout<<endl;
        

    }
    
    return 0;
}