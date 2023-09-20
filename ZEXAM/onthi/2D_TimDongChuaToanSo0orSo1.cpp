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
int rowWithAll0sOr1s(int a[][100],int n){
    int maxs1,dem1,dem2;
    maxs1 = 0;
    for(int i = 0; i < n; i++){
        dem1 = 0;
        dem2 = 0;
        for(int j = 0; j < n; j++){
            if(a[i][j]==1)
                dem1++;
            if(a[i][j]==0)
                dem2++;
        }
        if(dem1==n || dem2==n){
            maxs1 = i;
            break;
        }
    }
    if(dem1==n || dem2==n) return maxs1;
    else                   return -1;
}

int main()
{
    int a[100][100];
    int n;
    inputMatrix(a,n);
    cout<<"Matrix: "<<endl;
    outputMatrix(a,n);

    int j = rowWithAll0sOr1s(a,n); //Tim dong chua toan so 0 hoac toan so 1, tra ve dong dau tien tim thay hoac -1 neu khong co
    if(j==-1) cout<<"No row has all 1s or all 0s"<<endl;
    else cout << "Index of row with all 1s or 0s is " << j<<endl;


    return 0;
}



