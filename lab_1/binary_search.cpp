//
// Created by Laur on 3/18/2024.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(int x, int left, int right, vector<int> v) {
    int mid;

    while (left < right) {
        mid = (left + right) / 2;

        if (v[mid] < x) {
            left = mid + 1;
        } else if (v[mid] > x) {
            right = mid - 1;
        } else
            return mid;
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int x;
    cin >> x;

    cout << binary_search(x, 0, n - 1, v);
    return 0;
}