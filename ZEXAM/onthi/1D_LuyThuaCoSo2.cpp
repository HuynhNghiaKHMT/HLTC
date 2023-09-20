#include <iostream>
#include <math.h>

using namespace std;

void inputArray(int a[],int &n){
    cin>>n;
 for(int i = 0; i < n; i++)
        cin>>a[i];
}
void outputArray(int a[],int n){
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
bool isPow (int n){
     for(int i = 0;pow(2,i)<=n ; i++){
            if(pow(2,i)==n) return 1;
     }
     return 0;
}
int isTotalPow(int a[],int n){

    for(int i = 0; i < n ; i++){
        if(isPow(a[i])!=1){
            return 0;
            break;
        }
    }
    return 1;
}
int maxPow (int a[],int n){
    if(isTotalPow(a,n)==1){
        int maxn = a[0];
        for(int i = 1; i < n; i++){
            if(a[i]>maxn)
                maxn = a[i];
        }
        return maxn;
    }

int main()
{
    int n, a[100];
    inputArray(a,n);
    cout<<"Array:"<<endl;
    outputArray(a,n);
    cout<<endl;

    if (isTotalPow(a,n)==1)
    {
        cout <<"Mang toan so luy thua cua co so 2"<<endl;
        cout << "So luy thua cua co so 2 lon nhat: "<<maxPow (a,n);
    }
    else cout<<"Mang khong phai chua toan cac so luy thua cua co so 2";

    return 0;
}
