#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;               // size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];     // input array elements
    }

    cin >> key;            // value to search

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at index: " << i << endl;
            return 0;      // end program if found
        }
    }

    cout << "Not Found" << endl;
    return 0;
}
