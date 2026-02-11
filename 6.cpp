#include <iostream>
using namespace std;
int main(){
    int n;
    float basic, bonus, net;
    cout << "enter the no of employees: ";
    cin>> n;

    for(int i=1 ; i<=n ; i++){
        cout<< "enter the basic salary of employee " << i << endl;
        cin >> basic;
        
        bonus=0.12 * basic;
        net= basic +bonus;

        cout<< "bonus(12%)" << bonus << endl;
        cout<< "net salary" << net << endl;
        return 0;
    }

}