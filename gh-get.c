/*

gh-get - Makes cloning from a GitHub repo literally as easy as 1, 2, 3. Basically a wrapper for git clone.
Created by Arsalan Kazmi <That1M8Head>

This is a C program that was originally written in C++ and manually converted to C.

*/

/* Header declarations */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    /* Variable initialisation */
    char gitstring[140] = "";
    char username[25] = "";
    char reponame[50] = "";
    char destination[50] = "";

    /* Checking if the correct amount of arguments is supplied */
    if (argc >= 3)
    {
        if (strcmp(argv[1], "https") == 0)
        /* If the user chose HTTPS mode */
        {
            /* Store arguments to variables */
            strcat(username, argv[2]);
            strcat(reponame, argv[3]);
            if (argc > 3) { strcat(destination, argv[4]); }

            /* Form the full git clone string (https) */
            strcat(gitstring, "git clone https://github.com/");
            strcat(gitstring, username);
            strcat(gitstring, "/");
            strcat(gitstring, reponame);
        }
        else if (strcmp(argv[1], "ssh") == 0)
        /* If the user chose SSH mode */
        {
            /* Store arguments to variables */
            strcat(username, argv[2]);
            strcat(reponame, argv[3]);
            if (argc > 3) { strcat(destination, argv[4]); }
            
            /* Form the full git clone string (ssh) */
            strcat(gitstring, "git clone git@github.com:");
            strcat(gitstring, username);
            strcat(gitstring, "/");
            strcat(gitstring, reponame);
        }
        else
        {
            /* If the user typed something other than https or ssh, https will be used instead */
            
            /* Store arguments to variables */
            strcat(username, argv[1]);
            strcat(reponame, argv[2]);
            if (argc > 2) { strcat(destination, argv[3]); }

            /* Form the full git clone string (https) */
            strcat(gitstring, "git clone https://github.com/");
            strcat(gitstring, username);
            strcat(gitstring, "/");
            strcat(gitstring, reponame);
            if (argc > 2) { strcat(gitstring, " "); strcat(gitstring, destination); }
            
        }
        /* Run the git clone command */
        system(gitstring);
    }
    else
    /* If there were not enough arguments */
    {
        /* Inform the user on proper command usage*/
        printf("Incorrect amount of arguments supplied.\n");
        printf("Usage: gh-get [https|ssh] <username> <repo> [destination]\n");
    }
    return 0;
}
