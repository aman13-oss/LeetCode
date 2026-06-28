class Solution {
public:
    void reverseString(vector<char>& s) {
        // int left=s.size();
        // int right=s.size()-1;
        
        // while(left < right){
        //   char temp=s[right];
        //     s[right]=s[left];
        //     s[left]=temp;
        // swap(s[left],s[right]);
        //     left++;
        //     right--;
        // }
    //   reverse(s.begin(), s.end());

        int i = 0;
        int j = s.size() - 1;

         while (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }
    }

};