#include <iostream>
using namespace std;

int main() {

    int n, rem, sum=0, fact, temp;

    cout<<"Enter number: ";
    cin>>n;

    temp = n;

    while(n>0) {

        rem = n%10;

        fact = 1;

        for(int i=1;i<=rem;i++) {
            fact = fact * i;
        }

        sum = sum + fact;

        n = n/10;
    }

    if(sum==temp)
        cout<<"Strong Number";

    else
        cout<<"Not Strong";

    return 0;
}