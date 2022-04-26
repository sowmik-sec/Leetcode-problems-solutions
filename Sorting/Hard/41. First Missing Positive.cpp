class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()) {
            if(nums[i]<nums.size() and nums[i]>0 and nums[i] != nums[nums[i]-1]) swap(nums[i],nums[nums[i]-1]);
            else i++;
        }
        for(int i=0;i<nums.size();i++) {
            if(i+1!=nums[i]) return i+1;
        }
        return nums.size()+1;
    }
};