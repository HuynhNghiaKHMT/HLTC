#include <iostream>

using namespace std;

void inputArray(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
}
void vertical_invert(int a[][100], int n, int m){
    int ptt;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m/2; j++){
                ptt = a[i][j];
                a[i][j] = a[i][m-1-j];
                a[i][m-1-j] = ptt;
        }
    }
}
void outputArray(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;


    int a[100][100];

    inputArray(a, n, m);

    vertical_invert(a, n, m);

    outputArray(a, n, m);

    return 0;
}
