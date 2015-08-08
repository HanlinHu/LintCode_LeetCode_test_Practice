/*
* name: Single Number
*
* description:
* Given 2*n + 1 numbers, every numbers occurs twice except one, find it.
*
* example:
* Given [1,2,2,1,3,4,3], return 4
*
* challenge:
* One-pass, constant extra space.
*/

class Solution {
public:
	/**
	 * @param A: Array of integers.
	 * return: The single number.
	 */
    int singleNumber(vector<int> &A) 
    {
        // write your code here
        if(A.empty())
        return 0;
        
        // if using hashmap you have to go through two-pass, and the the number of bucket can overflow
        // so using bit operation to do 'Comparison'
        
        int singleNum(0);
        for(const auto& i:A)
        // every time get the XOR value,
        // if you get the XOR value twice, the result recover to the original one
        // so, the final result is the single number XOR with 0000;
        // then, the return is the single number itself
            singleNum ^= i;
        return singleNum;
    }
};
