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
void sort(vector<int>& graphToSort)
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