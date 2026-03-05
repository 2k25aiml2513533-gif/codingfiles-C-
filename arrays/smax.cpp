#include<iostream>
using namespace std;
int max(int n,int* arr){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int smax(int n,int* arr,int max){
    int smax=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=max&&arr[i]>smax){
            smax=arr[i];
        }
    }
    return smax;
}
int main(){
    int arr[]={2,13,42,53,12,78,93,38,76,48};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"second maximum element in array is : "<<smax(n,arr,max(n,arr));
    return 0;
}