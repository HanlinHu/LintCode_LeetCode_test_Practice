/*
* Name: Unique Characters
* Description: Implement an algorithm to determine if a string has all unique characters.
*
* Example:
* Given "abc", return true.
* Given "aab", return false.
* 
* Challenge: What if you can not use additional data structures?
*
*/

class Solution {
public:
    /**
     * @param str: a string
     * @return: a boolean
     */

    bool isUnique(string &str)
    {
	    // write your code here
    
	    //special case
	    //1: null?
	    //2: only one character 'always true'

    	bool uniq(false);
    
	    //traversing inside the string by using its iterators
	    //time complex O(n^2)
	
	    if (str.length() == 0)
    		return -1; //or print "string is null"
	    else if (str.length() == 1)
		    return true;
	    else 
	    {
		    for (string::iterator stOutside = str.begin(); stOutside != str.end(); ++stOutside)
		    {
			    for (string::iterator stInside = next(stOutside); stInside != str.end(); ++stInside)
			    {
				    uniq = (*stInside == *stOutside) ? false : true;
				    if (uniq == false)
					    break;
			    }
			    if (uniq == false)
				    break;
		    }
		    return uniq;
	   }
    }
};


// time complex O(n)

bool isUnique(string &str) 
{
	//Reference:kamyu104/LintCode / C++ / unique - characters.cpp
	if (str.length() > 256)
		return false;
	//the 8 bit extended ASCII Scheme allows for 256 symbols (2 to the power of 8).
	//256 entries, const, default hash function
	unordered_map<char, int> cnt;
	// for each element in the string (auto as place holder and pass by reference)
	for (auto &element: str) 
	{
		// hash value ++
		// value  =  unordered_map[key];
		++cnt[element];
		if (cnt[element] > 1)
			return false;
	}
	return true;
}
