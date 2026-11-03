class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWord = 0;
        int n = sentences.size();
        for (int i = 0; i < n; i++) {
            int count = 1;
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ' || sentences[i][j] == '\n') {
                    count++;
                }
            }
            if (count > maxWord) {
                maxWord = count;
            }
        }
        return maxWord;
    }
};