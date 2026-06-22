class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";

        for(string s : strs)
        {
            string st = s;
            int length = st.length();

            str = str + to_string(length) + "#" + s;
        }
        return str;        
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while(i < s.length())
        {
            int  j = i;

            while(s[j] != '#')
            {
                j++;
            }

            int len = stoi(s.substr(i, j-i)); // getting the length of the word
            j++; // moving to the index '#' --> word first letter
            ans.push_back(s.substr(j, len));

            i = j + len;
        }
        return ans;
    }
};
