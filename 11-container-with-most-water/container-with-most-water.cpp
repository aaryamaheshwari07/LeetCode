class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int rp=height.size()-1;
        int lp=0;
        while(lp<rp){
            int w=rp-lp;
            int h =min(height[rp],height[lp]);
            int curwater=w*h;
            maxWater=max(maxWater,curwater);

            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWater;
    }
};