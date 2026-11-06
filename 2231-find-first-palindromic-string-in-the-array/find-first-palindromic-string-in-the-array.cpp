class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            int j=0;
            int k=words[i].size()-1;
            bool palindrome=true;
            while(j<k){
                if(words[i][j]!=words[i][k]){
                    palindrome=false;
                    break;
                }
                j++;
                k--;
            }
            if(palindrome){
                return words[i];
            }
        }
        return "";
    }
};