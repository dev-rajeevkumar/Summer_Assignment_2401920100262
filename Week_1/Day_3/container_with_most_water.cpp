// https://leetcode.com/problems/container-with-most-water/submissions/1994172769/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0;
        int i=0;
        int j=height.size()-1;
        while(i!=j){
            int water=min(height[i],height[j])*abs(j-i);
            if(water>max)
                max=water;
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return max;
    }
};
