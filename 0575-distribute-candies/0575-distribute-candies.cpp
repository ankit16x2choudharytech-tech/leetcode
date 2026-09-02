class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();

        sort(candyType.begin(), candyType.end());

        int unique = 1;
        int candy;

        for(int i = 1; i < n; i++) {
            if(candyType[i] != candyType[i - 1]) {
                unique++;
            }
        }
                candy =min(n / 2, unique);
        return  candy;
    }
};