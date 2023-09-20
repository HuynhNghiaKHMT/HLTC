/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

void tamGiacVuong_3()
{
    int n;
    cin>>n;

  for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{

    tamGiacVuong_3();
    return 0;
}

