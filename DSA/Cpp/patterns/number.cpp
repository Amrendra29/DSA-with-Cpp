#include<iostream>
using namespace std;
int main(){
    int n=4;
    char a='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)(a+i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}