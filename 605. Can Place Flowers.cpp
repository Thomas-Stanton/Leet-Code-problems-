class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
     {
        /*
        place flower in array of the position after and before it are also 0. at end of array if there are flowers to plant left, then return false. if all flowers are 
        planted, then return true.
        */
         int size = flowerbed.size();
        for(int i =0; i < size; i++)
        {
            if (flowerbed[i] == 0) {
                // Check neighbors safely
                bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRight = (i == size - 1) || (flowerbed[i + 1] == 0);

                if (emptyLeft && emptyRight && n > 0) {
                    flowerbed[i] = 1;
                    n--;
                    if (n == 0)
                        return true;
                }
        }
        }
        if(n==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    
    }
};
