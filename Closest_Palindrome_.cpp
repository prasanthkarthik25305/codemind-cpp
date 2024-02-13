#include<bits/stdc++.h>
using namespace std;
bool ispalin(int n){
    int r=0,m=n,s=0;
    while(n!=0){
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(m==s) return true;
    else return false;
}
int main(){
    int n,k,a,b,c;
    cin>>n;
    k=n;
    c=n;
    while(n--){
        if(ispalin(n)){
            a=n;
            break;
        }
    }
    while(k++){
        if(ispalin(k)){
            b=k;
            break;
        }
    }
    if(abs(a-c)==abs(b-c)) cout<<a<<" "<<b;
    else if(abs(a-c)>abs(b-c)) cout<<b;
    else cout<<a;
}