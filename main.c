#include <stdio.h>
#include "./libs/slwa/lib/slwa.h"
#include "./libs/sterr-handler/sterr-handler.h"

char _ADDCOMMAND_[] = {"-add"};
char _HELPCOMMAND_[] = {"--help"};

int main(int argc, char* argv[]) {
    //so, here must be some exams for truth of command
    //first (zero) element of array is name of binary file, so i'll approve to second (first, in sence) element in argv

    //so, here we go - exam of first command
    FILE* fileptr;
    if (argc == 1) {
        less_args();
        return 1;
    } else if (argc >= 2 || argc < 5) {
        if ((unite_twoarrays(_ADDCOMMAND_, *(argv+1))) == 0) {
            if (*(argv+2) != NULL) {
                if ((fileptr = fopen(*(argv+2), "r")) == NULL) {
                    printf("\033[31mERROR\033[0m: unabled to open file\n");
                } else {
                    printf("\033[32mSUCCESS\033[0m: file is opened successfully file\n");
                }
            } else {
                printf("\033[31mERROR\033[0m: enter file name\n");
                return 1;
            }
        } else if ((unite_twoarrays(_HELPCOMMAND_, *(argv+1))) == 0) {
            help();
        } else {
            printf("\033[31mERROR\033[0m: undefined argument. Possible arguments are:\n"
                " \033[34m'-add'\033[0m - for now, opening a file (in the future, for writin data there)\n"
                " \033[34m'-currptr'\033[0m - get name of current .cfg-file. \033[31mremoved command\033[0m");
            return 1;
        }
    } else {
        toomany_args();
        return 1;
    }
    // FOR DEBUGGING for (int i = 0; i < argc; i++) {
    //     printf("%d element of argc is: %s\n", i, *(argv+i));
    // }

    //printf("element is: %s", *(argv+1));


    /*TEMPLATE OF EXAM OF PTR TO FILE
    FILE* fp;
    if (argc < 1) {
        printf("\033[31mERROR\033[0m: less count of arguments\n");
        return 1;
    } else if (argc == 2) {
        if ((fp = fopen(*(argv+1), "r")) == NULL) {
            printf("\033[31mERROR\033[0m: unabled to open file\n");
            return 1;
        }
    } else {
        printf("\033[31mERROR\033[0m: too many arguments\n");
        return 1;
    }*/
    return 0;
}
