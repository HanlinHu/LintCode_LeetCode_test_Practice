/*
* name:Length of Last Word
*
* description:
* Given a string s consists of upper/lower-case alphabets and empty space characters ' ', 
* return the length of last word in the string.
* If the last word does not exist, return 0.
*
* example:
* Given s = "Hello World", return 5.
*
* note:
* A word is defined as a character sequence consists of non-space characters only.
*/

class Solution {
public:
    /**
     * @param s A string
     * @return the length of last word
     */
    int lengthOfLastWord(string& s) {
        // Write your code here

        // the special cases:
        // 1. space at the first 
        // 2. there is no space

        int count(0);
        for(int i = s.length()-1; i>=0; --i) //iterator from the last
            {
                if(s[i] == ' ')
                break;
                ++count;
            }
        return count;
    }
};

