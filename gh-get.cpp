#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[])
{
    string gitstring, username, reponame;
    if (argc >= 4)
    {
        username = argv[2];
        reponame = argv[3];

        if (strcmp(argv[1], "https") == 0)
        {
            gitstring = "git clone https://github.com/" + username + "/" + reponame + ".git";
        }
        else if (strcmp(argv[1], "ssh") == 0)
        {
            gitstring = "git clone git@github.com:" + username + "/" + reponame + ".git";
        }
        else
        {
            cout << argv[1] << " is invalid - use https or ssh" << endl;
            exit(1);
        }
        system(gitstring.c_str());
    }
    else
    {
        cout << "Usage: gh-get https|ssh username repo" << endl;
    }
    return 0;
}