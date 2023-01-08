#include <stdio.h>
#include "txtfunc.h"
#define LENGTH 4
#ifndef LINE
#define LINE 256
#define WORD 30
#endif
#define FUNCID 1
int main(){
    char word[WORD],  func[FUNCID+1] ;
    getword(word);
    getword(func);
    if (func[0] == 'a')
    {

        char line[LINE];
        getLine(line);
        printifcontains(word);
    }
    if (func[0] == 'b')
    {
        char line[LINE];
        getLine(line);
        printsimiliarwords(word);
    }


    return 0;
}