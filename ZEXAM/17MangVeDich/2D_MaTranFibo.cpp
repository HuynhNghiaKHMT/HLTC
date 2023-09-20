#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

void Nhapmang(int a[][MAX], int &n){
    cin>>n;
}
void Xuatmang(int a[][MAX], int n){
    int b[2*n-2+1];
    b[0] = 1;
    b[1] = 1;
    for(int i = 2; i <= 2*n-2; i++){
        b[i] = b[i-1]+b[i-2];
    }
    for(int  i = 0; i < n; i++){
        for(int  j = 0; j < n; j++){
            a[i][j]=b[i+j];
        cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
}
int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);

    return 0;
}
