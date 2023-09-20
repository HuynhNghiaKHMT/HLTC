#include <iostream>
using namespace std;

void inputMatrix(int a[][100], int &n);
void outputMatrix(int a[][100], int n);
/* Ham kiem tra ma tran tam giac tren
 La ma tran tam giac tren neu moi phan tu o ben duoi duong cheo chinh bang 0*/
int isUpperTriangularmatrix(int a[][100], int n);

int main()
{
    int a[100][100];
    int n;
    inputMatrix(a,n);
    cout<<"Matrix: "<<endl;
    outputMatrix(a,n);

    if(isUpperTriangularmatrix(a,n)==0)
        cout<<"a is called an upper triangular matrix";

    return 0;
}

void inputMatrix(int a[][100], int &n){
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
}
void outputMatrix(int a[][100], int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        cout<<a[i][j]<<" ";

        cout<<endl;
    }
}
int isUpperTriangularmatrix(int a[][100], int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++)
            if(a[i][j]!=0)
                return 1;
    }
    return 0;
}
