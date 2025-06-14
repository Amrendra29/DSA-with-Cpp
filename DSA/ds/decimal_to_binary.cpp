#include <iostream>
using namespace std;
 int stack[100], n=100, top=-1;
void push(int rem) {
    int stack[100], n=100, top=-1;
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=rem;
   }
   }

int main() {
    int k ;
    cout<<"Enter the number:";
    cin>>k;
  
    while(k>0){
        int rem=k%2;
        push(rem);
        rem/=2;
    }

    return 0;
}
