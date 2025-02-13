#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "print_correct_numbers.h"

struct controlStatus{
    char hd[3]; // hour's digit
                   
    char md[3]; // minute's digit
} status;

struct timePrintablePointer{
    char (*fDH)[6][9]; // first digit hour
    char (*sDH)[6][9]; // second digit hour
    char (*fDM)[6][9]; // first digit minute
    char (*sDM)[6][9]; // second digit minute
} timePointers;

int main(){
    char lastNumber;

    for(;;){
        // update the current time at every loop
        time_t t = time(NULL);
        status.md[1] = asctime(localtime(&t))[15];

        if(lastNumber == status.md[1])
            continue;
        // just run the lines above if the last conditional is not true (it means that the time has changed)

        system("clear"); // it might not work in some OS that not UNIX based
        status.hd[0] = asctime(localtime(&t))[11];
        status.hd[1] = asctime(localtime(&t))[12];

        status.md[0] = asctime(localtime(&t))[14];

        print(status.hd, status.md);

        printf("\n");

        lastNumber = status.md[1];
        continue;
    };
    return 0;
};

