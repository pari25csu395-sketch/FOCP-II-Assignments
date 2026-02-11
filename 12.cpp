#include <iostream>
using namespace std;

int main(){
    double side1 , side2 , side3;
    cout << "Enter 3 sides of the triangle:" ;

    cin >> side1 ;
    cin >> side2 ;
    cin >> side3 ;

    if (side1+side2 > side3 || side2+side3>side1 || side1+side3> side2){
        if (side1 == side2 == side3){
        cout << " It is an equilateral triangle.";
    }
    else if (side1==side2 || side2==side3 || side1==side3){
        cout <<"It is an isoceles triangle.";
    }
    else{
        cout << "It is an scalene triangle.";
    }
}
else{
    cout << "It is an invalid triangle.";
}
    return 0;
}