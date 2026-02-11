#include <iostream>
using namespace std;

int main (){
    float a,b,c , root1,root2 , D;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    if(a == 0){
        cout <<" It is not an quadratic equation:";
    }
    else{
        D = b*b - (4*a*c);
        if (D>0){
            root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
    else if (D == 0) {
        root1 = -b / (2*a);
        cout << "Roots are real and equal." << endl;
        cout << "Root = " << root1 << endl;
    }
    else {
        float real = -b / (2*a);
        float imag = sqrt(-D) / (2*a);
        cout << "Roots are complex." << endl;
        cout << "Root1 = " << real << " + " << imag << "i" << endl;
        cout << "Root2 = " << real << " - " << imag << "i" << endl;
    }

    return 0;
}
}
        
