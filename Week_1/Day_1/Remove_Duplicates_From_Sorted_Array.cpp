// LeetCode:Remove_Duplicates_From_Sorted_Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1995273709/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return n;
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
             ans.push_back(nums[i]);
            }
        }
          nums=ans;
        return nums.size();
    }
};
