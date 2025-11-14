#include<bits/stdc++.h>
using namespace std;

int binary_search(int n, int arr[], int tar) {
    int l = 0, r = n - 1;
    int res = -1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (arr[mid] == tar)
            res = mid;

        if (arr[mid] > tar)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return res;
}