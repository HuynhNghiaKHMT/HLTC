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
int check(int a[][100],int i,int n){
    int dem=0;
    for(int j = 0; j < n; j++)
        if(a[i][j]==1) dem++;

    return dem;
}
int rowWithMax1s(int a[][100],int n){
    int maxs1,vt,dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j]==1)
                dem++;
        }
        if(dem!=0){
            maxs1 = i;
            break;
        }
    }
    if(dem!=0){
        for(int i = maxs1; i < n; i++){
            if(check(a,i,n)>dem)
                maxs1 = i;
        }
        return maxs1;
    }
    else return -1;
}

int main()
{
    int a[100][100];
    int n;
    inputMatrix(a,n);
    cout<<"Matrix: "<<endl;
    outputMatrix(a,n);

    int i = rowWithMax1s(a,n); //Tim dong co chua nhieu so 1 nhat
    if(i==-1) cout<<"No row has 1"<<endl;
    else cout << "Index of row with maximum number of 1s is " << i<<endl;

    return 0;
}



