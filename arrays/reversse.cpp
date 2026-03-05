#include<iostream>
using namespace std;
int reverse(int n,int* arr){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter size of an array :";
    cin>>n;
    int arr[n];
    cout<<"enter element of array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"original array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<"\n";
    reverse(n,arr);
    cout<<"reversed array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}