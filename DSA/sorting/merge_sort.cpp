#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
 void merge(vector < int > & arr,int s,int mid, int e){
     int n1=mid-s+1;
     int n2=e-mid;
     //crete temp vectors


     vector<int>L(n1),R(n2);

     //copying values
     for(int i=0;i<n1;i++){
         L[i]=arr[s+i];
     }
     for(int j=0;j<n2;j++){
         R[j]=arr[mid+1+j];
     }



     int i=0,j=0;
     int k=s;
     //merged temp arr
     while(i<n1 && j<n2){
       if(  L[i]<=R[j]){
           arr[k]=L[i];
           i++;
       }
       else{
           arr[k]=R[j];
           j++;
       }
       k++;
     }
     while (i < n1) {

       arr[k] = L[i];
       i++;
        k++;
     }

       while( j<n2){
       
           arr[k]=R[j];
           j++;
           k++;
       }

 }
 
 
 
 void mergesolve(vector < int > & arr,int s, int e){
    if(s>=e) return ;
    int mid=s+(e-s)/2;

    //left sort
    mergesolve(arr,s,mid);
    //right sort
    mergesolve(arr, mid+1, e);

    //merging arrays
    merge(arr,s,mid,e);
}


int main(){
    int n;
    cout<<"ENTER THE NO:";
    cin>>n;
     cout<<"ENTER THE VALUES:";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    mergesolve(arr,s,e);

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}