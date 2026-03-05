#include<iostream>
using namespace std;
long long product(int n,int* arr){
    long long pro=1;
    for(int i=0;i<n;i++){
        pro=pro*arr[i];
    }
    return pro;
}
int sum(int n,int* arr){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[]={2,13,42,53,12,78,93,38,76,48};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"product of all elements is : "<<product(n,arr)<<endl;
     cout<<"sum of all elements is : "<<sum(n,arr);
    return 0;
}