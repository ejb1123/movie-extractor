#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main()
{

    char savetodir;
    string savetodirs;
    cout << "welcome" << endl;
    cout << "save to: ";
    cin >> savetodirs;
    string command;
    command = "makemkvcon mkv disc:0 all " + savetodirs;
    cout << "ready y/n :";
    string a;
    cin >> a;
    if (a=="y")
        {
            system(command.c_str());
        }
      else
      {
          cout << "get ready";
      }
    return 0;
}
