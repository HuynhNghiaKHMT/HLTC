#include <iostream>
using namespace std;

int main()
{
int n;
    cin>>n;
    int *a = new int [n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int x;
    for(int i = 0; i < m; i++){
        cin>>x;
        int j = 0;
        for(; j < n; j++){
            if(x==a[j]){
                cout<<j<<endl;
                break;
            }
        }
        if(j == n ) cout<<-1<<endl;
    }

    return 0;
}
