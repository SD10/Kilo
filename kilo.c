//
//  kilo.c
//  Kilo
//
//  Created by Steven Deutsch on 3/14/18.
//  Copyright © 2018 Steven Deutsch. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <termios.h>

void enableRawMode() {
    struct termios raw;

    tcgetattr(STDIN_FILENO, &raw);

    raw.c_lflag &= ~(ECHO);

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

int main(int argc, const char * argv[]) {
    enableRawMode();

    char c;
    while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
    return 0;
}
