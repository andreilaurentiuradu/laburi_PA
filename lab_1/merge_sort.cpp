//
// Created by Laur on 3/18/2024.
//

#include <iostream>
#include <vector>

using namespace std;

void merge_sort(int st, int dr, vector<int> &v, int n) {

    if (st < dr) { // cel putin 2 nr de sortat
        // luam jumatatea
        int mij = (st + dr) / 2;

        // divide
        merge_sort(st, mij, v, n);
        merge_sort(mij + 1, dr, v, n);

        // impera (interclasarea)

        vector<int> temp(n, 0); // vector  temporar
        int i = st, j = mij + 1, k = 0;
        while (i <= mij && j <= dr) {
            if (v[i] < v[j]) {
                temp[k++] = v[i++];
            } else {
                temp[k++] = v[j++];
            }
        }

        while (i <= mij) {
            temp[k++] = v[i++];
        }

        while (j <= dr) {
            temp[k++] = v[j++];
        }

        for (i = st, j = 0; i <= dr; i++, j++) {
            v[i] = temp[j];
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    merge_sort(0, n - 1, v, n);

    for (int x: v) {
        cout << x << ' ';
    }

    return 0;
}
