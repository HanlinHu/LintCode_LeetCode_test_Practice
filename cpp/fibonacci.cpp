/*
* name: Fibonacci
*
* description:
* Find the Nth number in Fibonacci sequence.
* A Fibonacci sequence is defined as follow:
*
* The first two numbers are 0 and 1.
* The i th number is the sum of i-1 th number and i-2 th number.
* The first ten numbers in Fibonacci sequence is:
*
* 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
*
* example:
* Given 1, return 0
* Given 2, return 1
* Given 10, return 34
*
* challenge:
* The Nth fibonacci number won't exceed the max value of signed 32-bit integer in the test cases. 
*
*/

class Solution{
public:
    /**
     * @param n: an integer
     * @return an integer f(n)
     */
    int fibonacci(int n) 
    {
        // write your code here
        int f1(0);
        int f2(1);
        int fm(0);
        
        for(int m=2; m<n; ++m)
        {
            fm = f2 + f1;
            f1 = f2;
            f2 = fm;
        }
        return fm;
    }
};
