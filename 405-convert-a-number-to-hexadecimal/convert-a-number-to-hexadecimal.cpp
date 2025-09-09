class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        string hex = "";
        unsigned int n = num;
        string digits = "0123456789abcdef";
        while (n > 0) {
            hex = digits[n % 16] + hex;
            n /= 16;
        }
        return hex;
    }
};
