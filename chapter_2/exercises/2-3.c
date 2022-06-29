#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int htoi(char s[]);

/* Write a function htoi(s), which converts a string of hexadecimal digits
   (including an optional 0x or 0X) into its equivalent integer value.
   The allowable digits are 0 through 9, a through f, and A through F. */
int main(void){
    int result = htoi("0xabc123");
    if (result >= 0){
        printf("%d\n", result);
    }
    else {
        printf("ERROR: Invalid string entered (%d)\n", result);
    }

    return 0;
}

int htoi(char s[]){
    int i;
    int result = 0;
    int multiplier = 0;

    int length = strlen(s);
    for (int i = length - 1; i >= 0; --i){
        if (s[i] >= '0' && s[i] <= '9'){
            result += pow(16, multiplier) * (s[i] - '0');
        }
        else if (s[i] >= 'a' && s[i] <= 'f' || s[i] >= 'A' && s[i] <= 'F'){
            result += pow(16, multiplier) * ((tolower(s[i]) - 'a') + 10);
        }
        else if (s[i] == 'x' || s[i] == 'X'){
            if (i != 1){
                return -1;
            }
            else if (s[0] != '0'){
                return -2;
            }
        }
        else{
            return -3;
        }
        ++multiplier;
    }

    return result;   
}