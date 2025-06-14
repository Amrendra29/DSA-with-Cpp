#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,4,0,5,6};
     int n=nums.size();
        int sum=0;
        int total=(n*(n+1))/2;
        for(int val: nums){
            sum+=val;
        }
        int ans=total-sum;
        // cout<<ans;
        // cout<<n<<endl;
        // cout<<total;
        cout<<sum;
        return 0;
}