/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

void tamGiacCan_2()
{
    int n;
    cin>>n;

    if(n<3 || n>10) cout<<"Khong thoa dieu kien nhap.";
    else
    {
        for (int i=0; i<n; i++){
            for (int j=0; j<i; j++){
                    cout<<"  ";
            }
            for (int k=i; k<=2*n-2-i; k++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

}
int main()
{

    tamGiacCan_2();
    return 0;
}
