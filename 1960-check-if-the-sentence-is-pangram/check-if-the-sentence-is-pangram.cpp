class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count[26]={0};
        int n=sentence.size();

        for(int i=0;i<n;i++){
            count[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count[i]==0){
                return false;
            }
        }
        return true;
    }
};