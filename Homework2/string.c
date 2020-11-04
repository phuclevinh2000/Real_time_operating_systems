#include <stdio.h>

//this is string function

//check string length
int my_strlen(char *s)
{
    int c=0;
    while(*(s+c) != '\0') c++;
    return c;
}

//convert tto upper case
int str2upper(char *s)
{
    int count=0;
    int i;
    for(i=0; *(s+i) !='\0'; i++)
    {
        if(*(s+i) >= 'a' && *(s+i) <= 'z') {
            *(s+i)-=32;
            count++;
        }
    }
    return count;
}

//convert to lower case
int str2lower(char *s)
{
    int count=0,i;
    for(i=0; *(s+i) !='\0'; i++)
    {
        if(*(s+i) >= 'A' && *(s+i) <= 'Z') {
            *(s+i)+=32;
            count++;
        }
    }
    return count;

}

int str_strip_numbers( char *s)
{
    for(int i=0,j;*(s+i) != '\0'; ++i)
    {
        while(!(*(s+i) >= 'a' && *(s+i) <= 'z') && !(*(s+i) >= 'A' && *(s+i) <= 'Z') && !(*(s+i) == '\0'))
        {
            for(j = i; *(s+j) != '\0'; ++j) *(s+j) = *(s+j+1); //if found any character beside alphabet then assign j+1 index into j index
            *(s+j)= '\0';
        }
    }

    //count the length now
    int count=0;
    while(*(s+count) != '\0') count++;
    return count;
}
//copy string
void my_strcpy(char *s,char *d)
{
    int i=0;
    while(*(d+i) != '\0')
    {
        *(s+i)= *(d+i);
        i++;
    }
    *(s+i)='\0';
}

int my_strcmp (char *s, char *d)
{
    //compare string, have two case: len a > len b ; len b > len a
    int len2=0,len1=0;
    while(*(s+len1) != '\0') len1++;
    while(*(d+len2) != '\0') len2++;

    int status=0,i=0;
    if(len1>=len2)
    {
        while(*(s+i) != '\0')
        {
            if(*(s+i) != *(d+i))
            {
                status= -1;
                if((*(s+i) - *(d+i))>0) status=i+1;
                else status=-i-1;
                break;
            }
        i++;
        }
    }
    else
    {
        while(*(d+i) != '\0')
        {
            if(*(d+i) != *(s+i))
            {
                status= -1;
                if((*(s+i) - *(d+i))>0) status=i+1;
                else status=-i-1;
                break;
            }
        i++;
        }
    }
    return status;
}

const char * my_strdupl(char *s)
{
    //duplicate string, return the input sttring.
    return s;
}

