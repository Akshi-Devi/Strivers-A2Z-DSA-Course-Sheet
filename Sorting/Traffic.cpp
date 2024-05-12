#include <bits/stdc++.h>
using namespace std;
int traffic(int n, int m, vector<int> vehicle){
    int maxcount = 0;
    for (int i = 0; i < n; i++) {
        int copy = m;
        int count = 0;
        int j = i;
        while (copy != 0 && j < n) {
            if (vehicle[j] != 1) {
                copy--;
            }
            count++;
            j++;
        }
        while (copy == 0 && j < n && vehicle[j] != 0) {
            count++;
            j++;
        }
        maxcount = max(count, maxcount);
        if (j == n)  {
            break;
        }
    }
    return maxcount;
}
