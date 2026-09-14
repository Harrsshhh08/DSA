class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> str;
        int j=0,i=1;
        while( j< target.size() && i<=n){
            str.push_back("Push");
            if(i!=target[j])
            {
                str.push_back("Pop");
            }
            else
            j++;
            i++;
            }
        
        return str;
    }
};