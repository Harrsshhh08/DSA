class Solution {
public:
    int romanToInt(string s) {
        int val1=0, val2 = 0, ans= 0;
            for(int i=0;i<s.length(); i++ ){
                if(s[i]=='I')
                val1=1;
                else if(s[i]=='V')
                val1=5;
                else if(s[i]=='X')
                val1=10;
                else if(s[i]=='L')
                val1=50;
                else if(s[i]=='C')
                val1=100;
                else if(s[i]=='D')
                val1=500;
                else if(s[i]=='M')
                val1=1000;

                 if(s[i+1]=='I')
                val2=1;
                else if(s[i+1]=='V')
                val2=5;
                else if(s[i+1]=='X')
                val2=10;
                else if(s[i+1]=='L')
                val2=50;
                else if(s[i+1]=='C')
                val2=100;
                else if(s[i+1]=='D')
                val2=500;
                else if(s[i+1]=='M')
                val2=1000;
                if(val1<val2)
                ans=ans-val1;
                else
                ans=ans+val1;
            }
            return ans;
    }
};