#include <stdio.h>
#include <stdlib.h>

#define WINDOWS 0
#define MAC 1
#define LINUX 2

/**
 * Common error, entering an invalid OS flag number.
*/
void print_os_help()
{
    printf("ERROR: Please Enter Valid OS ID\n");
    printf("\tWindows = 0\n\tMac = 1\n\tLinux = 2\n");
    printf("Example (Windows): .\\Compile.exe 0\n");
    exit(-1);
}

int main(int argc, char* argv[])
{
    if (argc < 2) { print_os_help(); }

    // Compile the application for the user 
    // depending on what system they're using.
    char* appName = argc > 2 ? argv[2] : "MyGame";
    switch ((int)(argv[1][0] - '0'))
    {
        case WINDOWS:
            printf("Ew! Windows...\n");
            break;
        case MAC:
            printf("Ew! Mac...\n");
            break;
        case LINUX:
            printf("Ew! Linux...\n");
            break;
        default:
            print_os_help();
            break;
    }

    printf(
        "Application Successfully Compiled! [ %s.exe ]\n",
        appName
    );
    return 0;
}