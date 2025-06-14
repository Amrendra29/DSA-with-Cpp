#include<iostream>
#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
int partition(vector<int>&arr,int s,int e){
    //high value
    int pivot=arr[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}


void  quicksort(vector<int>&arr,int s,int e){
    if(s>=e) return ;

    int part=partition(arr,s,e);

    //left sort
    quicksort(arr,s,part-1);
    //rigth sort
    quicksort(arr,part+1,e);
}
int main(){
   
    int n;
    cout<<"ENTER THE NO:";
    cin>>n;
     vector<int>arr(n);
     cout<<"ENTER THE VALUES:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    quicksort(arr,s,e);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}