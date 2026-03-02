#include<iostream>
using namespace std;
void swap(int* x,int* y){
     int temp=*x;
     *x=*y;
     *y=temp;
     cout<<*x<<*y<<endl;
}
int main(){
    int a,b;
    cout<<"enter both number for swpping "<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<b<<endl;
    return 0;
}