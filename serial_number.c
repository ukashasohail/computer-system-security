#include <stdio.h>

int main (){

    char in[75];

    printf("\nEnter Serial Number\n");
    scanf("%s", in);

    if(!strncmp(in, "S123N456"), 8){
        printf("Serial number is correct. \n");
    }

    return 0;
}