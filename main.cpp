#include <iostream>
#include <vector>
#include <stdlib.h>

#include "func.h"

using std::cout; using std::cin; using std::endl; using std::vector;

int main()
{
    vector<int> vec;

    int a, b;

    menu();
    cin >> b;
    
    cout << "Create a vector (n to stop): ";
    cin >> a;

    while(cin)
      {
	vec.push_back(a);
	cin >> a;
      }

    system("clear");

    switch(b)
	     {
      case 0:
	bubbleSort(vec);
	break;
      case 1:
	selectionSort(vec);
	break;
      }
    visDisp(vec);
}
