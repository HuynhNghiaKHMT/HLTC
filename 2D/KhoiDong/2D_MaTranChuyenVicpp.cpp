#include <iostream>
using namespace std;

int main()
{
    float a[100][100],m,n;

    cin>>n>>m;
    for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>> a[i][j];
        }
    }

    for( int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<< a[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;

}
