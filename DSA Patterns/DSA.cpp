// Starting point for DSA patterns Series implementation in C++
// Merge Without Extra Space - GFG problem :- 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeWithoutExtraSpace(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();

    // Traverse first array
    for (int i = 0; i < n; i++) {
        // If current element of a[] is greater than first element of b[]
        if (a[i] > b[0]) {
            // Swap
            swap(a[i], b[0]);

            // Place b[0] at correct position in b[]
            int first = b[0];
            int k;

            // Shift elements to maintain sorted order
            for (k = 1; k < m && b[k] < first; k++) {
                b[k - 1] = b[k];
            }
            b[k - 1] = first;
        }
    }
}

int main() {
    vector<int> a = {1, 5, 9, 10, 15, 20};
    vector<int> b = {2, 3, 8, 13};

    mergeWithoutExtraSpace(a, b);

    cout << "Array a: ";
    for (int x : a) cout << x << " ";

    cout << "\nArray b: ";
    for (int x : b) cout << x << " ";

    return 0;
}
