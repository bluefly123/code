//计算二进制表达式中数字位数为 '1' 的个数
class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t i = 0;
        while(n!=0){
            if(n&1){
                
                i++;
            }
        n=n>>1;
        }
        return i;
        
    }
};