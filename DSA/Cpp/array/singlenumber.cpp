#include<iostream>
#include<vector>
using namespace std;

//{1,4,1,2,2} print the diiferenet one 
//using bitwise or ^ in this question n^n=0 and n^0=n


int main(){
    vector<int> nums={1,8,1,8,2};
    int single=0;
    for(int val:nums){
        single^=val;

    }
    cout<<single;
    return 0;

}