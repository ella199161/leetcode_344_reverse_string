class Solution {
public:
    string reverseString(string s) {
string y=s;

        int ll=s.length();
  
        
        for (int i=0;i<ll;i++)
        {
            y[ll-i-1]=s[i];
        }

return y;
 
 
    }
};
