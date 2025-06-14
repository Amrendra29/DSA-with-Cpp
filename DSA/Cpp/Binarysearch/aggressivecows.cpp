#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossible( vector<int> stalls,int n,int k,int mid){
    int cowcount=1;
    int lastpos=stalls[0];
    for(int i=0;i<n;i++){
        if(stalls[i]-lastpos>=mid){
            cowcount++;
            lastpos=stalls[i];
            if(cowcount==k){
                return true;
            }
        }
    }
    return false;
}

int getdistance( vector<int> stalls,int n,int k){
    sort(stalls.begin(),stalls.end());
    int s=0,e=stalls[n-1]-stalls[0];
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(stalls,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    int k;
    cout<<"Enter the no of stalls"<<endl;
    cin>>n;
    cout<<"Enter the no of aggressive cows"<<endl;
    cin>>k;
    cout<<"Enter the values of distance of stalls"<<endl;
    vector<int>stalls(n);
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }
   

    cout<<getdistance(stalls,n,k)<<endl;
    return 0;
}