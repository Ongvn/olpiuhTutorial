#include<bits/stdc++.h>
using namespace std;

struct diem{
    int d=0,n=0;
};
map<string, diem> m;
map<string, diem>::iterator it;
char toLower(char c){
    if(c <= 'Z' && c >= 'A')
        return c -('Z' - 'z');
    return c;
}

int main(){
    int n;
    string name;
    diem temp;
    int d;
    cin>>n;
    while(n--){
        cin>>name>>d;
        transform(name.begin(), name.end(), name.begin(), toLower);
        temp = m[name];
        temp.d += d; temp.n++;
        m[name] = temp;
    }
    float ma=0,x;
    int dem=1;
    for (it=m.begin(); it!=m.end(); ++it){
        temp = it->second;
        x = 1.0*temp.d/temp.n;
        if(x>ma){
            ma = x;
            dem =1;
        }else if(x==ma){
            dem++;
        }
    }
    printf("%.2f %d",ma,dem);
}
