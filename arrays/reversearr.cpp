#include<iostream>
using namespace std;
int main(){
    int arr[]={2,13,42,53,12,78,93,38,76,48};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n/2;i++){
        // int temp=arr[i];
        // arr[i]=arr[n-i-1];
        // arr[n-1-i]=temp;
        swap(arr[i],arr[n-1-i]);
    }
     cout<<"reverse array  : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}