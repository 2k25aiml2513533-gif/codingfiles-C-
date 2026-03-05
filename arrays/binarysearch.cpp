#include<iostream>
using namespace std;
int binarysearch(int n,int* arr,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"enter size and element to be find in an array :";
    cin>>n>>key;
    int arr[n];
    cout<<"enter element of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\n";
    if(binarysearch(n,arr,key)!=-1){
        cout<<key<<" is found at index :"<<binarysearch(n,arr,key);
    }
    else{
        cout<<key <<"doesn't found"<<endl;
    }
    return 0;
}