#include<iostream>
using namespace std;

  int msum(int m,int ans,int n){
        if(m>=n) return 2*ans;
        ans+=m;
        int k=m+m;
        return msum(k,ans,n);
    }
    int differenceOfSums(int n, int m) {
        int sum=(n*(n+1))/2;
       
       int k=msum(m,0,n);
        return sum-k;
    }
int main(){
    int n=10;
    int m=3;
    cout<<differenceOfSums(n, m)<<endl;
    return 0;

}