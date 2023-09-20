#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct DATE
{
    int day, month, year;
};
typedef struct STUDENT
{
    char id[11];
    char name[35];
    DATE dob;
    float math, phy, chem, aver;

} SV;
void inputArrayStudents(STUDENT a[],int &n){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i].id;
        cin.ignore();
        cin.getline(a[i].name,100);
        cin>>a[i].dob.day>>a[i].dob.month>>a[i].dob.year;
        cin>>a[i].math>>a[i].phy>>a[i].chem;
        a[i].aver = (a[i].math + a[i].phy + a[i].chem)/3;
    }
}
void outputStudent(SV a){

        cout<<a.id<<" |";
        cout<<a.name<<" |";
        cout<<a.dob.day<<"/"<<a.dob.month<<"/"<<a.dob.year<<" |";
        cout<<a.math<<" |"<<a.phy<<" |"<<a.chem<<" |";
        cout<<a.aver<<endl;

}
SV maxAverageScore(STUDENT a[],int n){
    int STT;
    float max = a[0].aver;
    for(int i = 0; i < n; i++){
        if(a[i].aver > max){
              max = a[i].aver;
              STT = i;
        }
    }
    return a[STT];
}

int main()
{
    STUDENT a[100];
    int n,i;
    char name[35];

    inputArrayStudents(a,n);


    cout<<"\nThe student with the highest average score:\n ";

    outputStudent(maxAverageScore(a,n));


    return 0;
}

