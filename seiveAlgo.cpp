// Sieve Algorithm in C++
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range";
    cin>>n;
    int prime[n+1];
    for(int i=0;i<n;i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i=2;i<n;i++){
        if (prime[i]==1){
            for(int j=2*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(prime[i]==1)
        cout<<i<<" ";
    }
    return 0;
}
