#include <iostream>
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
void reverseArray(int a[],int s,int e){
    while(s<e){
        if(a[s]%2==0 && a[e]%2==0){
                int ptt = a[s];
                a[s] = a[e];
                a[e] = ptt;
                s++;
                e--;
        }
        else if(a[s]%2==0 && a[e]%2!=0) e--;
        else if(a[s]%2!=0 && a[e]%2==0) s++;
        else if(a[s]%2!=0 && a[e]%2!=0){s++;e--;}
    }
}
int main()
{
    int a[100],n;
    inputArray(a,n);
    printArray(a, n);

    // Ham co 3 tham so, 2 tham so cuoi cung tuong ung voi chi so dau va chi so cuoi cua mang
    reverseArray(a, 0, n-1);

    cout << "Reversed array is" << endl;

    printArray(a, n);

    return 0;
}
