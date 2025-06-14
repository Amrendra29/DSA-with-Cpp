#include<iostream>
using namespace std;
int main(){
    int n=4;
    int a=65;
    for(int i=0;i<n;i++){
        for(int j= 0;j<=i;j++){
            cout<<(char)a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;

}