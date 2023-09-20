#include <iostream>
#include <math.h>

using namespace std;

void inputArray(int a[],int &n){
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void printArray(int a[],int n){

    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
        cout<<endl;
}
void removeDups(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; ){
            if(a[i]==a[j]){
                for(int k = j; k < n; k++)
                    a[k]=a[k+1];

                n--;
            }
            if(a[i]!=a[j]) j++;
       }
    }
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
int main()
{
    int a[100],n;
    inputArray(a,n);
    printArray(a, n);

    cout << "After removing the duplicate elements:" << endl;

    removeDups(a, n);

    return 0;
}

//Cach 2: cho b[0] = a[0], roi check tu a[1] den a[n];
int check(int b[],int x,int n){
    for(int i = 0; i < n; i++){
        if(x==b[i]) return 0;
    }
    return 1;
}
void removeDups(int a[], int n){
    int b[100],nb = 1;
    b[0]=a[0];
    for(int i = 1; i < n; i++){
        if(check(b,a[i],nb)==1){
            b[nb++]=a[i];
        }
    }

    for(int i = 0; i < nb; i++)
        cout<<b[i]<<" ";
}
