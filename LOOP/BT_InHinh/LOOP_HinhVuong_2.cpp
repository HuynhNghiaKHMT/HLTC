#include <iostream>

void hinhVuong_3();
int main() {
    hinhVuong_3();
    return 0;
}
void hinhVuong_3(){

    int n;
    std::cin>>n;

    if(n<3 || n>20) std::cout<<"Khong thoa dieu kien nhap.";
    else{

        for(int i =1; i<=n/2; i++){
            for(int j=0; j<n; j++){
                if(j==i-1 || j==n-i || j==0 || j==n-1 || i==1)
                     std::cout<<"* ";
                else std::cout<<"  ";
            }
        std::cout<<"\n";
        }
        if(n%2==0){
            for(int i =(n-2)/2; i>0; i--){
                for(int j=0; j<n; j++){
                if(j==0+i || j==n-1-i || j==0 || j==n-1)
                    std::cout<<"* ";
                else std::cout<<"  ";
                }
            std::cout<<"\n";
            }

            for(int i =1; i<=n; i++)
                std::cout<<"* ";
        }
        else {
            for(int i =(n-1)/2; i>=0; i--){
                for(int j=0; j<n; j++){
                    if(j==0+i || j==n-1-i || j==0 || j==n-1 || i==0)
                        std::cout<<"* ";
                    else std::cout<<"  ";
                }
            std::cout<<"\n";
            }
        }
    }
}
