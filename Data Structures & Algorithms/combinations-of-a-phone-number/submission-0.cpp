class Solution {
public:
    void helper(int index,string s,vector<string>&ans,string digits,vector<string>&mapk){
        if(digits=="")return;
        if(index==digits.size()){
            ans.push_back(s);
            return;
        }
        string letters = mapk[digits[index]-'0'];
        for(char ch:letters){
            s.push_back(ch);
            helper(index+1,s,ans,digits,mapk);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>mapk={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        string s;
        helper(0,s,ans,digits,mapk);
        return ans;
    }
};
