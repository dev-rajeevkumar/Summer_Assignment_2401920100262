https://leetcode.com/problems/is-subsequence/submissions/2028458321/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[a]){
                a++;
            }
        }
        if(a==s.size())
            return true;
        return false;
    }
};
