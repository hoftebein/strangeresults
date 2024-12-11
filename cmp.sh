#if you want to change some library files, so you must
#change here names of files, if you've changed files names, of course
#note: folder 'obj' - folder with object files
#folder 'lib' - folder with lib .h files (i can call it like 'library folder')
#folder 'out' - folder with binary files (out files)
#folder with main - folder with main.c file itself (i can call it like 'main src' (about obly main.c file))

#!/bin/fish
gcc -g -Wall -c -o ./libs/slwa/obj/main.o main.c #so, write here instead 'main.c' name of your main-c file
gcc -g -Wall -c -o ./libs/slwa/obj/slwa_arrwork.o ./libs/slwa/lib/slwa_arrwork.c #cd to libfiles for compile using libfiles in .o files
gcc -g -Wall -c -o ./libs/slwa/obj/sterr-handler.o ./libs/sterr-handler/sterr-handler.c #cd to libfiles for compile using libfiles in .o files
gcc -g -Wall -o ./out/main ./libs/slwa/obj/slwa_arrwork.o ./libs/slwa/obj/sterr-handler.o ./libs/slwa/obj/main.o
