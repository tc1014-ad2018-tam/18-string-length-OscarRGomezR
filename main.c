/*
Write a function in C to find the lenght of a string without using the standard library function (strlen).
Name: Óscar Rubén Gómez Ríos
Mail: A01411750@itesm.mx
Matricule Number: A01411750
Date: 17/10/2018
 */

#include <stdio.h>
#define n 1000

int main()
{
    char string[n];
    int a;

    printf("Give me a string: ");
    gets(string);

    for(a = 0; string[a] != '\0'; ++a);

    printf("Length of string: %d", a);
    return 0;
}