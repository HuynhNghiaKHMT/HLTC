#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    char x;

while(1){

    cout<<"MENU"<<endl;
    cout<<"t) Tao ra bang cuu chuong"<<endl;
    cout<<"d) Thoat chuong trinh"<<endl;
    cout<<"Moi ban lua chon: ";
    cin>>x;
    cout<<endl;

    if (x=='t'){
    cout<<"Moi ban nhap 1 so: ";
    cin>>n;
    cout<<endl;

    while(n < 1 || n > 9) { // while (1)
        if (n >= 1 && n <= 9) break;
        cout<<"Moi ban nhap 1 so tu 1 den 9: ";
        cin>>n;
        cout<<endl;
        }

        cout<<"BANG CUU CHUONG: "<<n<<endl;

        for (int i=1;i<=n;i++){
            for (int j=1; j<=10;j++){
                if (i*j/10==0)
                    cout<<"  ";
                else
                    cout<<" ";
                    cout<<i*j;
            }
            cout<<endl;
        }
    }
    else if (x=='d'){
        cout<<"Ban da chon thoat khoi chuong trinh. Cam on ban da su dung!";
        break;
        }
    else
        cout<<"Lua chon khong hop le"<<endl;
    }

    return 0;
}


//        for (int i = 1; i <= n; i++){
//            for (int j = 1; j <= 10; j++){
//                cout << setw(3) << i*j;
//
//            }
//                cout<<endl;
//        }
