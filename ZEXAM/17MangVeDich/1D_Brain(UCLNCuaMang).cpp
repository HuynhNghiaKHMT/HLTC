//Cach 1: Time
#include <iostream>
using namespace std;

void input(int a[],int na){
    for(int i = 0; i < na; i++)
        cin>>a[i];
}
int UC(int x,int y){
    while(x!=0 && y!=0){
        if(x>y) x = x%y;
        else    y = y%x;
    }
    return x + y;
}
void FristArray(int a[],int b[],int nb){
    b[0] = 0;
    for(int i = 1; i < nb; i++)
        b[i] = UC(b[i-1],a[i-1]);

}
void LastArray(int a[],int c[],int nc){
    c[nc-1] = 0;
    for(int i = nc-2; i >= 0; i--)
        c[i] = UC(c[i+1],a[i]);

}
void findUCLN(int b[],int nb, int c[],int nc ){
    int max = 1;
    int VT = 1;
    for(int i = 0; i < nb; i++){
        if(UC(b[i],c[i+1])> max){
            max = UC(b[i],c[i+1]);
            VT = i+1;
        }
    }
    cout<<VT<<" "<<max;
}
int main(){
    int na;
    cin>>na;
    int nb = na+1, nc = na+1;
    int a[na],b[nb],c[nc];
    input(a,na);

    FristArray(a,b,nb);
    LastArray(a,c,nc);
    findUCLN(b,nb,c,nc);

    return 0;
}

//Cach 2: limited
#include <iostream>
using namespace std;

void intputArraya(int a[],int na){
    for(int i = 0; i < na; i++)
        cin>>a[i];
}
long int MinNum(int x[],int nx){
    long int minC = x[0];
    long int minL = x[1];
    for(int i = 1; i < nx; i++){

        if(i%2==0 && x[i]<minC)
            minC = x[i];
        if(i%2!=0 && x[i]<minL )
            minL = x[i];
    }
    if(minC>minL) return minC;
    else          return minL;
}
int check(int a[],int na,int x){
    int dem = na;
    for(int i = 0; i < na; i++){
            if(a[i]%x!=0)
            dem--;
            if(dem<na-1)
            return 0;
    }
    return 1;
}
long int findUocChungArray(int a[],int na){
    long int max = 1;
    for(int i = 1; i <= MinNum(a,na); i++){
        if(check(a,na,i)==1 && i > max)
            max = i;
    }
    return max;
}
int findIndex(int a[],int na){
    for(int i = 0; i < na; i++){
        if(a[i]%findUocChungArray(a,na)!=0)
            return i+1;
    }
    return 1;
}
int main()
{
    int na;
    cin>>na;
    int a[na];
    intputArraya(a,na);

    cout<<findIndex(a,na)<<" "<<findUocChungArray(a,na);

    return 0;
}
