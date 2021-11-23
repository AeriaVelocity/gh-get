/*

gh-get - Makes cloning from a GitHub repo literally as easy as 1, 2, 3. Basically a wrapper for git clone.
Created by Arsalan Kazmi <That1M8Head>

Edited by Otus9051

This is a C program that was originally written in C++ and manually converted to C.

*/

/* Header declarations */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    /* Variable initialisation */
    char gitprovider[100] = "";
    char gitstring[140] = "";
    char username[25] = "";
    char reponame[30] = "";
    char destination[40] = "";

    /* Checking if the correct amount of arguments is supplied */
    if (argc >= 4)
    {
        strcat(username, argv[2]);
        strcat(reponame, argv[3]);
        strcat(gitprovider, argv[1]);
        if (argc > 4)
        { 

            printf("%s will be cloned to ", reponame);
            strcat(destination, argv[4]);
            printf("%s\n", destination);
        }

        /* Form the full git clone string */
        strcat(gitstring, "git clone ");
        strcat(gitstring, gitprovider);
        strcat(gitstring, "/");
        strcat(gitstring, username);
        strcat(gitstring, "/");
        strcat(gitstring, reponame);
        strcat(gitstring, " ");
        strcat(gitstring, destination);

        /* Run the git clone command */
        /* printf("%s\n", gitstring); */ // for debugging
        system(gitstring);
    }
    else
    /* If there were not enough arguments */
    {
        /* Inform the user on proper command usage*/
        printf("Incorrect amount of arguments supplied.\n");
        printf("Usage: gh-get <gitprovider> <username> <repo> [destination]\n");
    }
    return 0;
}
