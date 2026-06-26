class Solution {
public:
    int countDigits(int num) {
        int rem=0;
        int count=0;
        int x=num;
        while(num!=0){
            rem=num%10;
            if(x%rem==0){
                count++;
            }
            num/=10;
        }
        return count;
    }
};