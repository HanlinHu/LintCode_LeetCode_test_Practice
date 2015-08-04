
/*
* name:Partition Array by Odd and Even
* description: Partition an integers array into odd number first and even number second.
* 
* example: Given [1, 2, 3, 4], return [1, 3, 2, 4]
* 
*/

class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @return: nothing
     */
    void partitionArray(vector<int> &nums)
    {
        // write your code here
        
        //two pointers: one trace odd number, one trace even number
        
        // test cases:
        // 1. threshold: when ptrE reach the end
        // 2. special input: Null?  in fact, it doesn't matter since no return
        // 3. different case from the example: the beginning of input is a even number
       
    vector<int>::iterator ptrE ;
    vector<int>::iterator ptrO ;
        
        if (!nums.empty())
            for(ptrO = nums.begin(); ptrO!= nums.end(); ++ptrO)
                    if((*ptrO)%2==0)
                    {
                        for(ptrE = next(ptrO); ptrE!=nums.end(); ++ptrE)
                        {
                            if((*ptrE)%2!=0)
                                break;
                        }
                        if(ptrE!=nums.end())
                        iter_swap(ptrE, ptrO);
                    }
    }
};
