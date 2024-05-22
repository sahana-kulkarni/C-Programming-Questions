/* Problem: Print the first non-repeated character from a string.
WTD: Examine the string and pinpoint the very first character that doesn't repeat elsewhere in the string.
e.g.: I/P: "swiss", O/P: "w" */

#include <stdio.h>

void uniqueChar(char *str){

    int freq[26] = {0}; //frequency of each character
    char *originalStr = str;    //copying the string into other variable

    while(*str != '\0'){    //counting the freqency
        freq[*str - 'a']++;
        str++;
    }

    str = originalStr;  //resetting the str variable

    while(*str != '\0'){    //printing the character if it's frequency count is 1
        if(freq[*str - 'a']==1){
            printf("%c",*str);
            break;
        }
        str++;
    }


}

int main(){

    char str[] = "swiss";   //user-input

    uniqueChar(str);

    return 0;
}