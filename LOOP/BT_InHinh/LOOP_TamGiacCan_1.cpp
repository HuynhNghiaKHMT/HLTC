/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

void tamGiacCanChuSo_1();

int main() {
    tamGiacCanChuSo_1();
    return 0;
}

using namespace std;
void tamGiacCanChuSo_1(){
int n;
    cin>>n;

    if(n<3 || n>9) cout<<"Khong thoa dieu kien nhap.";
    else
    {
        for(int i=1; i<=n; i++){
            for(int j=n-i; j>0; j--){
                cout<<"  ";
            }
            for(int k=i; k>0; k--){
                cout<<i<<"   ";
            }
        cout<<endl;
        }
    }
}














    }
