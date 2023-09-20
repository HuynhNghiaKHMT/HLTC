#include <iostream>
using namespace std;

void inputArray(int a[],int n){
    for(int i = 0;i < n; i++)
        cin>>a[i];
}
void outputArray(int a[],int n){
    for(int i = 0;i < n; i++)
        cout<<a[i]<<" ";
}
int findMin(int a[],int n){
    int minn = a[0];
    for(int i = 1;i < n; i++){
        if(a[i]<minn)
            minn = a[i];
    }
    return minn;
}
int VTD(int a[],int n,int minValue){
    int vt;
    for(int i = 0;i < n; i++){
        if(a[i]==minValue){
            vt = i;
            break;
        }
    }
    return vt;
}
int VTC(int a[],int n,int minValue){
    int vt;
    for(int i = 0;i < n; i++){
        if(a[i]==minValue){
            vt = i;
        }
    }
    return vt;
}
void countMin(int a[],int n,int minValue){
    int dem = 0;
    for(int i = 0;i < n; i++){
        if(a[i]==minValue)
            dem++;
    }
    cout<<"Gia tri nho nhat la "<<minValue<<" va xuat hien "<<dem<<" lan trong mang"<<endl;
    cout<<minValue<<" xuat hien lan dau tien tai vi tri "<<VTD(a,n,minValue)<<" trong mang"<<endl;
    cout<<minValue<<" xuat hien lan cuoi cung tai vi tri "<<VTC(a,n,minValue)<<" trong mang";
}

int main()
{
    int n, a[10000];
    cin>>n;
    inputArray(a,n);
    cout<<"Mang vua nhap:"<<endl;
    outputArray(a,n);
    cout<<endl;
    int minValue=findMin(a,n);
    countMin(a,n,minValue);

    return 0;
}
