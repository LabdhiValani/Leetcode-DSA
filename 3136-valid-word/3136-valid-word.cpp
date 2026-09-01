class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3){
            return false;
        }
        bool vowel=false;
        bool consonant=false;
        for(int i=0;i<word.size();i++){
        char ch=word[i];
        if(!((ch>='a'&& ch<='z')||
        (ch>='A'&&ch<='Z')||
        (ch>='0'&&ch<='9'))){
        return false;
        }
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
        ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vowel=true;
        }
        else if((ch>='a'&& ch<='z')||
        (ch>='A'&&ch<='Z')){
            consonant =true;
        }
        }
        return vowel && consonant;
    }
};