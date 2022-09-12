#include<unistd.h>
/** 
* main -prints exactly and that piece of art is useful
* Dora Korpar, 2015-10-19, followed by a new line
* return - the return value is 1
*/

int main()
{
    write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",60);
    return(1);
}
