/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        int c=0;
        for(int i=1; i<n; i++)
        {
            if (knows(c,i))
                c=i;
        }
        bool isCelibrity = true;
        for(int i=0; i<n;i++)
        {
            if(i!=c && (knows(c,i) == true || knows(i,c) == false ))
            {
              isCelibrity = false;  
            }
        }
        if (isCelibrity)
            return c;
        return -1;
    }
};