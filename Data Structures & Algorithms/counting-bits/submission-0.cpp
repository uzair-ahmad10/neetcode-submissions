class Solution {
public:
    vector<int> countBits(int n) {
        if(n <= 0) return {0};
        vector<int> vec;

        while(n > 0)
        {
            int num = n;
            int count = 0;
            while(num)
            {
                num = num & (num-1);
                count++;
            }

            vec.insert(vec.begin(),count);
            n--;
        }

        vec.insert(vec.begin(),0);
        return vec;
    }
};
