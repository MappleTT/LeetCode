class Solution {
public:
    int MAX(vector<int>&arr,int n,vector<int>&data)
    {

        int max,i,k=0;
        max = arr[0];
        for (i=1; i <= n; i++) {
            if (arr[i] >= max) {
                max = arr[i];
                k=i;
            }
        }
        if(data[k]==1||k==0)
            data[n+2]=1;
        return max;
    }

    int MAXL(vector<int>&arrl,int n)
    {
        int max=arrl[0];
        for(int i=1;i<n;i++)
        {
            if(arrl[i]>max)
                max=arrl[i];
        }
        return max;
    }

    void last(vector<int>&arr,vector<int>&data,vector<int>&nums)
    {
        int max1=arr[1];
        int max2=arr[1];
        for(int i=1;i<nums.size()-2;i++)
        {
            if(arr[i]>max1&&data[i]==1) {
                max1 = arr[i];
            }
            if(arr[i]>max2&&data[i]==0)
            {
                max2=arr[i];
            }
        }
        arr[arr.size()-1]=max(max1+nums[nums.size()-1]-nums[0],max2+nums[nums.size()-1]);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==NULL)
            return 0;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        if(nums.size()==3)
            return max(max(nums[0],nums[1]),nums[2]);
        vector<int>arr(nums.size(),0);
        vector<int>data(nums.size(),0);
        vector<int>arrl(nums.size()-1,0);
        data[0]=1;
        data[2]=1;
        arr[0]=nums[0];
        arr[1]=nums[1];

        for(int i=2;i<nums.size()-1;i++)
            //我们需要在arr数组中找出下标i-2前最大的那个然后再加上nums[i]存入arr[i];
            arr[i] = nums[i] + MAX(arr, i - 2, data);
        last(arr,data,nums);
        arrl[0]=nums[1];
        arrl[1]=nums[2];
        for(int i=3;i<nums.size();i++)
            arrl[i-1]=nums[i]+MAXL(arrl,i-2);
        if(arr[arr.size()-1]<arrl[arrl.size()-1])
            arr[arr.size()-1]=arrl[arrl.size()-1];

        int max=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        return max;

    }
};