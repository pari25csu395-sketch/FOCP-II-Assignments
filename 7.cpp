#include <iostream>
using namespace std;
int main (){
    int p1s, p2s,p3s;
    cout << "Enter the score of player 1:";
    cin >> p1s;
    cout<< "Enter the score of player 2 :";
    cin >> p2s;
    cout << "Enter the score of player 3 :";
    cin >> p3s;

    if(p1s > p2s && p1s > p3s){
        cout << "player 1 is the winner!";
    }
    else if(p2s>p1s && p2s>p3s){
        cout << "player 2 is the winner!";
    }
    else if(p3s > p1s && p3s > p2s){
        cout << " player 3 is the winner";
    }
    else{
        cout<< "It's a Tie!";
    }
    return 0;

}