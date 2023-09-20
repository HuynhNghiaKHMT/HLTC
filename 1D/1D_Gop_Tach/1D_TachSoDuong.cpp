#include <iostream>
#include <math.h>
using namespace std;

void inputArray(int a[],int &na){
    cin>>na;
    for(int i = 0; i < na; i++){
        cin>>a[i];
    }
}
void outputArray(int a[],int na){

    for(int i = 0; i < na; i++){
        cout<<a[i]<<" ";
    }
}
void getPositiveNumber(int a[],int na,int b[],int &nb){
    int j=0;
    for(int i = 0; i < na; i++){
        if(a[i]>0){
        b[j] = a[i];
        j++;
        }

    }
    nb=j;
}

int main()
{
    int na, a[100], nb, b[100];
    inputArray(a,na);
    cout<<"Array a:"<<endl;
    outputArray(a,na);
    cout<<endl;

    getPositiveNumber(a,na,b,nb);

    cout<<"Array b:"<<endl;
    outputArray(b,nb);

    return 0;
}
