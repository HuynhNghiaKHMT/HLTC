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
void outputArrayStudents(SV a[],int n){
    for(int i = 0; i < n; i++){
        cout<<a[i].id<<" |";
        cout<<a[i].name<<" |";
        cout<<a[i].dob.day<<"/"<<a[i].dob.month<<"/"<<a[i].dob.year<<" |";
        cout<<a[i].math<<" |"<<a[i].phy<<" |"<<a[i].chem<<" |";
        cout<<a[i].aver<<endl;
    }
}
void sortbyName(SV a[],int n){

    for(int i = 0; i < n; i++){
        int min = int(a[i].name[0]);
        for(int j = i; j < n; j++){
            if(int(a[j].name[0])<min){
                min = int(a[j].name[0]);
                swap(a[i],a[j]);
            }
        }
    }
}

int main()
{
    STUDENT a[100];
    int n,i;
    char name[35];

    inputArrayStudents(a,n);

    sortbyName(a,n);
    cout<<"\nList of students sorted: ";
    cout<<"\nID\t|Fullname\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
    outputArrayStudents(a,n);

    return 0;
}

