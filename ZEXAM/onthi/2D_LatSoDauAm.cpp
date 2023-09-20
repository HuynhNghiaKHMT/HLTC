#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,a[100][100];
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            cin>>a[i][j];
        }
    }
    cout<<"Matrix:"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

        cout<<abs(a[i][j])<<" ";
        }
    cout<<endl;
    }

    return 0;
}
