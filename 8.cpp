#include <iostream>
using namespace std;
int main (){
    int n;
    cout<< "Enter the value of n :";
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        if(i % 3 ==0 && i % 5 ==0){
            cout<< "BuzzFuzz\n";
        }
        else if (i % 3 ==0){
            cout<< "Buzz\n";
        }
        else if (i % 5 ==0){
            cout << "Fuzz\n";
        }
        else{
            cout << i << "\n";
        }
    }
    return 0;
}