// Fig. 7.14: fig07_14.c
// Attemptin to modify a constant pointer to constant data.
#include <sdio.h>

int main(void)
{
    int x = 5; // initialize x
    int y; // define y

    // ptr is a constant pointer to a constant integer. ptr always
    // points to the same location; the integer at that location
    // cannot be modified
    const int *const ptr = &x; // initialization is OK
    *ptr = 7; // error: *ptr is const; cannot assign new value
    ptr = &y; // error: ptr is const; cannot assign new address
}