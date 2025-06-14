#include<iostream>
using namespace std;



void spiralmatrix(int matrix[][4],int n,int m){
    int strow=0;
    int stcol=0;
    int endrow=n-1;
    int endcol=m-1;
    while(stcol<=endcol && strow<=endrow){
    //top
    for(int j=stcol;j<=endcol;j++){
        cout<<matrix[strow][j]<<" ";
    }
    //right 
     for(int i=strow+1;i<=endrow;i++){
        cout<<matrix[i][endcol]<<" ";
    }
    //bottom
     for(int j=endcol-1;j>=stcol;j--){
        if(endrow==strow){
            break;
        }
        cout<<matrix[endrow][j]<<" ";
    }
    //left
     for(int i=endrow-1;i>=strow+1 ;i--){
        if(endcol==stcol){
            break;
        }
        cout<<matrix[i][stcol]<<" ";
    }
    strow++;stcol++;
    endcol--;endrow--;

    }

  
  
}




int main(){
    int matrix[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    spiralmatrix(matrix,3,4);

    return 0;
}