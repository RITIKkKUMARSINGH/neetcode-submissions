class Solution {
public:
    void helper(int index,vector<int>&nums,int target,vector<vector<int>>&ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(index==nums.size())return;
        if(nums[index]<=target){
            ds.push_back(nums[index]);
            helper(index,nums,target-nums[index],ans,ds);
            ds.pop_back();
        }
        helper(index+1,nums,target,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0,nums,target,ans,ds);
        return ans;
    }
};
