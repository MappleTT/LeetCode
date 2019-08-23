class Solution {
public:
    int fib(int N) {
        arr[0]=0,arr[1]=1;
        if(N<=1)
            return arr[N];
        for(int i=2;i<=N;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[N];
    }

private:
    int arr[31];
};

