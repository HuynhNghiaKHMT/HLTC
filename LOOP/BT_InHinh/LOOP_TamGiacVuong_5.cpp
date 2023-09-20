#include <iostream>
using namespace std;

void tamGiacVuong_5()
{
    int n;
    cin>>n;

    if(n<3 || n>10) cout<<"Khong thoa dieu kien nhap.";
    else
    {
        for (int i=1; i<n; i++){
            for (int j=1; j<=i; j++){

                if(j==1 || j==i) cout<<"* ";
                else             cout<<"  ";

            }
            cout<<endl;
        }
        for (int j=1; j<=n; j++)
            cout<<"* ";

    }

}
int main()
{
    tamGiacVuong_5();
    return 0;
}
