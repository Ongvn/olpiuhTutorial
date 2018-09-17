#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k = s.size();
    int pos=-1,m1=0,m2=0;
    for(int i=0;i<k;i++){
        if(pos==-1){
                if(s[i]!='2')
                    pos = i;
        }else if(s[i] == '2'){
            m1 += i-(pos++);
        }
    }
    pos=-1;
    for(int i=k-1;i>=0;i--){
        if(pos==-1){
                if(s[i]!='2')
                    pos = i;
        }else if(s[i] == '2'){
            m2 += (pos--)-i;
        }
    }
    printf("%d",m1<m2?m1:m2);
}
