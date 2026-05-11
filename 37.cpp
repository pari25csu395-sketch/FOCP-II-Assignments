#include <iostream>
using namespace std;

int main() {

    string username;
    bool valid = true;

    cout << "Enter username: ";
    cin >> username;

    for(int i=0; i<username.length(); i++) {

        if(!((username[i]>='A' && username[i]<='Z') ||
             (username[i]>='a' && username[i]<='z') ||
             (username[i]>='0' && username[i]<='9'))) {

            valid = false;
        }
    }

    if(valid)
        cout << "Valid Username";

    else
        cout << "Invalid Username";

    return 0;
}