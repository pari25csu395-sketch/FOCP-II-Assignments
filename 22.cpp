#include <iostream>
using namespace std;

int main() {

    int n=5;

    for(int i=1;i<=n;i++) {

        for(int j=i;j<n;j++)
            cout<<" ";

        cout<<"*";

        if(i!=1) {

            for(int j=1;j<=2*i-3;j++)
                cout<<" ";

            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=n-1;i>=1;i--) {

        for(int j=n;j>i;j--)
            cout<<" ";

        cout<<"*";

        if(i!=1) {

            for(int j=1;j<=2*i-3;j++)
                cout<<" ";

            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}