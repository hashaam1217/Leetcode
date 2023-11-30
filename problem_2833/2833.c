#include <stdio.h>
#include <stdlib.h>

int furthestDistanceFromOrigin(char * moves){
    //Returns number of R's and L's
    int R_count = 0;
    int L_count = 0;
    int empty_length = 0;
    int stop = 0;
    int i = 0;
    while (stop != 1)
    {
        switch(moves[i]){
            case 'R':
                R_count++;
                break;
            case 'L':
                L_count++;
                break;
            case '_':
                empty_length++;
                break;
            default:
                stop = 1;
                break; 
        }
        i++;
    }
    int result = 0;
    if (L_count > R_count) result += L_count + empty_length - R_count;
    else result += R_count + empty_length - L_count;
    return result; 
    
}

int main(void)
{

    char* string = "L_RL__R";
    int result = furthestDistanceFromOrigin(string);
    printf("%i\n", result);

    char* string_2 = "_R__LL_";
    int result_1 = furthestDistanceFromOrigin(string_2);
    printf("%i\n", result_1);

    char* string_3 = "_______";
    int result_3 = furthestDistanceFromOrigin(string_3);
    printf("%i\n", result_3);
}
