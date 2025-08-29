class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> res;
        for(int d=2; d<=n; d++){
            for(int num=1; num<d; num++){
                if(__gcd(num,d)==1){
                    res.push_back(to_string(num)+"/"+to_string(d));
                }
            }
        }
        return res;
    }
};
