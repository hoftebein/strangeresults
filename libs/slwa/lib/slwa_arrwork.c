#include <stdio.h>
#include "slwa.h"

int intarr_size(int* arrptr) {
    int res = 0;
    for (int i = 0; ;i++) { //cycle until count != 0
        if (*(arrptr+i) == 0) return res;
        res++;
    }
}
/*it's fucked up a little, but it remainz like this for any time
i'll change it soon as i can*/
int chararr_size(char* arrptr) {
    int res = 0;
    for (int i = 0; ;i++) { //cycle until count != 0
        if (*(arrptr+i) == 0) return res;
        res++;
    }
}

/*func for find max value in int array*/
int intarr_searchmax(int* arrptr, int intarr_sizeof) {
    int max = 0;
    for (int i = 0; i < intarr_sizeof; i++)
        max = *(arrptr+i) > max ? *(arrptr+i) : max;
    return max;
}

/*func for find min value in int array*/
int intarr_searchmin(int* arrptr, int intarr_sizeof) {
    int min = 0;
    for (int i = 0; i < intarr_sizeof; i++)
        min = *(arrptr+i) < min ? *(arrptr+i) : min;
    return min;
}

int unite_twoarrays(char* first_arrptr, char* second_arrptr) {
    int firstarr_size = chararr_size(first_arrptr);
    int secarr_size = chararr_size(second_arrptr);
    if (firstarr_size != secarr_size) {
        //printf("ERROR: Arrays are not equal");
        return 1;
    } else {
        for (int i = 0; i < firstarr_size; i++) {
            if (*(first_arrptr+i) != *(second_arrptr+i)) {
                //printf("ERROR: Arrays are not equal");
                return 1;
            }
        }
    }
    //printf("SUCCESS: Arrays are equal");
    return 0;
}
/*i've deleted it 'cuz this work is really stupid
you can call var through ptr without that func*/
// void echo_varptr(int* ptr) {
//     printf("var is through ptr is: %d", *ptr); //call to var through ptr
// }
