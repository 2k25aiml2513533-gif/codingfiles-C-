#include<iostream>
using namespace std;
int linearsearch(int n,int* arr,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
           return i;
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
    if(linearsearch(n,arr,key)!=-1){
        cout<<key<<" is found at index :"<<linearsearch(n,arr,key);
    }
    else{
        cout<<key <<"doesn't found"<<endl;
    }
    return 0;
}