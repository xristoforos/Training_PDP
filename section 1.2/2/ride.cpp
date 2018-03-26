/*
ID: am621100
PROG: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>     /* atoi */

using namespace std;

int main() {
    ofstream fout ("ridet.out");
    ifstream fin ("ridet.in");
    string a, b;
    


    fin >> a >> b;
    fout << a+b << endl;
	 cout<<a<<endl;
	int count=1;
    for (int i=0; i<= a.size(); i++)
    {
    	
    
    	 for (int j=1; j<= 26; j++)
    	{
    		if (int(a[i])== j+64){
				count=count*(j);
					cout<<int(a[i])<<endl;
			}
		
	}
	
    }	
	cout<<count<<endl;
    return 0;
}

