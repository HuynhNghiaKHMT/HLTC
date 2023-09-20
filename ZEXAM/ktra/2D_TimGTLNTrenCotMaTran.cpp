#include <iostream>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  float a[n][m];

  for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin>>a[i][j];
  }
  float maxn;
  for(int j = 0; j < m; j++){
        maxn = a[0][j];
        for(int i = 0; i < n; i++){
            if(a[i][j]>maxn)
                maxn = a[i][j];
        }
        cout<<"Gia tri lon nhat tren cot "<<j<<" la: "<<maxn<<endl;
  }
    return 0;
}

