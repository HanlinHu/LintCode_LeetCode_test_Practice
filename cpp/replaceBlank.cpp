/*
 *Name:Space Replacement
 *
 *Description:
 *	Write a method to replace all spaces in a string with %20. 
 *	The string is given in a characters array, 
 *	you can assume it has enough space for replacement 
 *	and you are given the true length of the string.
 *
 *Example:
 *	Given "Mr John Smith", length = 13.
 *	The string after replacement should be "Mr%20John%20Smith".
*/

	
#include <iostream>
#include <string>

int replaceBlank(char string[], int length)
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
{
	// Write your code here
	int trueLength;
	trueLength = length;

	for (int i = 0; i<length; i++)
	{
		char s = string[i];
		if (isspace(s))
		{
			std::cout << "%20";
			trueLength += 2;
		}
		else
			std::cout << string[i];
	}
	std::cout << std::endl;
	return trueLength;
}


/*
 * Implementation with std::queue
    int replaceBlank(char string[], int length) 
    {
        // Write your code here
    
        std::queue <char> q;
        int trueLength;
        
        for(int i=0; i<length; i++)
            {
                char c = string[i];
                if(isspace(c))
                {
                    q.emplace('%');
                    q.emplace('2');
                    q.emplace('0');
                }
                else
                    q.emplace(c);
            }
        trueLength = q.size();
        
            while(!q.empty())
            {
                std::cout<<q.front();
                q.pop();
            }
        return trueLength;
    }
*/


int main(int argc, char** argv[])
{
	char* s = "Mr John Smith";
	int length = 13;
	int trueLength = replaceBlank(s, length);
	std::cout << trueLength << std::endl;
	return 0;
}



// the O(n) algorithm
class Solution {
public:
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) 
    {
        // Write your code here
        if((string == nullptr) && (length<=0))
            return 0;
    
        int originalLength = 0;
        int numberOfBank = 0;
        int i =0;
        while(string[i]!='\0')
        {
            ++originalLength;
            if (string[i]==' ')
                ++numberOfBank;
            ++i;
        }
        
        int newLength = originalLength + numberOfBank *2;
        if (newLength < length)
        return 0;
        
        int indexOfOriginal = originalLength;
        int indexOfNew = newLength;
        
        while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
        {
            if(string[indexOfOriginal]==' ')
            {
                string[indexOfNew--] = '0';
                string[indexOfNew--] = '2';
                string[indexOfNew--] = '%';
    
            }
            else
            {
                string[indexOfNew--] = string[indexOfOriginal];
            }
           --indexOfOriginal;     
        }
        return newLength;
    }
};  

//the O(n^2) algorithm
class Solution {
public:
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) 
    {
        // Write your code here
    
        std::queue <char> q;
        int trueLength;
        int count = 0;
        
        for(int i=0; i<length; i++)
            {
                char c = string[i];
                if(isspace(c))
                {
                    q.emplace('%');
                    q.emplace('2');
                    q.emplace('0');
                    ++count;
                }
                else
                    q.emplace(c);
            }
        trueLength = q.size();
        int begin = 0;
            while(!q.empty())
            {
                string[begin++]=q.front();
                q.pop();
            }
        return trueLength;
    }
}; 
