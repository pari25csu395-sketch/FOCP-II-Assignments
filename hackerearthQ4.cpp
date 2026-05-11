#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

string solve(int n, vector<int>& arr) {
    // Sort descending to maximize consumption
    sort(arr.begin(), arr.end(), greater<int>());

    long long alex_total = 0;
    long long bob_total = 0;
    
    // Separate tracking for each player
    set<int> alex_consumed;
    set<int> bob_consumed;
    
    bool alex_turn = true;

    for (int i = 0; i < n; i++) {
        if (alex_turn) {
            // Alex takes the pile if he hasn't had this sugar quantity yet
            if (alex_consumed.find(arr[i]) == alex_consumed.end()) {
                alex_total += arr[i];
                alex_consumed.insert(arr[i]);
                alex_turn = false; // Turn only ends if he successfully eats
            }
        } else {
            // Bob takes the pile if he hasn't had this sugar quantity yet
            if (bob_consumed.find(arr[i]) == bob_consumed.end()) {
                bob_total += arr[i];
                bob_consumed.insert(arr[i]);
                alex_turn = true; // Turn only ends if he successfully eats
            }
        }
    }

    return (alex_total > bob_total) ? "Alex" : "Bob";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(n, arr) << endl;
    }
    return 0;
}