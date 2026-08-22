class Solution {
public:
    bool checkDivisibility(int n) {

        int sum=0;
        int product=1;
        int org=n;

        while(n>0){
            int temp = n%10;
            sum+=temp;
            product*=temp;
            n=n/10;
        }

        if(org%(sum+product)==0 )
            return true;

        return false;
        
    }
};