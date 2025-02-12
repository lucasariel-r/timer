#include <stdio.h>
#include <time.h>
#include "numbers_printed.h"

struct controlStatus{
    char hd[3]; // hour's digit
                   
    char md[3]; // minute's digit
              
    char fSD; // first second's digit
    char sSD; // second second's digit
} status;

int main(){
    definePrintableNumbers();

    char lastNumber;

    for(;;){
        time_t t = time(NULL);
        status.sSD = asctime(localtime(&t))[18];

        if(lastNumber == status.sSD)
            continue;

        status.hd[0] = asctime(localtime(&t))[11];
        status.hd[1] = asctime(localtime(&t))[12];

        status.md[0] = asctime(localtime(&t))[14];
        status.md[1] = asctime(localtime(&t))[15];

        status.fSD = asctime(localtime(&t))[17];

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 8; j++){
                printf("%c", zero[j][i]);
            };
            printf("\n");
        };

        getchar();

        lastNumber = status.sSD;
        continue;
    };

    /*printf("%c", asctime(localtime(&t))[17] );*/
    /*printf("%c", asctime(localtime(&t))[18] );*/
    
    return 0;
};

