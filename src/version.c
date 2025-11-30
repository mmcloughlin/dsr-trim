#include "version.h"

#include <stdio.h>

#ifndef GIT_VERSION
#define GIT_VERSION "<unknown>"
#endif

void print_version_info() {
    printf("%s\n", GIT_VERSION);
}
