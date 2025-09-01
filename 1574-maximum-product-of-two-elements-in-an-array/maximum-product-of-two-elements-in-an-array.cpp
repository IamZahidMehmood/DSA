class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a = 0, b = 0;
        for(int n : nums) {
            if(n >= a) {
                b = a;
                a = n;
            } else if(n > b) {
                b = n;
            }
        }
        return (a - 1) * (b - 1);
    }
};
