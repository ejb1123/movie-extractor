#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
string gcommand;

int rip ()
{
   system(gcommand.c_str());
}

int choice ()
{
    cout << "ready y/n :";
    string a;
    cin >> a;
    if (a=="y")
        {
            rip();
        }
      else
      {
          cout<<"ok" << endl;
      }
      choice();
}

int main()
{

    char savetodir;
    string savetodirs;
    cout << "welcome" << endl;
    cout << "save to: ";
    cin >> savetodirs;
    string command;
    command = "makemkvcon mkv disc:0 all " + savetodirs;
    gcommand= command;
    choice();
    return 0;
}
