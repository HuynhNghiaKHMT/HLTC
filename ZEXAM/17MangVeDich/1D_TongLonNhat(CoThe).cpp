#include <iostream>
using namespace std;

void input(int arr[],int a){
    for(int i = 0; i < a; i++){
            cin>>arr[i];
    }
}
int MINC(int arr[],int a){
    int VT = 0;
    int min = arr[0];
    for(int i = 0; i < a; i+=2){
        if(arr[i]<=min){
            min = arr[i];
            VT = i;
        }
    }
    return VT;
}
int MAXL(int arr[],int a){
    int VT = 0;
    int max = arr[1];
    for(int i = 1; i < a; i+=2){
        if(arr[i]>=max){
            max = arr[i];
            VT = i;
        }
    }
    return VT;
}
int SumMax(int arr[],int a){
    if(arr[MAXL(arr,a)]>arr[MINC(arr,a)])
        swap(arr[MAXL(arr,a)],arr[MINC(arr,a)]);

    long long sum = 0;
    for(int i = 0; i < a-1; i+=2)
        sum = sum + arr[i] - arr[i+1];

    if(a%2!=0)
    sum = sum + arr[a-1];

    return sum;
}
int main()
{
    int a;
    cin>>a;
    int arr[a];
    input(arr,a);

    cout<<SumMax(arr,a);

    return 0;
}
