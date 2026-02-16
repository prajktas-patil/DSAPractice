1. Ugly Number
Problem:
A number is ugly if its prime factors only include 2, 3, and 5. Given an integer n, return true if it is an ugly number.

Approach:
Continuously divide the number by 2, 3, and 5 if possible.
If the final result becomes 1, it is an ugly number.

Technique Used: Math / Prime Factorization  
Time Complexity: O(log n)  
Space Complexity: O(1)

class Solution {
public:
    bool isUgly(int n) {
        while(n>1)
        {
            if(n%2==0)
            n/=2;
            else if(n%3==0)
            n/=3;
            else if(n%5==0)
            n/=5;
            else 
            return false;
        }
        return n==1;
    }
};
