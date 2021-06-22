#include <stdio.h>

int main()
{

    char key, data, encoded_val;

    key = 15;

    data = 20;

    encoded_val = key ^ data;

    printf("encoded value is: %d \n", encoded_val);

    return 0;
}