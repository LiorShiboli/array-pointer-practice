#include <stdio.h>
#include <string.h>
#include "txtfunc.h"
#define LINE 256
#define WORD 30
#define CHANGES 1
int getLine(char s[]){
    char letter;
    int i=0;
    while (scanf("%c",&letter)&& letter!='\n')
    {
        s[i]=letter;
        i++;
    }
    s[i]='\0';
    return i;

}
int getword(char s[]){
    char letter;

    int i=0;

    while (scanf("%c",&letter)&& letter!='\n'&&letter!=' '&&letter!='\t')
    {
        s[i]=letter;
        i++;
    }
    s[i]='\0';
    return i;

}

void printifcontains(char s[]){
    char line[LINE] ;
    while (getLine(line))
    {
    char *wordstart = line,*wordindex = s;
    int doescontain = 0, i=0 ;
    while (*(wordstart)!='\0')
    {
        if (*(wordstart)!=*(wordindex))
        {
            wordindex = s ;
        }
        else
        {
            wordindex++;
            if (*(wordindex)=='\0')
            {
                doescontain=1;
            }

        }

        wordstart++;

    }
    if (doescontain)
    {
        printf("%s \n",line);
    }
    }

}
void printsimiliarwords(char s[]){
char word[WORD];
int lenword=0,lens = strlen(s);
    while (lenword=getword(word))
    {

        if (lenword - CHANGES <=lens )
        {
            char *wordstart = word,*wordindex = s;
            int doescontain = 0, i=0 ;
            while (*(wordstart)!='\0')
            {
                if (*(wordstart)==*(wordindex))
                {
                    wordindex++;
                    if (*(wordindex)=='\0')
                    {
                      doescontain = 1;
                    }
                }
               wordstart++;
            }
        if (doescontain)
        {
            printf("%s\n",word);
        }


        }
    }


}