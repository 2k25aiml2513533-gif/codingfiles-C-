    #include<iostream>
    using namespace std;
    int fact(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
    
    int main(){
        int n;
        cout<<"enter number for factorial"<<endl;
        cin>>n;
        cout<<"factorial of "<<n<<" is "<<fact(n)<<endl;
        return 0;
    }