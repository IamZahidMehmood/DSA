#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isThree(int n) {
        int r = floor(sqrt(n));
        if (r * r != n) return false;
        if (r < 2) return false;
        for (int i = 2; i * i <= r; ++i) if (r % i == 0) return false;
        return true;
    }
};
