#include <iostream>
#include <math.h>

using namespace std;

void inputArray(int car[],int &n){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>car[i];
    }
}
int totalFine(int car[], int n, int date, int fine){
    int c = 0;
    int l = 0;
    for(int i = 0; i < n; i++){
        if(car[i]%2==0)
            c++;
        else l++;
    }
    if(date%2==0) return l*fine;
    else            return c*fine;

}
int main()
{
    int car[100],n;
    inputArray(car,n); // Nhap so luong xe va mang cac bien so xe

    int date; cin>>date; // nhap ngay
    int fine; cin>>fine; //so tien phat cho moi xe khi vi pham, fine = 250

    //Goi ham tinh tong so tien phat thu ve trong ngay
    cout << totalFine(car, n, date, fine);

    return 0;
}
