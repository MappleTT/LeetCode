class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;  //unordered_map中存储的是<元素，频数>
        for(auto num: nums) mp[num]++;

        priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq; //最小堆，存储的是<频数， 元素>
        for(auto val: mp){
            pq.push(make_pair(val.second, val.first));
            if(pq.size() > k) pq.pop();
        }
        //将最小堆中的元素放在res容器中，并返回结果
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};

