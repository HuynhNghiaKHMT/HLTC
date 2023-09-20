#include <iostream>
using namespace std;

void inputArray(int *&a,int &n){
    cin>>n;
    a = new int [n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
//Cach 1:
int binarySearch2(int *a,int n,int x){
    int l = 0, r = n-1;
    do{
        int mid = (l+r)/2;
        if(x==a[mid]){
            while(x==a[mid]){
                mid++;
            }
            return mid - 1;
        }
        else if(x<a[mid])
            r = mid - 1;
        else
            l = mid + 1;

    }while(r>=l);
    return -1;
}

int main()
{
    int n, *a = NULL;
    inputArray(a,n); //Luu y van de tham chieu cho con tro a va n
    // nhap cac gia tri can tim, neu nhap -1 thi ket thuc viec tim kiem
    int x;
    while(1){
        cin>>x;
        if(x==-1)break;
        cout<<binarySearch2(a,n,x)<<endl;
    }

    return 0;
}

