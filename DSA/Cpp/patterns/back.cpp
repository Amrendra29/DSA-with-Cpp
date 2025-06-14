#include<iostream>
using namespace std;
int main(){
  int n=4;
  
  for(int i=0;i<n;i++){
    int a=64;
    for(int j=i+1;j>0;j--){
        cout<<(char)(a+j)<<" ";
        
    }
    cout<<endl;
  }
    return 0;
}