#include <iostream>
using namespace std;
int main(){
    float marks1 , marks2 , marks3 , marks4 , marks5 , total , perc;
    cout<< "Enter the marks of first subject: ";
    cin >> marks1;
    cout << "Enter the marks of second subject: ";
    cin >> marks2;
    cout<< "Enter the marks of third subject: ";
    cin >> marks3;
    cout<< "Enter the marks of fourth subject: ";
    cin >> marks4;
    cout<< "Enter the marks of fifth subject: ";
    cin >> marks5;
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    cout << "Total marks are:  " << total;
    perc = (total/500)*100;
    cout << "Percentage is :" << perc;
return 0;

}