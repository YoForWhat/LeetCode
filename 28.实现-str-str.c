/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 实现 strStr()
 */

// @lc code=start


int strStr(char * haystack, char * needle){
    int needle_len = strlen(needle);
    int haystack_len = strlen(haystack);
    if(needle_len==0){
        return 0;
    }
    int j = 0;
    for(int i = 0 ; i < haystack_len ; i++){

        if(haystack[i] == needle[j]){
            j++;
        }else{
            i = i-j;
            j = 0;
        }
        if(j==needle_len){
            return i - j +1 ;
        }

    }
    return -1;
}
// @lc code=end

