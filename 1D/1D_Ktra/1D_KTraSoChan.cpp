#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, a[100];
    cin>>n;
    int i;

    for (int i=0; i<n ; i++){
        cin>>a[i];
    }

    for (int i=0; i<n ; i++){
        if (a[i]%2!=0){
            cout<<"no";
            break;
        }

        if (i == n-1)
            cout<<"yes";
    }

    return 0;
}


// ĐẶT CỜ HIỆU

int main () {
    int n,a[10000];
    cin >> n;
    int flat=0;

    for (int i=0; i< n;i++) {
        cin >> a[i];
    }

    for (int i =0; i<n; i++){
        if (a[i]%2!=0){
            flat = 1;
            break;
        }
    }

    if (flat == 0)
            cout << "yes";
    else
            cout << "no";



// DÙNG HÀM CHECK

 int check (int a[], int n)
 {
    for (int i =0; i<n ; i++){
        if (a[i]%2!=0)
            return 0;
    }
    return 1;
 }

 int main()
 {
    int n,a[10000];
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    if (check(a,n) == 1) cout<<"yes";
    else                 cout<<"no";

    return 0;

 }
