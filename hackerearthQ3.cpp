#include <iostream>

using namespace std;

int main() {
    
    long long L, R;
    if (!(cin >> L >> R)) return 0;

    
    auto count_odds = [](long long n) {
        return (n + 1) / 2;
    };

    long long odd_count = count_odds(R) - count_odds(L - 1);

    
    if (odd_count % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    return 0;
}