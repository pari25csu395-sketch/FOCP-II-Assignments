#include <iostream>
using namespace std;
int main (){
    int arr[5] = {0};
    int plus;
for (int i = 1 ; i<=5 ; i++){
    cout << "Enter element" << i <<":";
    cin >> arr[1];
    if (arr[i] % 3 == 0 && arr[i] % 5 == 0){
        plus++ ;
    }
}
cout << plus << " numbers are both divisible by both 3 and 5";
return 0;
}