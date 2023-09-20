/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>

using namespace std;

int isSumOfConsecutive(int n){
    int sum;
    int dem=0;

    for(int i = 1; i <= n ; i++){
        sum = i;
        for (int j = i+1 ; sum < n; j++){
            sum = sum + j;
            if(sum == n){
                dem++;
            }
        }
    }
    return dem;
}


int main()
{
    int n;cin>>n;
    cout <<isSumOfConsecutive(n)<< endl;
    return 0;
}

//Cách 2
//int isSumOfConsecutive(int n){
//    int sum;
//    int dem=0;
//    for(int i = 1; i < n ; i++){
//        for (int j = i ; sum <= n; j++){
//            sum = sum + j;
//            if(sum == n){
//                dem++;
//            }
//        }
//        sum = 0;
//    }
//    return dem;
//}
