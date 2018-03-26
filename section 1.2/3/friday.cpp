/*
ID: am621100
PROG: friday
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>     /* atoi */

using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int a;
    fin >> a;
    cout<<a;
    return 0;
}

