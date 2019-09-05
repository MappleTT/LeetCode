#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        if(num%9==0&&num>=9)
            return 9;
        return num%9;
    }
};
int main()
{


    return 0;

}