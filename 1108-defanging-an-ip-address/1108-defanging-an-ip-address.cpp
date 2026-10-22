class Solution {
public:
    string defangIPaddr(string address) {
        string og="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                og=og+"[.]";

            }
            else{
                og=og+address[i];
            }
        }
        return og;
    }
};