#include<iostream>
//A A A A
//B     B
//C     C
//D D D D
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
       for(int j=0;j<n-1-i;j++){
        cout<<" ";
       }
       cout<<"*";
       if(i!=0){
        for(int j=1;j<=2*i-1;j++){
            cout<<" ";
        }
        cout<<"*";
       }
        
    cout<<endl; 
    }


    return 0;
}