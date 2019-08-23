class Solution {
public:
    int heightChecker(vector<int>& heights) {
        for(int i=0;i<heights.size();i++)
            arr.push_back(heights[i]);
        sort(heights.begin(),heights.end());
        for(int i=0;i<arr.size();i++){
            if(heights[i]!=arr[i])
                num++;
        }
        return num;
    }

private:
    vector<int>arr;
    int num=0;
};