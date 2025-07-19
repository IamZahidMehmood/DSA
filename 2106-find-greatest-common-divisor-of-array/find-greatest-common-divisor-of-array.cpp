class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        while (mx % mn != 0) {
            int temp = mx % mn;
            mx = mn;
            mn = temp;
        }
        return mn;
    }
};
