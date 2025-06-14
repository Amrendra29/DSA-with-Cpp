#include<iostream>
#include<string>
#include<vector>
using namespace std;


bool isvalid(vector<int>&arr,int n,int m,int mid){
    int student=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
   return student>m ? false:true;
}

int allocateBooks(vector<int>&arr,int n,int m){
        if(m>n) return -1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
       int st=0;
       int end=sum;//range of possible sum
       int ans=-1;
       while(st<=end){
        int mid=st+(end-st)/2;
       
        if(isvalid(arr,n,m,mid)){//left
         ans=mid; 
        end=mid-1;
        }
        else{
            st=mid+1;
        }
       }
       return ans;
}

int main(){
    vector<int>arr={2,1,3,4};
    int n=4;
    int m=2;
    cout<<allocateBooks(arr,n,m)<<endl;
    return 0;
}