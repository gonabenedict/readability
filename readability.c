#include <stdio.h>
#include <ctype.h>


int main()
{
    char text[999];
    printf("enter text:");
    scanf("%s", &text);

    int letters = 0;
    for(int i=0; text[i] != '\0'; i++) {
        if(isalpha(text[i])){letters++;}
    }

    int sentences = 0;
    for(int i=0; text[i] != '\0'; i++)
        {
        if(text[i]== '.' || text[i]== '?' || text[i]== '!'){sentences++;}
    }

    int words = 1;
    for(int i=0;text[ i] != '\0'; i++) {
        if(text[i]== ' '){words++;}
    }
    float L=letters/words*100;
    float S = sentences/words*100;

    float colemans =  0.0588 * L - 0.296 * S - 15.8;
    if(colemans < 1) {
        printf("before grade 1\n");
    }
    else if (colemans >= 16) {
        printf("grade 16+\n");
    }
    else {
        printf("grade %.2f\n", colemans);
    }
    return 0;
}