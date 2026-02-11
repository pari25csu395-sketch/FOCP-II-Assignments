#include <iostream>
using namespace std;
int main (){
    char alpha;
    cout << " Enter an alphabet :";
    cin >> alpha ;

    if (alpha>='0' && alpha<='9'){
        cout << "Symbol is a number.";
    }
    else if ((alpha >= 'a' && alpha <= 'z') || (alpha >='A' && alpha<='z')){
        if (alpha == 'a' || 'e'|| 'i'|| 'o' || 'u'){
        cout << "Symbol is a vowel.";
    }
    else if (alpha == 'A' ||'E' || 'I' || 'O'|| 'U'){
        cout << "Symbol is a vowel.";
    }
    else {
        cout << " Symbol is a consonant.";
    }
    return 0;
    }
}