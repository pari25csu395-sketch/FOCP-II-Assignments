#include <iostream>
using namespace std;
int main(){
    int item_no , quantity;
    float unit_pri,total_bill,final_bill,discount;
    cout<< "Enter item no : \n" << "enter the quantity : \n" << "enter the unit price : \n";
cin >> item_no >> quantity >> unit_pri ;
total_bill = item_no * quantity * unit_pri ;
discount = 0.20 * total_bill;
final_bill = total_bill - discount;
cout<< "Your total bill is" << total_bill << endl;
cout<< "your total bill is" << final_bill << endl;
return 0;

}