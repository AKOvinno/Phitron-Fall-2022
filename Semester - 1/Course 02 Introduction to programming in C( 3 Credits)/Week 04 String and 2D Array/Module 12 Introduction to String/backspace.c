/*CR and LF are control characters or bytecode that can be used to mark a line break in a text file.

    CR = Carriage Return (\r, 0x0D in hexadecimal, 13 in decimal) — moves the cursor to the beginning of the line without advancing to the next line.
    LF = Line Feed (\n, 0x0A in hexadecimal, 10 in decimal) — moves the cursor down to the next line without returning to the beginning of the line.

A CR immediately followed by a LF (CRLF, \r\n, or 0x0D0A) moves the cursor down to the next line and then to the beginning of the line.
*/
#include <stdio.h>

int main ()
{
    printf("hello wor\b\bld\n");
    printf("         there is hello world\rafter cr");
    return 0;

}
