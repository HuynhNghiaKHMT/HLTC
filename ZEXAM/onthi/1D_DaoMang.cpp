#include <iostream>
#include <math.h>

using namespace std;

void inputArray(int a[],int &n){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
}
void printArray(int a[],int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverseArray(int a[],int start,int endn){

    int ptt;
    while(start<endn){
        ptt=a[start];
        a[start]=a[endn];
        a[endn]=ptt;
        start++;
        endn--;
    }
}
int main()
{
    int a[100],n;
    inputArray(a,n);
    // In mang ban dau
    printArray(a, n);

    /* Goi ham thuc hien dao mang
    *  Ham co 3 tham so, 2 tham so cuoi cung tuong ung voi chi so dau va chi so cuoi cua mang
    */
    reverseArray(a, 0, n-1);

    cout << "Reversed array is" << endl;

    // In mang sau khi dao
    printArray(a, n);

    return 0;
}
