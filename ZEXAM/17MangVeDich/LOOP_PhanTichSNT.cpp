#include <iostream>
#include <math.h>
using namespace std;
#define MAX 10000

void input(int a[],int &n){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
}
int SNT(int x){
    for(int i = 2; i <= sqrt(x); i++){
        if(x%i==0) return 0;
    }
    return 1;
}
void  AnalysisResults(int a[],int n){
    for(int i = 0; i < n; i++){
        int j,b[10000],k = 0;
        for(int j = a[i]; j > 1; ){
            if(a[i]%j==0 && SNT(j)==1){
                a[i] = a[i]/j;
                b[k++] = j;
            }
            else j--;
        }
        for(int i = 0; i < k; i++){
            if(i == k-1){
                cout<<b[i];
                break;
            }
            else
            cout<<b[i]<<" x ";
        }
    cout<<endl;
    }
}
int main()
{
    int n, a[MAX];
    input(a,n);
    AnalysisResults(a,n);

    return 0;
}
