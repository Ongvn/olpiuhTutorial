#include<bits/stdc++.h>
using namespace std;

int isp(int x){
    int sqt = (int)sqrt(x);
    if(sqt * sqt == x) return sqt;
    return -1;
}

int main(){
    int n=1,k,x;
    cin>>n;
    long long s=0;
    for(int a=1;a<=n;a++){
        for(int b=a;b<=n;b++){
            x = isp(a*a + b*b);
            if(x!=-1 && x <=n)
                s++;
        }
    }
    printf("%I64d",s);
}
