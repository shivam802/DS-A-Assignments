class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> alpha(123);
        alpha[97] = ".-";
        alpha[98] = "-...";
        alpha[99] = "-.-.";
        alpha[100] = "-..";
        alpha[101] = ".";
        alpha[102] = "..-.";
        alpha[103] = "--.";
        alpha[104] = "....";
        alpha[105] = "..";
        alpha[106] = ".---";
        alpha[107] = "-.-";
        alpha[108] = ".-..";
        alpha[109] = "--";
        alpha[110] = "-.";
        alpha[111] = "---";
        alpha[112] = ".--.";
        alpha[113] = "--.-";
        alpha[114] = ".-.";
        alpha[115] = "...";
        alpha[116] = "-";
        alpha[117] = "..-";
        alpha[118] = "...-";
        alpha[119] = ".--";
        alpha[120] = "-..-";
        alpha[121] = "-.--";
        alpha[122] = "--..";
        
        set<string> s;
            for( int i=0;i<words.size();i++)
            {string ans="";
                 string x= words[i];
                for( int j=0;j<x.length();j++)
                {ans+=alpha[x[j]];
                  
                 
                }
                s.insert(ans);
                
            }
        return s.size();
    }
};
