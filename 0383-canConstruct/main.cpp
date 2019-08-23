class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<char>arr;
        for(int i=0;i<ransomNote.size();i++){
            arr.push_back(ransomNote[i]);
        }
        for(int i=0;i<magazine.size();i++){
            for(int j=0;j<arr.size();j++){
                if(magazine[i]==arr[j])
                    arr.erase(arr.begin()+j);
            }
        }
        if(arr.size()==0)
            return true;
        else
            return false;
    }
};

