#include <iostream>
using namespace std;

int inputArray(int a[],int &n){
    cin>>n;
    if(n<1){
        cout<<"Mang rong";
        return 0;
    }
    else{
        for(int i = 0; i < n; i++)
            cin>>a[i];
        return 1;
    }
}
void outputArray(int a[],int n){
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
int check(int x){
    int j = 0;
    while(j*j*j<=x){
        if(j*j*j==x) return 1;
        j++;
    }
    return 0;
}
void listOfCubesWithEvenIndex(int a[],int n){
    int dem = 0;
    for(int i = 0; i < n; i+=2){
         if(check(a[i])==1){
            dem++;
            cout<<a[i]<<" ";
        }
    }
    if(dem!=0) cout<<"\nCo "<<dem<<" so thoa dieu kien";
    else       cout<<"Mang khong co so lap phuong o vi tri chan";
}
int main()
{
    int n, a[100];
    int i=inputArray(a,n); //i=0 thi nhap khong thanh cong, mang rong, i khac 0 thi mang co phan tu
    if(i!=0) //nhap thanh cong
    {
    cout<<"Mang vua nhap:"<<endl;
    outputArray(a,n);
    cout<<endl;
    cout<<"Danh sach cac so lap phuong o vi tri chan:"<<endl;
    listOfCubesWithEvenIndex(a,n);
    }
    return 0;
}
