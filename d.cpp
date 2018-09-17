#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int i=1,n=1, p=1;
    while(n<=k){
        p+=(++i);
        n+=p;
    }
    cout<<i-1;
}
