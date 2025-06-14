#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

    void solve(string digits,string output,int index,vector<string>&ans,string keypad[]){
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int no=digits[index]-'0';
        string mapped=keypad[no];// mapped for first digit then for next digtit mapped and then writes their code
        for(int i=0;i<mapped.length();i++){
            output.push_back(mapped[i]);
            solve(digits,output,index+1,ans,keypad);
            output.pop_back();// backtracking point for delete one char like a then b then c
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0) return ans;
        string output="";
        string keypad[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;
        solve(digits,output,index,ans,keypad);
        return ans;
    }


int main(){
    string n;
    cout<<"ENTER THE DIAL NO FROM 2-9:";
    cin>>n;
   vector<string>ans=letterCombinations(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

