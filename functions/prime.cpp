    #include<iostream>
    using namespace std;
    int prime(int n){
        
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    int main(){
        int a,b;
        cout<<"enter range for prime"<<endl;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            prime(i);
            if(prime(i)==1){
                cout<<i<< " is prime"<<"\n"; 
            }
            else{
                cout<<i<< " is not prime"<<"\n"; 
    
            }
        }
       
    }