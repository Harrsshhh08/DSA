class Solution {
public:
    int lengthOfLastWord(string s) {
        int start=-1, end=0, len=0;
        if(s[0]!=' ')
        start=0;
          if (s.length() == 1 && s[0] != ' ')
            return 1;
        for(int i=1;i<s.length();i++){
            if(s[i]!=' ' && s[i-1]==' '){
                start=i;
            }
            if(s[i]!=' ' && (i == s.length() - 1 || s[i+1]==' ' ))
            end=i;
            if(end>=start)
            len=end-start+1;
        }
        return len;
    }
};