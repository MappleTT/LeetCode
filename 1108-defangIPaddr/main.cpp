class Solution {
public:
    string defangIPaddr(string address) {
        string a;
        for(int i=0;address[i]!='\0';i++){
            if(address[i]!='.')
                a+=address[i];
            else
                a+="[.]";
        }
        return a;
    }
};