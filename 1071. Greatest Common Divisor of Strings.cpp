class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string commonCharacters, shortestString,longestString;

    int greatestCD = gcd(str1.length(), str2.length());
    if (str1.length() <= str2.length())
    {    
        shortestString = str1;
        longestString = str2;
    }
    else
    {
        shortestString = str2;
        longestString = str1;
    }
    for(int i =0; i< shortestString.length(); i++)
    {
        if(str1[i] == str2[i])
        {
            commonCharacters += str1[i];
        }
        if(commonCharacters.length() == greatestCD)
        {
            break;
        }
    }

    
    vector<string> chunks1;

    for (size_t i = 0; i < longestString.length(); i += greatestCD) 
    {
        chunks1.push_back(longestString.substr(i, greatestCD));
    }
    if (chunks1.empty() || chunks1.size() == 1)
     {
        return "";
    }
    
    // Check if all strings are the same using a for loop
    for (size_t i = 1; i < chunks1.size(); i++) {
        if (chunks1[i] != commonCharacters) 
        {
            return "";
        }
    }
        vector<string> chunks2;

    for (size_t i = 0; i < shortestString.length(); i += greatestCD) 
    {
        chunks2.push_back(shortestString.substr(i, greatestCD));
    }

    
    // Check if all strings are the same using a for loop
    for (size_t i = 1; i < chunks2.size(); i++) {
        if (chunks2[i] != commonCharacters) 
        {
            return "";
        }
    }
    return commonCharacters;
    }
};
