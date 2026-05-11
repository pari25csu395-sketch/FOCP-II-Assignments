#include <iostream>
using namespace std;

int main() {

    int n, rem, sum=0, temp;

    cout<<"Enter number: ";
    cin>>n;

    temp = n;

    while(n>0) {

        rem = n%10;

        sum = sum + (rem*rem*rem);

        n = n/10;
    }

    if(sum==temp)
        cout<<"Armstrong Number";

    else
        cout<<"Not Armstrong";

    return 0;
}