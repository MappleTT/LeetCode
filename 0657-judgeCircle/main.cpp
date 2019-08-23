class Solution {
public:
    bool judgeCircle(string moves) {
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='R')
                right++;
            else if(moves[i]=='L')
                left++;
            else if(moves[i]=='U')
                up++;
            else if(moves[i]=='D')
                down++;
        }
        if(left==right&&up==down)
            return true;
        else
            return false;
    }
private:
    int left=0,right=0,up=0,down=0;
};