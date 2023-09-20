#include <iostream>
using namespace std;

int main()
{
    float a[100][100],b[100][100],m,n,k;
    int sum;

    cin>>n>>m;
    for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>> a[i][j];
        }
    }
    cin>>m>>k;
    for( int i = 0; i < m; i++){
        for (int j = 0; j < k; j++){
            cin>> b[i][j];
        }
    }

    for( int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            sum = 0;
        for (int o = 0; o < m; o++){
            sum = sum + a[i][o]*b[o][j];
        }
        cout<<sum<<" ";
        }
    cout<<endl;
    }

    return 0;
}
