#include <iostream>
using namespace std;

void inputMatrix(int a[][50],int &n){
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        cin>>a[i][j];
        }
    }
}
void outputMatrix(int a[][50],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int sumEle(int a[][50],int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
                if(i+j>=n-1)
                    sum = sum + a[i][j];
        }
    }
    return sum;
}
int main()
{
    int n,a[50][50];
    inputMatrix(a,n);
    cout<<"Matrix:\n";
    outputMatrix(a,n);
    cout<<"Sum = "<<sumEle(a,n);
    return 0;
}



