#include<bits/stdc++.h>
using namespace std;
map<int,int> a;
int main(){
    int n, x, y, d;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&x,&y,&d);
        a[x] += d;
        a[y+1] -= d;
    }
    int s=0, ma=0;
    for(auto& k: a){
        s+=k.second;
        ma = s>ma?s:ma;
    }
    printf("%d",ma);
}
