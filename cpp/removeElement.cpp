/*
* name: Remove Element
*
* description:
*
* Given an array and a value, remove all occurrences of that value in place and return the new length.
* The order of elements can be changed, and the elements after the new length don't matter.
*
* example:
* Given an array [0,4,4,0,0,2,4,4], value=4
* return 4 and front four elements of the array is [0,0,0,2]
*
*/

// You may think use a dummy vector to save the new result, and then use shallow copy from dummy to A. 
// But the problem is the length of dummy and A are not match. So we have to use the same A with different index.

class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem)
    {
        // write your code here
        int j(0);
        int i = A.size();
        while(j<i)
        {
            if(A[j]!=elem)
            {
                ++j;
            }
            else
                swap(A[j],A[--i]);
        }   
        return j;
    }
};
