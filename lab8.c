#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

int mygetch()
{
    struct termios oldt, newt;
    int c;
    tcgetattr( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    c = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
    return c;
}



int main()
{
    char x = 0;
    printf("Введите последовательность цифр\n");
    while(1)
    {
        x = mygetch();
        if(!isalnum(x) && !ispunct(x))
        {
            if(x == 0x7f  && x != 0x1b)
                break;
            continue;
        }
        else
        {
            if (isdigit(x) && !ispunct(x))
            {
                if (x == 57)
                    x = 48;
                else
                    x++;
                printf("%c", x);
            }
            else
            printf("%c", x);
        }
    }
    printf("\n");
    return 0;
}
