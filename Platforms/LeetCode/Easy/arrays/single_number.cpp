#include <vector>

using namespace std;

/*  
    Time: O(n)
    Space: O(1)
    
    If we take XOR of zero and some bit, it will return that bit 'a' 
       a ⊕ 0 = a
    
    If we take XOR of two same bits, it will return 0
        a⊕a=0
    
        a ⊕ b ⊕ a = (a ⊕ a) ⊕ b = 0 ⊕ b => b

    So we can XOR all bits together to find the unique number.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c = 0;
        for(int i: nums) {
            c^=i;
        }
        
        return c;
    }
};