#include "func.h"

//Function to display the sorting algo
void display(const vector<int>& vec)
{
    int n = vec.size();

    for(int i = 0; i < n; i++)
    {
        cout << vec[i] << endl;
    }
}

//Visual display for the vectors
void visDisp(const vector<int>& vec)
{
    int n = vec.size();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < vec[i]; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
}

//Bubble sort method for the vectors
void bubbleSort(vector<int>& graphToSort)
{
    int n = graphToSort.size();

    int i, j;

    visDisp(graphToSort);

    sleep(1);

    system("clear");

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {

            if(graphToSort[j] > graphToSort[j + 1])
            {
                std::swap(graphToSort[j], graphToSort[j + 1]);
                visDisp(graphToSort);

                sleep(1);

                system("clear");
            }
        }
    }
}

//Selection sort method for the vectors
void selectionSort(vector<int>& graphToSort)
{
  int n = graphToSort.size();

  int i, j, min, min_index;

  visDisp(graphToSort);

  sleep(1);

  system("clear");

  for(i = 0; i < n; i++)
    {
      min = graphToSort[i];
      min_index = i;
      for(j = i + 1; j < n; j++)
	  {
	   if(graphToSort[j] < min)
	     {
	      min = graphToSort[j];
	      min_index = j;
	     }
	  }
      std::swap(graphToSort[i], graphToSort[min_index]);

      visDisp(graphToSort);
      sleep(1);
      system("clear");
    }
}

void menu()
{
  cout << "BubbleSort: 0" << endl;
  cout << "SelectionSort: 1" << endl;
  cout << "Choose a sorting method: " << endl;
}
