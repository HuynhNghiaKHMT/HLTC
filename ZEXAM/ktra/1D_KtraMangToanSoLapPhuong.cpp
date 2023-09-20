/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>

using namespace std;

void inputArray(int a[],int &n){
    cin>>n;
    for(int i = 0;i < n; i++)
        cin>>a[i];
}
void outputArray(int a[],int n){
    for(int i = 0;i < n; i++)
        cout<<a[i]<<" ";
}

int check(int x){
    int s = 0,i = 2;
     while(s<x){
        s = i*i*i;
        i++;
    }
    if(s==x) return 1;
    else     return 0;
}
int isTotalCube(int a[],int n){
    for (int i = 0; i < n ;i++){
        if (check(a[i])==0) return 0;
    }
    return 1;
}
int maxCube(int a[],int n){
    int maxn = a[0];
    for (int i = 0; i < n ;i++){
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

    if (isTotalCube(a,n)==1)
    {
        cout <<"Mang toan so lap phuong"<<endl;
        cout << "So lap phuong lon nhat: "<<maxCube(a,n);
    }
    else cout<<"Mang khong phai chua toan cac so lap phuong";
    return 0;
}
