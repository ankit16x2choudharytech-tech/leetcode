class Solution {
public:
    void Reverse(string &a, int low, int high) {
        while(low <= high) {
            swap(a[low], a[high]);
            low++;
            high--;
        }
    }

    string reverseWords(string s) {

        int i = 0;
        string s1;

        while(i < s.length()) {
            if(s[i] == ' ' && s1.empty()) {
                i++;
            }
            else if(s[i] == ' ' && !s1.empty() && s1.back() == ' ') {
                i++;
            }
            else {
                s1 += s[i];
                i++;
            }
        }
        if(!s1.empty() && s1.back() == ' ') {
            s1.pop_back();
        }
        reverse(s1.begin(), s1.end());
        int start = 0;

        for(int end = 0; end < s1.length(); end++) {

            if(s1[end] == ' ') {
                Reverse(s1, start, end - 1);
                start = end + 1;
            }
        }
        Reverse(s1, start, s1.length() - 1);

        return s1;
    }
};