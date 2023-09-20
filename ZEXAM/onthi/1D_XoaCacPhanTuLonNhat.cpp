#include <iostream>
using namespace std;

void inputArray(int a[],int n){
     for(int i = 0; i < n; i++)
        cin>>a[i];
}
int findMax(int a[],int n){
    int maxn = a[0];
    for(int i = 0; i < n; i++){
        if(a[i]>maxn)
            maxn = a[i];
    }
    return maxn;
}
void deleteEles(int a[],int &n,int maxv){

       for(int i = 0; i < n; ){
            if(a[i]==maxv){
                for(int j = i; j < n; j++)
                    a[j]=a[j+1];
                n--;
            }
            if(a[i]!=maxv) i++;
       }
}
void outputArray(int a[],int n){
    if(n!=0){
        for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    }
    else cout<<"Mang rong";

}

int main()
{
    int n; int a[100];
    cin>>n;
    inputArray(a,n);
    int maxValue=findMax(a,n);
    cout<<maxValue<<endl;
    deleteEles(a,n,maxValue);
    outputArray(a,n);

    return 0;
}
