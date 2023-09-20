#include <iostream>
using namespace std;

int const MAXR = 100, MAXC = 100;

void NhapMaTran(int a[][MAXC], int &n){

    cin>>n;

    for( int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>> a[i][j];
        }
    }
}

bool isMaTranDonVi(int a[][MAXC], int n){
    for( int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

            if (i != j && a[i][j]!=0)
                return 0;
            if (i == j && a[i][j]!=1)
                return 0;
        }
     }

    return 1;

}

int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout <<  std::boolalpha << isMaTranDonVi(a, n);
    return 0;
}
