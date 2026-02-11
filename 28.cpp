#include <iostream>
using namespace std;
int main (){
    int arr[5] = {0};
    int sumeven = 0;
    int sumodd = 0;
    int element;
    for (int i = 1 ; i<=5 ; i++){
        cout << "Enter a element" << i << ":";
        cin >> arr[i];
        if (arr[i] % 2 == 0){
            sumeven +=arr[i];
        }
        else {
            sumodd +=arr[i];
        }
    }
    cout << "Sum of even numbers is:" << sumeven << "\n";
    cout << "Sum of odd numbers is: " << sumodd << endl;
return 0;
}