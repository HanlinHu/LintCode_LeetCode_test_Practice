/*
* name: Sqrt(x)
*
* description: 
* Implement int sqrt(int x).
* Compute and return the square root of x.
*
* example:
* sqrt(3) = 1
* sqrt(4) = 2
* sqrt(5) = 2
* sqrt(10) = 3
*
* challenge:
* O(log(x))
*
*
*/

// This question ask for enumerate solution.


// if use this way, we will running out of time
class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) 
    {
        // write your code here
    
        int m(0);
        while((m^2)<=x)
        ++m;
       
       return m;     
    }
};

// those solutions are from :
// 
class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        int left = 1;
        int right = x / 2;

        // Find min of left s.t. left > x / left.
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mid > x / mid) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left - 1;
    }
};

class Solution2 {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        int left = 1;
        int right = x / 2 + 1;

        // Find min of left s.t. left > x / left.
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (mid > x / mid) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left - 1;
    }
};

class Solution3 {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        int left = 0;
        int right = x / 2 + 1;

        // Find min of right s.t. right > x / right.
        while (right - left > 1) {
            int mid = left + (right - left) / 2;
            if (mid > x / mid) {
                right = mid;
            } else {
                left = mid;
            }
        }

        return right - 1;
    }
};
