//
//  kilo.c
//  Kilo
//
//  Created by Steven Deutsch on 3/14/18.
//  Copyright © 2018 Steven Deutsch. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    char c;
    while (read(STDIN_FILENO, &c, 1) == 1);
    return 0;
}
