#make file - this is a comment section
CC=gcc  #compiler
TARGET=cesar    #target file name
all:    cesar.o decode.o
    $(CC) cesar.c decode.c -o $(TARGET)
clean:
    rm *.o $(TARGET)

