#include <iostream>
using namespace std;

int main()
{
    float a[100][100],b[100][100],m,n;

    cin>>n>>m;
    for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>> a[i][j];
        }
    }

    cin>>n>>m;
    for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>> b[i][j];
        }
    }
    for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<< a[i][j] + b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}
