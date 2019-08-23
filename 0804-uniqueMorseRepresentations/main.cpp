class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string a="";
            for(int j=0;words[i][j]!='\0';j++){
                a+=arr[words[i][j]-'a'];
            }
            Arr.insert(a);
        }
        set<string>::iterator it=Arr.begin();
        for(it;it!=Arr.end();it++){
            count++;
        }
        return count;
    }
private:
    set<string>Arr;
    int count=0;
    vector<string> arr={".-","-...","-.-.","-..",
                        ".","..-.","--.","....",
                        "..",".---","-.-",".-..",
                        "--","-.","---",".--.",
                        "--.-",".-.","...","-",
                        "..-","...-",".--","-..-",
                        "-.--","--.."};
};