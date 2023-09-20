#include <iostream>
#include <cmath>
#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[][MAXC],int &na){
    std::cin>>na;
    for(int i = 1; i <= na; i++){
        for(int j = 1; j <= na; j++)
        std::cin>>a[i][j];
    }
}
long long Dinhthuc2(int a[][MAXC],int na){
    if(na==2)
    return (long long )a[1][1]*(long long )a[2][2]-(long long )a[2][1]*(long long )a[1][2];
    else return a[1][1];
}
long long TinhDinhThuc(int a[][MAXC],int na){
    if(na<=2)
        return Dinhthuc2(a,na);
    else{
        int b[MAXR][MAXC],m,n;
        long long sum = 0;
        for(int i = 1; i <= na; i++){
            m = 1;
            for(int j = 1 ; j <= na; j++){
                if(i==j) continue;
                else{
                    n = 1;
                    for(int k = 2 ; k <= na; k++)
                        b[m][n++]=a[j][k];

                    if(n==na) m++;
                }
            }
            sum += pow(-1,1+i)*a[i][1]*TinhDinhThuc(b,n-1);
        }
        return sum;
    }
}
