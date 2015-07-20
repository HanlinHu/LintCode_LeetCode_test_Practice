/*
* Name:  Longest words
* Description: Given a dictionary, find all of the longest words in the dictionary.
*
*  Example
*  Given
*
*  {
*    "dog",
*    "google",
*    "facebook",
*    "internationalization",
*    "blabla"
*  }
*  the longest words are(is) ["internationalization"].
*
*  Given
*
*  {
*    "like",
*    "love",
*    "hate",
*    "yes"
*  }
*  the longest words are ["like", "love", "hate"].
*
* Challenge: It's easy to solve it in two passes, can you do it in one pass?
*/

class Solution {
public:
    /**
     * @param dictionary: a vector of strings
     * @return: a vector of strings
     */
    vector<string> longestWords(vector<string> &dictionary) 
    {
        // write your code here
        vector<string> result;
        vector<string>:: iterator i;
        int size = 0;
        queue<string> words;
        
        //By using queue structure, to get the output 
        for(i = dictionary.begin(); i!= dictionary.end(); ++i)
            {
                if(size < i->size())
                {  
                    while(!words.empty())
                    words.pop();
                    size = i->size();
                    words.emplace(*i);
                }
                else if(size == i->size())
                {
                    words.emplace(*i);
                }
            }
        
        //use vector to recevie output
        while(!words.empty())
        {
            //read front of queue, pop, push into return vector
            string temp = words.front();
            words.pop();
            result.emplace_back(temp);
        }
        return result;
    }
};
