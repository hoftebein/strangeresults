/*that's header file of my first library in my life
i've got ideah 'hmmm, it's good to have my own library for working with arrays, right?'
what was the reason of that idea? i'm new guy to C (on this moment i'm 16),
so to gain experience i decided to write my own simple library that I would
need to solve some simple problems, like comparing arrays, or something like that
*/
#ifndef __SLWA__
#define __SLWA__

int intarr_size(int* arrptr);
int intarr_searchmax(int* arrptr, int intarr_sizeof);
int intarr_searchmin(int* arrptr, int intarr_sizeof);
int unite_twoarrays(char* first_arrptr, char* second_arrptr);
//void echo_varptr(int* ptr);

#endif
