// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/2027265179/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        for(int i=0;i<haystack.size();i++){
            string temp=haystack.substr(i,n);
            if(temp==needle)
                return i;
        }
        return -1;
    }
};
