class Solution {
public:
    int MAX(vector<int>&arr,int n)
    {
        int max=arr[0];
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        return max;
    }

    int rob(vector<int>& nums) {
        if(nums.size()==NULL)
            return 0;
        vector<int>arr(nums.size(),0);
        int ans=0;
        arr[0]=nums[0];
        if(nums.size()>1)
            arr[1]=nums[1];
        for(int i=2;i<nums.size();i++)
            //我们需要在arr数组中找出下标i-2前最大的那个然后再加上nums[i]存入arr[i];
            arr[i]=nums[i]+MAX(arr,i-2);
        vector<int>::iterator it =max_element(arr.begin(),arr.end());
        return *it;
    }
};