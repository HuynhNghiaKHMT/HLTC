#include <iostream>
#include <iomanip>
using namespace std;
// Trong BT a[1000] nhưng muốn chạy đc trong máy thì a[100];
void inputArray(int a[][100],int m,int n){
    for(int i = 0; i < m; i++){
        for(int j = 0;  j < n; j++)
            cin>>a[i][j];
    }
}
int FindMaxNumInColum(int a[][100],int m,int n){
    int dem,max = 0;
    for(int i = 0; i < m; i++){
        int x = a[i][n];
        dem = 0;
        if(x<0) dem++;
        while(x!=0){
            dem++;
            x = x/10;
        }
        if(dem>max) max = dem;
    }
    return max;
}
void CanhLe(int a[][100],int m,int n){

    int b[100];
    for(int j = 0;  j < n; j++)
        b[j] = FindMaxNumInColum(a,m,j);

    for(int i = 0; i < m; i++){
        for(int j = 0;  j < n; j++)
           cout<<setw(b[j])<<a[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int a[100][100],m,n;
    cin>>m>>n;

    inputArray(a,m,n);
    CanhLe(a,m,n);

    return 0;
}
