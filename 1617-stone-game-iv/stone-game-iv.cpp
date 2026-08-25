class Solution {
    
public:
    bool winnerSquareGame(int n) {
        vector<bool> win(n + 1);
        for (int i = 0; i <= n; ++i) {
            for (int j = 1; j * j <= i; ++j) {
                if (!win[i - j * j]) {
                    win[i] = true;
                    break;
                }
            }
        }
        return win[n];
    }
};