#include <iostream>

using namespace std;

int main()
{
    int m,n,a[100][100];
    int sum = 0;

    cout<<"Nhap so cot: ";
    cin>>n;
    cout<<"Nhap so hang: ";
    cin>>m;

    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"n["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }

    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){

        sum = sum + a[i][j];
        }

    }
    cout<<sum;

    return 0;
}
