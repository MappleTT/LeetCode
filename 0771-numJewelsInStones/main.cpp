class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char>arr;
        for(int i=0;J[i]!='\0';i++){
            arr.insert(J[i]);
        }
        for(int i=0;S[i]!='\0';i++){
            if(arr.find(S[i])!=arr.end())
                count++;
        }
        return count;
    }
private:
    int count=0;
};