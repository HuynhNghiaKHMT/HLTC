#include <iostream>
#include <math.h>
using namespace std;

void inputArray(int a[],int &na,int b[],int &nb){
     cin>>na>>nb;
     for(int i = 0; i < na; i++){
        cin>>a[i];
    }

    for(int i = 0; i < nb; i++){
        cin>>b[i];
    }
 }

 void outputArray(int a[],int na){
     for(int i = 0; i < na; i++){
        cout<<a[i]<<" ";
    }
 }

void connect(int a[],int na,int b[],int nb,int c[],int &nc){
    nc=0;
    for(int i = 0; i < nb; i++){
        c[nc++]= b[i];
    }
    for(int i = na-1; i >= 0; i--){
        c[nc++] = a[i];
    }

}

int main()
{
    int na, a[100], nb, b[100], nc, c[100];
    inputArray(a,na,b,nb);
    cout<<"Array a: "   ;outputArray(a,na);
    cout<<"\nArray b: " ;outputArray(b,nb);

    connect(a,na,b,nb,c,nc);

    cout<<"\nArray c: ";outputArray(c,nc);

    return 0;
}
