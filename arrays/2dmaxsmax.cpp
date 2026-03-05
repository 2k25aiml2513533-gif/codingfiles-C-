#include <iostream>
using namespace std;
int main() {
    int rows,cols;
    cout<<"enter  rows and columns for matrix"<<endl;
    cin>>rows>>cols;
    int mat[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }
    int max=mat[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
    }
    cout<<"maximum elemnt in array is: "<<max<<endl;
    int smax=-1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]!=max && mat[i][j]>smax ){
                smax=mat[i][j];
            }
        }
    }
     cout<<"second maximum elemnt in array is: "<<smax<<endl;
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<mat[i][j]<<"\t";
    //     }
    //     cout<<"\n";
    // }
    return 0;
}