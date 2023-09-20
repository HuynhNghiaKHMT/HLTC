/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

void tamGiacVuong_4()
{
    int n;
    cin>>n;

    if(n<3 || n>10) cout<<"Khong thoa dieu kien nhap.";
    else
        for (int i=1; i<=n; i++){
            for(int j=1; j<i ; j++){
                cout<<"  ";
            }
            for (int k=i; k<=n; k++){
                cout<<"* ";
            }
            cout<<endl;
        }
}
int main()
{

    tamGiacVuong_4();
    return 0;
}
