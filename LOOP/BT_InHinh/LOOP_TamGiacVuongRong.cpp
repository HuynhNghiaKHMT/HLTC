#include <iostream>
using namespace std;

void tamGiacVuong_5()
{
    int n;
    cin>>n;

    if (n<3 || n>10) cout<<"Khong thoa dieu kien nhap.";
    else

        for (int i = 1; i < n ; i++){
            for (int j = 1; j<=n; j++){

                if (j==i  || j ==1 ) cout<<"* ";
                else                 cout<<"  ";
            }
            cout<<endl;
        }

        for (int i = 1; i <= n ; i++){
                cout<<"* ";
        }
}

int main()
{
    tamGiacVuong_5();
    return 0;
}
