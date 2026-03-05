#include<iostream>
using namespace std;
int main(){
    int arr[]={2,13,42,53,12,78,93,38,76,48};
    int n=sizeof(arr)/sizeof(arr[0]);
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[n-1-i];
    }
    cout<<"reverse array  : ";
    for(int i=0;i<n;i++){
        cout<<brr[i]<<"\t";
    }
    return 0;
}