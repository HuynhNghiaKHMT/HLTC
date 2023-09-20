#include <iostream>
#include <math.h>
using namespace std;

void inputArray(int a[],int &n){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
}
void outputArray(int a[],int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
int deleteElement(int a[],int &n,int pos){

    if(pos<0 || pos>=n) {
        cout<<endl;
        cout<<"Loi xoa: Vi tri khong hop le";
        return -1;
    }
    else{
        for(int i = pos; i <= n; i++){
            a[i]= a[i+1];
        }
        n = n -1;

        return 1;
    }
}
int main()
{
    int n, a[100],pos,x;
    inputArray(a,n);
    cin>>pos>>x;
    cout<<"Before: ";
    outputArray(a,n);

    insertElement(a,n,pos,x);

    cout<<"\nAfter: ";
    outputArray(a,n);

    return 0;
}
