class Solution {
public:
    void helper(vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,vector<bool>&visited){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(visited[i])continue;
            ds.push_back(nums[i]);
            visited[i]=true;
            helper(nums,ds,ans,visited);
            ds.pop_back();
            visited[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        vector<bool>visited(nums.size(),false);
        helper(nums,ds,ans,visited);
        return ans;
    }
};
