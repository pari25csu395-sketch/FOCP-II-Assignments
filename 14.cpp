#include <iostream>
using namespace std;
 int main (){

    int number;
    double num1 , num2 , Addition , Subtraction , Multiplication , Division;

    cout << "1.Addition\n";
    cout << "2.Subtraction\n";
    cout << "3.Multiplication\n";
    cout << "4.Division\n";

    cout << "Enter any number from 1 to 4 : ";
    cin >> number;

    if (number == 1){
        cout << "You chose Addition\n";
        cout << "Enter 1st number : "; 
        cin >> num1;
        cout << "Enter 2nd number : ";
        cin >> num2;

        Addition = num1+num2;
        cout << "Addition of the two numbers is:" << Addition;
    }

    else if (number == 2){
            cout << "You chose Subtraction";
            cout << " Enter 1st number : ";
            cin >> num1;
            cout << "Enter 2nd number : ";
            cin >> num2;

            if (num1 > num2){
                Subtraction = num1 - num2;
            }
            else {
                Subtraction = num2 - num1; 
            }
            cout << "Subtraction of the 2 numbers is" << Subtraction ;
    }

    else if (number == 3){
            cout << "You chose Multiplication.\n";
            cout << "Enter the 1st number : ";
            cin >> num1;
            cout << "Enter the 2nd number : ";
            cin >> num2;
            Multiplication = num1 * num2;
            cout << "Multiplication of the two numbers is : " << Multiplication;
    }
        
    else if (number == 4){
            cout << "You chose Division.\n";
            cout << "Enter the 1st number : ";
            cin >> num1;
            cout << "Enter the 2nd number : ";
            cin >> num2;

            if (num1>num2){
                Division = num1/num2;
            }
            else{
                Division = num2/num1;
            }
            cout << "Divsion of the two numbers is : " << Division;
        }
        
return 0;
}
        
    

    


    

 
