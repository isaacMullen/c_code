#include <stdio.h>

void to_lower(char *str)
{
    while(*str)
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;        
    }    
}

int string_length(char *str)
{
    int length = 0;

    while(*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main(void)
{
    char str[] = "HELLO";        

    //int len = string_length(str);

    to_lower(str);
    printf("%s", str);

    //printf("%d", len);


}