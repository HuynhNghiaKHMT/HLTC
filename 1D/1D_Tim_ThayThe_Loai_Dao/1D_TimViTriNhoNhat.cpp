#include <iostream>
#include <math.h>

using namespace std;

void inputArray(int a[],int &n){
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
}
void outputArray(int a[],int n){
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
int minn (int a[],int n){
    int minn = a[0];
    for (int i = 0; i < n; i++){
        if(a[i]<=minn){
            minn = a[i];
        }
    }
    return minn;
}
int  vitriMinDau(int a[],int n){
    int vt;
    for (int i = 0; i < n; i++){
        if(a[i]==minn(a,n)){
            vt = i;
            break;
        }
    }
    return vt;
}
int vitriMinCuoi(int a[],int n){
    int vt;
    for (int i = 0; i < n; i++){
        if(a[i]<=minn(a,n)){
        vt = i;
        }
    }
    return vt;
}
int main()
{
    int n, a[100];
    inputArray(a,n);
    cout<<"Array:"<<endl;
    outputArray(a,n);
    cout<<endl;


    cout<<"Vi tri phan tu nho nhat dau tien trong mang: " << vitriMinDau(a,n)<<endl;
    cout<<"Vi tri phan tu nho nhat cuoi cung trong mang: "<<vitriMinCuoi(a,n)<<endl;

    return 0;
}
