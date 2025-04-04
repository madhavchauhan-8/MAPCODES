class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int> fr;
        for(int ele : arr){
            fr[ele]++;
        }
        vector<pair<int, int>> vec(fr.begin(),fr.end()); 
        sort(vec.begin(), vec.end(),compare);
  vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(vec[i].first);  
    }
    return result;
    }
};
