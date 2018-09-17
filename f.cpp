#include<bits/stdc++.h>
using namespace std;
int a[3][3];
int aw, al;

bool still(){
    int m=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            m+=(a[i][j]!=0);
        return (m!=9);
}

int check(int x){
    if(a[0][0]+a[0][1]+a[0][2] == 3*x) return 1;
    if(a[1][0]+a[1][1]+a[1][2] == 3*x) return 1;
    if(a[2][0]+a[2][1]+a[2][2] == 3*x) return 1;

    if(a[0][0]+a[1][0]+a[2][0] == 3*x) return 1;
    if(a[0][1]+a[1][1]+a[2][1] == 3*x) return 1;
    if(a[0][2]+a[1][2]+a[2][2] == 3*x) return 1;

    if(a[0][0]+a[1][1]+a[2][2] == 3*x) return 1;
    if(a[0][2]+a[1][1]+a[2][0] == 3*x) return 1;
    return still()-1;
}

void outBoard(){
    printf("-------\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%c ",a[i][j]? (a[i][j]==1?'x':'o') :'.');
        printf("\n");
    }
    printf("-------\n");
}

void calc(int x){
    int c;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        if(!a[i][j]){
            a[i][j] = x;
            //outBoard();
            c=check(x);
            if(c==1){
                if(x>0) aw++;
                else    al++;
                //printf("*********%d\n",x);
            }else if(c==0){
                calc(-x);
            }else{
                //printf("^^^^^^^^^^\n",x);
            }
            a[i][j] = 0;
        }
    }
    return ;
}

int main(){
    //freopen("a.txt","w",stdout);
    //freopen("in.txt","r",stdin);
    int mf=0;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        mf += a[i][j];
    }
    mf? (mf>0?mf=-1:mf=1) : scanf("%d",&mf);
    //printf("%d ",mf);

    aw = check(1) == 1;
    al = check(-1) == 1;
    if(aw || al){
            if(aw && al)
                aw = al = 0;
    }else if(still()){
        calc(mf);
    }
    printf("%d %d",aw, al);
}
