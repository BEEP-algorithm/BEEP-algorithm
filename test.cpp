#include <iostream>
#include "BEEP/Beep.h"

using namespace std;

int main() {
    char *quantitative_argv[] = {
            "",
            "-i",
            "./quantitative_base.dat",
            "-w",
            "true"
    };
    int quantitative_argc = sizeof(quantitative_argv) / sizeof(char *);
    enter_beep(quantitative_argc, quantitative_argv);
}
