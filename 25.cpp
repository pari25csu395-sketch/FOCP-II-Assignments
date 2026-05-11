#include <iostream>
using namespace std;

int main() {

    string pass;

    bool upper=false, lower=false, digit=false, special=false;

    cout<<"Enter password: ";
    cin>>pass;

    if(pass.length() >= 8) {

        for(int i=0;i<pass.length();i++) {

            if(pass[i]>='A' && pass[i]<='Z')
                upper=true;

            else if(pass[i]>='a' && pass[i]<='z')
                lower=true;

            else if(pass[i]>='0' && pass[i]<='9')
                digit=true;

            else
                special=true;
        }

        if(upper && lower && digit && special)
            cout<<"Strong Password";

        else
            cout<<"Weak Password";
    }

    else
        cout<<"Password too short";

    return 0;
}