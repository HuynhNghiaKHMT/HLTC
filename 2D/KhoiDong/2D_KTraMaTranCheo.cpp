#include <iostream>
using namespace std;

int main()
{
    float a[100][100],n,m;
    int dem = 1;
    cin>>n>>m;

    for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>> a[i][j];
        }
    }

     for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){

            if (i != j && a[i][j]!=0)
                dem = 0;

        }
     }

    if(dem == 1) cout<<"Yes";
    else cout<<"No";

    return 0;
}
