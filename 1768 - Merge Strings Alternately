/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.


Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
*/

class Solution {
    /*
    My solution would be to use .length() of each string, taking them into a third string one letter at a time.
    use a if-else statement to check which strings length is longer.

    */
public:
    string mergeAlternately(string word1, string word2) {
    int largestString = 0; //initialize
    largestString = word1.length(); // always equal to the length of one string
    string thirdString = "";
    if(word2.length() > word1.length()) //flip to the other if it is longer
    {
        largestString = word2.length();
        
    }

    for(int i = 0; i < largestString; i++) // go for the entire length of the largest string
    {
        /* seperate if else statement by which is longer and if the shorter word is less than or equal to i.
        then the second two else ifs are for what to do when that is past
        */

        if(word1.length() == largestString && word2.length() > i )
        {
            thirdString += word1[i];
            thirdString += word2[i];
        }
        else if(word2.length() == largestString && word1.length() > i)
        {
            thirdString += word1[i];
            thirdString += word2[i];
        }
        else if(word1.length() == largestString && word2.length() <= i)
        {
            thirdString += word1[i];
        }
        else if(word2.length() == largestString && word1.length() <= i)
        {
            thirdString += word2[i];
        }
    }
    return thirdString;        
    }
};
