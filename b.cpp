#include<bits/stdc++.h>
using namespace std;
int a[100009];
int b[100009];
int main(){
    int n, x, y, d;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&x,&y,&d);
        a[x] += d;
        b[y+1] += d;
    }
    int s=0, ma=0;
    int i=0;
    while(i<=100000){
        while(i<=100000 && !(a[i] || b[i]))
            i++;
        if(a[i])
            s+=a[i];
        if(b[i])
            s-=b[i];
        if(s>ma)
            ma = s;
        i++;
    }
    printf("%d",ma);
}
