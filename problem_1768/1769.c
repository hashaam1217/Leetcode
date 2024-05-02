#include <stdio.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    int i = 0;
    int j = 0;
    int counter = 0;
    char * result = (char*)malloc(1000 * sizeof(char));
    while (word1[i] != '\0' || word2[j] != '\0')
    {
        if (word1[i] != '\0')
        {
            result[counter] = word1[i];
            counter++;
            i++;
        }

        if (word2[j] != '\0')
        {
            result[counter] = word2[j];
            counter++;
            j++;
        }

    }
    result[counter] = '\0';
    return result;
}


int main(void)
{
    char* word1 = "ab";
    char* word2 = "pqrs";
    printf("Merge Alternatively: \n");
    char* result = mergeAlternately(word1, word2);
    printf("%s\n", result);
    return 0;
}
