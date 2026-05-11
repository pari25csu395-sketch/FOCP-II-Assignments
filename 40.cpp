#include <iostream>
using namespace std;

int main() {

    string str;
    int words=1, digits=0, special=0;

    cout << "Enter string: ";

    getline(cin, str);

    // sentence case
    if(str[0]>='a' && str[0]<='z')
        str[0] = str[0] - 32;

    for(int i=1; i<str.length(); i++) {

        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 32;
    }

    for(int i=0; i<str.length(); i++) {

        if(str[i]==' ')
            words++;

        else if(str[i]>='0' && str[i]<='9')
            digits++;

        else if(!((str[i]>='A' && str[i]<='Z') ||
                  (str[i]>='a' && str[i]<='z') ||
                  (str[i]>='0' && str[i]<='9') ||
                   str[i]==' '))
            special++;
    }

    cout << "Sentence Case: " << str << endl;
    cout << "Words = " << words << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special Characters = " << special;

    return 0;
}