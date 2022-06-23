// Fig. 7.13: fig07_13.c
// Attemptin to modify a constat pointer to non-constant data.
#include <stdio.h>

int main(void)
{
    int x; // define x
    int y; // define y

    // ptr is a constant pointer to an integer tha can be modified
    // through ptr, but prt always points to the same memory location
    int * const ptr = &x;

    *ptr = 7; // allowe: *ptr is not const
    ptr = &y; // error: ptr is const; cannot assing new address
}