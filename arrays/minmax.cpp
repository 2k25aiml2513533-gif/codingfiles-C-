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
int min(int n,int* arr){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"enter size of an array :";
    cin>>n;
    int arr[n];
    cout<<"enter element of array";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"maximum value in array is "<<max(n,arr)<<endl;
    cout<<"minimum value in array is "<<min(n,arr);
    return 0;
}