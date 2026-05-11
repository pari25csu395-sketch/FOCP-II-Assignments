#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int evenSum = 0, oddSum = 0;

    cout << "Enter 5 numbers:\n";

    for(int i=0; i<5; i++) {

        cin >> arr[i];

        if(arr[i] % 2 == 0)
            evenSum += arr[i];

        else
            oddSum += arr[i];
    }

    cout << "Sum of Even Numbers = " << evenSum << endl;
    cout << "Sum of Odd Numbers = " << oddSum;

    return 0;
}