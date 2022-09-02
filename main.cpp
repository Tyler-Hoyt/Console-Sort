#include <iostream>
#include <vector>
#include <stdlib.h>

#include "func.h"

using std::cout; using std::cin; using std::endl; using std::vector;

int main()
{
    vector<int> vec;

    int a;

    cout << "Create a vector (n to stop): ";
    cin >> a;

    while(cin)
    {
        vec.push_back(a);
        cin >> a;
    }

    system("clear");

    sort(vec);

    visDisp(vec);  
}
