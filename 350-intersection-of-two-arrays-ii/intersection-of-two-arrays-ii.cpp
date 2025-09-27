class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int freq[1001] = {0};
        for(int x : nums1) freq[x]++;
        for(int y : nums2){
            if(freq[y] > 0){
                result.push_back(y);
                freq[y]--;
            }
        }
        return result;
    }
};
