//sieve of eratosthenes
#include <iostream>
using namespace std;
void primesieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=-1;
            }
        }
    }
    
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<"   ";
        }
    }
}
int main() {
    primesieve (100);
    return 0;
}
