#include<iostream>
using namespace std;
int main(){
  double n;
  double i=1;
  cout<<"the number is : ";
  cin>>n;
  while(n>0){
    
    i=i*n;
    n--;
  }
  cout<<i;
    return 0;
}