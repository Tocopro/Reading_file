
#include <iostream>
#include <fstream>
using namespace std;

string output;
int main()
{
    fstream sonnets;
    sonnets.open(R"(C:\Users\NEAK\Documents\Speare\sonnets_file.txt)", ios::in);
    int count = 1;
    if(sonnets.is_open())
    {
        cout << count << ". " << 

    }

    return 0;
}
