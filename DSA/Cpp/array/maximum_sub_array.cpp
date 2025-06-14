#include<iostream>
#include<vector>
using namespace std;

//print the maximum subarray sum {3,-4,5,4,-1,7,-8} ans=15
//kadnes's algorithm O(n)

int main(){
    vector<int> nums={3,-4,5,4,-1,7,-8};
    int csum=0;
    int maxsum=INT32_MIN;
    for(int val:nums){
        csum+=val;
        maxsum=max(csum,maxsum);
        if(csum<0){
            csum=0;
        }
    }
    cout<<maxsum;
    return 0;
}