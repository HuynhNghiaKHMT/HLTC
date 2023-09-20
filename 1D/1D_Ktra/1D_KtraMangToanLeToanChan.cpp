//Dung ham
#include <iostream>
using namespace std;

int toanle (int a[],int n){

     for(int i = 0; i < n; i++){
        if(a[i]%2==0)
            return 0;
     }
     return 1;
}

int toanchan (int a[],int n){

     for(int i = 0; i < n; i++){
        if(a[i]%2!=0)
            return 0;
     }
     return 1;
}

int main()
{
    int a[100],n;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    if (n==0) cout<<"Mang rong";
    else if(toanchan (a, n)==1) cout<<"Mang chua toan so chan";
    else if(toanle (a, n)==1) cout<<"Mang chua toan so le";
    else cout<<"Mang khong chua toan so chan hay so le";


    return 0;
}


//Khong dung ham
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, a[100];

cin>>n;
    int x=0;
    int y=0;

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i]%2!=0)
            x++;
        if(a[i]%2==0)
            y++;
    }

    if(y!=0 && x==0) cout<<"Mang chua toan so chan";
    else if(x!=0 && y==0) cout<<"Mang chua toan so le";
    else if(x!=0 && y!=0) cout<<"Mang khong chua toan so chan hay so le";
    else cout<<"Mang rong";

    return 0;
}
