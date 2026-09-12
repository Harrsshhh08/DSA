class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0, least=heights[0], temp;
        vector<int> expected=heights;
        for(int i=0; i<heights.size()-1;i++){
            for(int j=i+1; j<heights.size();j++){
            if(expected[i]>expected[j]){
            temp=expected[i];
            expected[i]=expected[j];
            expected[j]=temp;
            }}
        }
            for(int i=0;i<heights.size();i++){
                if(expected[i]!=heights[i])
                count++;
            }
            return count;
    }
};