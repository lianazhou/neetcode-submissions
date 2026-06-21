class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int high = *max_element(piles.begin(), piles.end());
        int low = 1;
        int mid = (high +  low) / 2;
        int lowestHour;
        while(high >= low)
        {
            int hours = 0;
            mid = (high + low)/2;
            for(int i = 0; i < piles.size(); i++)
            {
                hours += (piles[i] + mid - 1)/mid;
            }
            if (hours > h)
            {
                low = mid + 1;
            }
            else
            {
                lowestHour = mid;
                high = mid - 1;
            }
            hours = 0;
        }
        return lowestHour;
    
    };
    
    };

