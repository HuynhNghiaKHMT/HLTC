//BT1: Tong cac Uoc chung cua a va b
#include <iostream>

int input(){
    int a;
    std::cin>>a;
    return a;
}
void input(int &b){
    std::cin>>b;
}
int TongUocChung(int a, int b){
    int sum = 0;
    for(int i=1; i<a; i++){
        if(a%i==0 && b%i==0)
            sum += i;
    }
    return sum;
}
int main(){
    int a, b;
    a=input();
    input(b);
    std::cout << TongUocChung(a, b);
    return 0;
}


