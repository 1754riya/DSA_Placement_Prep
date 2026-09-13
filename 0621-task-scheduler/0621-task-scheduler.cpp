class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;

        for(char ch : tasks) {
            freq[ch]++;
        }

        vector<pair<char, int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        int ans = 0;

        while(!v.empty()) {
            int i = 0;

            while(i < n + 1 && i < v.size()) {
                v[i].second--;
                ans++;
                i++;
            }

            for(int j = 0; j < v.size();) {
                if(v[j].second == 0) {
                    v.erase(v.begin() + j);
                } else {
                    j++;
                }
            }

            if(!v.empty() && i < n + 1) {
                ans += (n + 1 - i);
            }

            sort(v.begin(), v.end(), [](auto &a, auto &b) {
                return a.second > b.second;
            });
        }

        return ans;
    }
};