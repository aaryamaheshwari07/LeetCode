class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n, 1);
        
        int product=1;
        int i=0;
        while(i<n){
            ans[i]=product;
            product =product*nums[i];
            i++;   
        }

        product=1;
        i=n-1;
        while(i>=0){
            ans[i]=ans[i]*product;
            product=product*nums[i];
            i--;
        }
        return ans;
    }
};