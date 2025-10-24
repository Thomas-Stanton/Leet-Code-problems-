class Solution {
public:
    string reverseVowels(string s) 
    {
    /*
        take a placeholder char that holds the vowel of the changing position. equal the one taking its place and put the placeholder in the replacers spot.
    */   
    string reversed = s;
    int firstposition = s.length(), secondposition = s.length() -1;
    for(int i =0; i< firstposition; i++)
    {
        char placeholder;
        if(reversed[i] == 'a' ||reversed[i] == 'A' ||reversed[i] == 'e' ||reversed[i] == 'E' ||reversed[i] == 'I' ||reversed[i] == 'i' ||reversed[i] == 'O' ||reversed[i] == 'o' ||reversed[i] == 'U' ||reversed[i] == 'u')
        {
            placeholder = s[i];
            for(int j = secondposition; j > i; j--)
            {
                if(reversed[j] == 'a' ||reversed[j] == 'A' ||reversed[j] == 'e' ||reversed[j] == 'E' ||reversed[j] == 'I' ||reversed[j] == 'i' ||reversed[j] == 'O' ||reversed[j] == 'o' ||reversed[j] == 'U' ||reversed[j] == 'u')
                    {
                        reversed[i] = reversed[j];
                        reversed[j] = placeholder;
                        firstposition = j;
                        secondposition = j-1;
                        break;
                    }
            }
        }
    }

    return reversed;
    }
};
