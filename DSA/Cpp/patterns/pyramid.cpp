 #include<iostream>
 using namespace std;
 int main(){
    int n=4;
    int  ch=64;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<(char)(ch+j);
        }
        for(int j=i;j>0;j--){
        cout<<(char)(ch+j);
        
    }
    cout<<endl;
    }
    return 0;
 }