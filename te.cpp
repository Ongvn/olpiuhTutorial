#include<bits/stdc++.h>
using namespace std;
string s;
int k;
int calc(char c){
    int pos=-1,m=0;
    for(int i=0;i<k;i++)
        if(pos==-1){
            if(s[i]!=c)
                pos = i;
        }else if(s[i] == c)
            m += i-(pos++);
    return m;
}
int main(){
    cin>>s;
    k = s.size();
    int m1 = calc('1'), m2 = calc('2');
    printf("%d",m1<m2?m1:m2);
}
