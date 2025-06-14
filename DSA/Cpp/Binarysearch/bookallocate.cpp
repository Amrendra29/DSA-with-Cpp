#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int>arr,int n,int m,int mid){
    int student=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int allocatebook(vector<int>arr,int n,int m){
    int s=0;
    int sum=0;
    //sum calculate of array for search of binary
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;

    //binary search 
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(arr,n,m,mid)){
            e=mid-1;
            ans=mid;
            
        }
        else{
           s=mid+1;
        }
        
    }
    return ans;
}
int main(){
    vector<int>arr={10,20,30,40};
    int n=4;//no of books
    int m=2;//no of students
    int ans=allocatebook(arr,n,m);
    cout<<ans<<endl;
    return 0;

}