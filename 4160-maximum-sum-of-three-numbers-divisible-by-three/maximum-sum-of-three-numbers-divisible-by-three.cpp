class Solution {
public:
    int maximumSum(vector<int>& nums) {

        sort(nums.begin(), nums.end(), greater<int>());

        vector<int> zero;
        vector<int> one;
        vector<int> two;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 3 == 0 && zero.size() < 3)
                zero.push_back(nums[i]);

            else if(nums[i] % 3 == 1 && one.size() < 3)
                one.push_back(nums[i]);

            else if(nums[i] % 3 == 2 && two.size() < 3)
                two.push_back(nums[i]);
        }

        int ans = 0;

        // 0 + 0 + 0
        if(zero.size() >= 3)
            ans = max(ans, zero[0] + zero[1] + zero[2]);

        // 1 + 1 + 1
        if(one.size() >= 3)
            ans = max(ans, one[0] + one[1] + one[2]);

        // 2 + 2 + 2
        if(two.size() >= 3)
            ans = max(ans, two[0] + two[1] + two[2]);

        // 0 + 1 + 2
        if(zero.size() >= 1 && one.size() >= 1 && two.size() >= 1)
            ans = max(ans, zero[0] + one[0] + two[0]);

        return ans;
    }
};