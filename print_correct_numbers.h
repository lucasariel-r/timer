#include <stdio.h>
#include "numbers_printed.h"

int print(char *hd, char *md){
    definePrintableNumbers();

    for(int i = 0; i < 6; i++){
        for(int r = 0; r < 2; r++){
            printf(" ");
            for(int j = 0; j < 8; j++){
                switch(hd[r]){
                    case '0':
                        printf("%c", zero[j][i]);
                        break;

                    case '1':
                        printf("%c", one[j][i]);
                        break;

                    case '2':
                        printf("%c", two[j][i]);
                        break;

                    case '3':
                        printf("%c", three[j][i]);
                        break;

                    case '4':
                        printf("%c", four[j][i]);
                        break;

                    case '5':
                        printf("%c", five[j][i]);
                        break;

                    case '6':
                        printf("%c", six[j][i]);
                        break;

                    case '7':
                        printf("%c", seven[j][i]);
                        break;

                    case '8':
                        printf("%c", eight[j][i]);
                        break;

                    case '9':
                        printf("%c", nine[j][i]);
                        break;
                };
            };
        };

        for(int j = 0; j < 8; j++){
            printf("%c", twoPoints[j][i]);
        };

        for(int r = 0; r < 2; r++){
            printf("  ");
            for(int j = 0; j < 8; j++){
                switch(md[r]){
                    case '0':
                        printf("%c", zero[j][i]);
                        break;

                    case '1':
                        printf("%c", one[j][i]);
                        break;

                    case '2':
                        printf("%c", two[j][i]);
                        break;

                    case '3':
                        printf("%c", three[j][i]);
                        break;

                    case '4':
                        printf("%c", four[j][i]);
                        break;

                    case '5':
                        printf("%c", five[j][i]);
                        break;

                    case '6':
                        printf("%c", six[j][i]);
                        break;

                    case '7':
                        printf("%c", seven[j][i]);
                        break;

                    case '8':
                        printf("%c", eight[j][i]);
                        break;

                    case '9':
                        printf("%c", nine[j][i]);
                        break;
                };
            };
        };

        puts("");
    };
    return 0;
};

