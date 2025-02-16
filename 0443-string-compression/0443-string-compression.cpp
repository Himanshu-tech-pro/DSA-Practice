class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int Idx = 0;
        for(int i=0 ; i<n; i++){
            char ch = chars[i];
            int cnt =0;
            while(i<n && chars[i] == ch){
                cnt++; i++ ;
            }
            if(cnt ==1){
                chars[Idx++] = ch;
            }
            else {
                chars[Idx++] = ch;
                string str = to_string(cnt);
                for( char digit: str){
                    chars[Idx++] = digit ;
                }
            }
            i-- ;
        }
        chars.resize(Idx);
        return Idx;
    }
};