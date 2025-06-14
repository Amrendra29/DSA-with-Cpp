#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        int  a=65;
        for(int j=0;j<n;j++){
            cout<<(char)a<<" ";
            a++;

        }
        cout<<endl;

    }
    return 0;

}