/*
* name: Majority Number
*
* description:
* Given an array of integers, 
* the majority number is the number that occurs more than half of the size of the array. Find it.
* 
* example:
* Given [1, 1, 1, 1, 2, 2, 2], return 1
*
* challenge:
* O(n) time and O(1) extra space
*
*/

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: The majority number
     */
    int majorityNumber(vector<int> nums) 
    {
        // write your code here
    
        //return a placeholder
        //iterator traverse once
        //current placeholder
        //count previous
        //count current
        
        //special cases:
        //input: null
        //input: there is no one more than half
        
        int placeHolder(0), countCurrent(0), countPrev(0),currentPlaceholder(0);
        
        if(nums.empty())
        return -1;
        
        currentPlaceholder = nums[0];
        for(int i=0; i<nums.size(); ++i)
        {
           if(nums[i]==currentPlaceholder)
           ++countCurrent;
           else
           currentPlaceholder = nums[i];
           if(countPrev<countCurrent)
           {
            countPrev = countCurrent;
            placeHolder = currentPlaceholder;
           }
           countCurrent = 1;
        }
        return placeHolder;
    }
};
