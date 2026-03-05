#include<iostream>
using namespace std;
int main(){
    // int mat[2][2]={{1,2},{3,4}},matr[2][2]={{1,2},{3,4}},sum[2][2];
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         sum[i][j]=mat[i][j]+matr[i][j];
    //     }
    // }
    //  for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<sum[i][j]<<"\t";
    //     }
    //     cout<<"\n";
    // }
    int mat[2][2]={{1,2},{3,4}},matr[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            mat[i][j]=mat[i][j]+matr[i][j];
        }
    }
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}