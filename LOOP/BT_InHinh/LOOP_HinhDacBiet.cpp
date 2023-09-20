#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    m=n;

    for (int i=n-1; i>=0; i--){
        for (int j=0; j<2*n+1; j++){

        if(j>=m-i && j<=m+i) cout<<". ";
        else                 cout<<"* ";
    }
    cout<<endl;
    }

    for (int i=0; i<2*n+1; i++){
            cout<<"* ";
    }
    cout<<endl;

    for (int i=0; i<n; i++){
        for (int j=0; j<2*n+1; j++){

        if(j>=m-i && j<=m+i) cout<<". ";
        else                 cout<<"* ";
    }
    cout<<endl;
    }

    return 0;
}
