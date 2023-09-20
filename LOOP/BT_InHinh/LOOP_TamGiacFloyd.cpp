#include <iostream>
#include <iomanip>
using namespace std;

//Tam giac Floyd
int main()
{
    int n;
    cin>>n;
    int dem =1;

    for (int i = 1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<< setw(3) <<dem<<" ";
            dem++;
        }
    cout<<endl;
    }

    return 0;
}
