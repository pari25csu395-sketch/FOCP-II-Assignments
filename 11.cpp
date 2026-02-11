#include <iostream>
using namespace std;

int main(){
    int qty;
    double price , total , final_amt ;

    cout << "Enter quantity:";
    cin >> qty;
    cout << "Enter price:";
    cin >> price;
    
    total = qty*price;
    
    if (total > 1000){
        final_amt = total - (0.10 * total);
        cout << "you got a 10% discount -  " << final_amt ;
    }

    else {
            final_amt = total;
            cout << "No discount applied." << final_amt;
        }
    
return 0;
}