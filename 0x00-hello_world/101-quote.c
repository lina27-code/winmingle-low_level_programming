#include <unistd.h>

/**
 * Author: Otu Faith Kokuwa
 * Program: WinMingle Community C Training
 * Description: Prints a quote to standard error
 */

/**
 * main - Entry point
 * Return: Always 1
 */

int main(void){

    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);

    return 1;
}
