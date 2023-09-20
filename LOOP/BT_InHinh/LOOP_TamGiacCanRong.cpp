#include <iostream>
using namespace std;

// in tam giac can nguoc rong

void tamGiacCan_6()
{
int n,k;
    cin>>n;
    k = n ;

    if (n<3 || n>10) cout<<"Khong thoa dieu kien nhap.";
    else{
        for (int i = 1; i <= 2*n-1; i++){
            cout<<"* ";
        }
        cout<<endl;
        for (int i = n-2; i>=0; i--){
            for ( int j = 1; j<=2*n-1; j++){
                if ( j == k - i|| j == k+i) cout<<"* ";
                else cout<<"  ";
            }
        cout<<endl;
        }
    }

}

int main()
{
    tamGiacCan_6();
    return 0;
}


//in tam giac can rong

void tamGiacCan_6()
{
    int n;
    int i,k;
    cin>>n;
    k = n;

    if (n<3 || n>10) cout<<"Khong thoa dieu kien nhap.";
    else{
        for (int i = 0; i<n-1; i++){
            for ( int j = 1; j<=2*n-1; j++){
                if ( j == k - i || j == k+i)
                     cout<<"* ";
                else cout<<"  ";
            }
            cout<<endl;
        }
        for (int i = 0; i<2*n-1; i++){
            cout<<"* ";
        }
    }
}

int main()
{
    tamGiacCan_6();
    return 0;
}
