/*
* Name: Count 1 in Binary
* Description: Count how many 1 in binary representation of a 32-bit integer.
*
* Example:
* Given 32, return 1
*
* Given 5, return 2
*
* Given 1023, return 10
*
* Challenge
* If the integer is n bits with m 1 bits. Can you do it in O(m) time?
*/

int countOnes(int num)
{
	int count = 0;
	int temp = num;

	while (!((temp == 1) || (temp == 0)))
	{
		if (temp % 2 == 1) //temp is odd
		{
			temp = (temp - 1) / 2;
			++count;
		}
		else    //temp is even
			temp /= 2;
	}

	if (temp == 1)
		++count;
	// count the "1"s

	return count;
}


//Challenge:
    int countOnes(int num) 
    {
        int count = 0;
        for (; num; num &= num - 1) 
        {
            ++count;
        }
        return count;
    }

/*
* Any data type in computer is binary, so we can use '&' directly;
* if (num > 0); num == true, so we can use 'num' as the condition. 
*/
