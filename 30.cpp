#include <iostream>
using namespace std;

int main() {

    int salary[10];
    int total = 0;
    float average;

    cout << "Enter salaries:\n";

    for(int i=0; i<10; i++) {

        cin >> salary[i];
        total += salary[i];
    }

    average = total / 10.0;

    cout << "Total Salary = " << total << endl;
    cout << "Average Salary = " << average;

    return 0;
}