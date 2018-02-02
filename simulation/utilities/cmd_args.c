#include "cmd_args.h"

void process_cmd_args(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-h") == 0)
        {
            printf("Input initial steplenght: ");
            scanf("%Lf", &h);
        }
        else
        {
            printf("Illegal CMD Argument: %s\n", argv[i]);
        }
    }
}