#include <iostream>
using namespace std;
void TOH(string S,string M,string D,int n){
    if(n==1){
        cout<<S<<"-->"<<D<<endl;
        return ;
    }
    else{
        TOH(S,D,M,n-1);
        cout<<S<<"-->"<<D<<endl;
        TOH(M,S,D,n-1);
        return ;
    }
}
int main(){
    int n;
    cout<<"enter the disk:";
    cin>>n;
    TOH("Source","Mediater","Destination",n);
    return 0;
}