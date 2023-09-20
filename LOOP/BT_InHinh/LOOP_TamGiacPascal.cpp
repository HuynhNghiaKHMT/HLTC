#include <iostream>
#include <iomanip>
using namespace std;

int gt (int n){

    int m = 1;
    for( int i=1; i<=n; i++ ){
        m = m*i;
    }
    return m;
}

int c (int k, int n){//(int n, int k)

    return gt(n)/(gt(k)*gt(n-k));

}

int main()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; i++){

        for (int j=0; j<=n-i ; j++){
            cout<<"  ";
        }
        for (int j = 0; j <= i; j++){
            cout<<setw(3)<<c(j,i)<<" ";//c(i, j)
        }
        cout<<endl;
    }

    return 0;
}
