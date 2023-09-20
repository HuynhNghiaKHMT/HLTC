#include <iostream>
using namespace std;

void inputMatrix(int a[][100],int &n){
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin>>a[i][j];
  }
}
void outputMatrix(int a[][100],int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int rowWithMaximumSum(int a[][100],int n){
    int sum, maxr = -1, vt ;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < n; j++)
            sum += a[i][j];
        if (sum > maxr) {
            maxr = sum;
            vt = i;
        }
    }
    return vt;
}

int main()
{
    int a[100][100];
    int n;
    inputMatrix(a,n);
    cout<<"Matrix: "<<endl;
    outputMatrix(a,n);

    //Tim dong co tong lon nhat trong ma tran
    cout << "Row " <<  rowWithMaximumSum(a,n) << " has max sum "<<endl;

    return 0;
}


