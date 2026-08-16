#include <iostream>
#include <vector>
#include <algorithm> // For std::max_element
#include <climits>   // For INT_MIN

using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    int maxEl = INT_MIN;

    for(int i = 0; i  < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        maxEl = max(maxEl, arr[i]);
    }

    cout << "max element is: " << maxEl;
}