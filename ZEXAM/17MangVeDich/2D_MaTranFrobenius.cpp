#include <iostream>
using namespace std;
#define MAX 100

void inputa(double arr[][MAX],int m,int n){
    for(int i = 0; i < m; i++){
        for(int  j = 0; j < n; j++)
            cin>>arr[i][j];
    }
}
int checkMatrix(double arr[][MAX],int a,int b){
    for(int i = 0; i < a; i++){
        if(arr[i][i]!=1)
            return 0;
        }
    return 1;
}
int checkColumUp(double arr[][MAX],int a,int b){
     for(int i = 0; i < a; i++){
        for(int j = i+1; j < b; j++)
            if(arr[i][j]!=0) return 0;
     }
     return 1;
}
int checkColumDown(double arr[][MAX],int a,int b){
    int dem;
    for(int i = 0; i < a; i++){
        dem = 0;
        for(int  j = 0; j < i; j++){
            if(arr[i][j]!=0){
                for(int k = i; k < a;k++){
                    if(arr[k][j]==0) return 0;
                }
                dem++;
            }
            if(dem>=2) return 0;
        }
    }
    return 1;
}
int MatrixFrobenius(double arr[][MAX],int a,int b){
    if(checkMatrix(arr,a,b)==1 && checkColumUp(arr,a,b)==1){
        if(checkColumDown(arr,a,b)==0)
            return 0;
        else
            return 1;
    }
    else  return 0;
}

int main()
{
    int a,b;
    double arr[MAX][MAX];
    cin>>a>>b;
    inputa(arr,a,b);

    if(MatrixFrobenius(arr,a,b)==0) cout<<"No";
    else cout<<"Yes";

    return 0;
}
