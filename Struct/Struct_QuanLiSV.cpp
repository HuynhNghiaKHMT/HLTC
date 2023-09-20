
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include <iostream>
#include <math.h>
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
    }
}
void outputArrayStudents(STUDENT a[],int n){
    for(int i = 0; i < n; i++){
        cout<<a[i].id<<" |";
        cout<<a[i].name<<" |";
        cout<<a[i].dob.day<<"/"<<a[i].dob.month<<"/"<<a[i].dob.year<<" |";
        cout<<a[i].math<<" |"<<a[i].phy<<" |"<<a[i].chem<<" |";
        cout<<(a[i].math + a[i].phy + a[i].chem)/3<<endl;
    }
}

int main()
{
    STUDENT a[100];
    int n;

    inputArrayStudents(a,n);
    cout<<"ID\t|Full name\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
    outputArrayStudents(a,n);

    return 0;
}

