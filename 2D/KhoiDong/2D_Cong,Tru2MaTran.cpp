#include <iostream>
#include <iomanip>
using namespace std;

int input(){
    int x;
    cin>>x;
    return x;
}
void invalue(int x,int y,int z[100][100]){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<"n["<<i<<"]["<<j<<"]:";
            cin>>z[i][j];
        }
    }
}
int main()
{
    int m,n,a,b,k[100][100],c[100][100];

    for(int i = 1; i<=2; i++){

    cout<<"Mang tran "<<i<<": \n";
    cout<<"Nhap so hang: ";
    if(i==2) a=input();
    else     m=input();
    cout<<"Nhap so cot: ";
    if(i==2) {
        b=input();
        invalue(a,b,c);}
    else{
        n=input();
        invalue(m,n,k);}
    }
    if(m!=a || n!=b)
        cout<<"Hai Ma tran khong cung kich co.";
    else{
        cout<<"Ket qua phep tru 2 ma tran: \n";
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout<<setw(3)<<k[i][j]-c[i][j]<<" ";
            }
        cout<<endl;
        }
    }

    return 0;
}
