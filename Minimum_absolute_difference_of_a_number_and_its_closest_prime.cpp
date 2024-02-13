#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<2) return false;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
}
int main(){
    int n,a,b;
    cin>>n;
    a=n;
    b=n;
    if(isprime(n)) cout<<0;
    else{
    while(a-- and a>0){
        if(isprime(a)){
            break;
        }
    }
    while(b++){
        if(isprime(b)){
            break;
        }
    }
    if(abs(b-n)==abs(a-n)) cout<<abs(a-n);
    else if(abs(b-n)>abs(a-n)) cout<<abs(a-n);
    else cout<<abs(b-n);
    }
}