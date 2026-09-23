class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>maps,mapt;
        for(int i=0;i<s.size();i++){
            maps[s[i]]++,mapt[t[i]]++;
        }
        if(maps==mapt)return true;
        return false;
    }
};
