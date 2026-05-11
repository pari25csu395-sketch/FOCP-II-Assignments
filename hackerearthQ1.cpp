#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool canTurnOff(int n, int k, const string& bulbs, int len) {
    int operations = 0;
    for (int i = 0; i < n; ) {
        if (bulbs[i] == '1') {
            operations++;
        
            if (operations > k) return false;
        
            i += len;
        } else {
            i++;
        }
    }
    return operations <= k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;
    
    string bulbs;
    cin >> bulbs;

    int low = 1, high = n;
    int result = n;

    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canTurnOff(n, k, bulbs, mid)) {
            result = mid;
            high = mid - 1; 
        } else {
            low = mid + 1;  
        }
    }

    cout << result << endl;

    return 0;
}