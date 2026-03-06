#include <iostream>
using namespace std;
void bubble(int n,int* mat){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(mat[j]>mat[j+1]){
                int temp=mat[j];
                mat[j]=mat[j+1];
                mat[j+1]=temp;
            }
        }
    }
}
void printarr(int n,int* mat){
    for(int i=0;i<n;i++){
        cout<<mat[i]<<"\t";
    }
}
int main() {
    int mat[]={2,4,3,1,6,7,8};
    int n=sizeof(mat)/sizeof(mat[0]);
    bubble(n,mat);
    printarr(n,mat);
    return 0;
}