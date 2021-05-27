#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
    char gitstring[140];
    char username[25];
    char reponame[50];
    if (argc >= 4)
    {
        strcat(username, argv[2]);
        strcat(reponame, argv[3]);

        if (strcmp(argv[1], "https") == 0)
        {
            strcat(gitstring, "git clone https://github.com/");
            strcat(gitstring, username);
            strcat(gitstring, "/");
            strcat(gitstring, reponame);
        }
        else if (strcmp(argv[1], "ssh") == 0)
        {
            strcat(gitstring, "git clone git@github.com:");
            strcat(gitstring, username);
            strcat(gitstring, "/");
            strcat(gitstring, reponame);
        }
        else
        {
            printf("%s is invalid - use https or ssh", argv[1]);
            exit(1);
        }
        system(gitstring);
    }
    else
    {
        printf("Usage: gh-get https|ssh username repo");
    }
    return 0;
}