//2785
class Solution {
public:
        
    bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U');
}
    
    string sortVowels(string s) {
        string t = s;
        vector<int> vowel;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])) vowel.push_back((int)s[i]);
        }
        if(vowel.size()==0) return s;
        sort(vowel.begin(), vowel.end());
        int j=0;
        for(int i=0;i<t.length();i++){
            if(isVowel(t[i])) {t[i]=(char)vowel[j++];}
        }
        
        return t;
    }
};
