#include <stdio.h>
#include "sterr-handler.h"

void less_args() {
    printf("\033[31mERROR\033[0m: less count of arguments. Possible arguments are:\n"
        " \033[34m'-add'\033[0m - for now, opening a file (in the future, for writin data there)\n"
        " \033[34m'-currptr'\033[0m - get name of current .cfg-file. \033[31mremoved command\033[0m");
}

void toomany_args() {
    printf("\033[31mERROR\033[0m: too many arguments. Possible arguments are:\n"
        " \033[34m'-add'\033[0m - for now, opening a file (in the future, for writin data there)\n"
        " \033[34m'-currptr'\033[0m - get name of current .cfg-file. \033[31mremoved command\033[0m");
}

void help() {
    printf("Hello to Strangeresults.\n"
        " That's a small utility to save a description of your achievements\n"
        "  in text format in a specific file, from where you can later view\n"
        " all your achievements, and thus keep statistics of the things you\n"
        " have done.\n\n"
        " Possible arguments of Strangeresults are:\n"
        " \033[34m '--help'\033[0m - output info about the utility\n"
        " \033[34m '-add'\033[0m - for now, opening a file (in the future, for writing data there)\n"
        " \033[34m '-currptr'\033[0m - get name of current .cfg-file\033[31m removed command \033[0m\n");
}
