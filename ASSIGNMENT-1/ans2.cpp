#include<iostream>
using namespace std;
int main ()
{
    int Arr[20], size, i, j, k;
    cout << "Enter size of array ";
    cin >> size;
    cout << "Enter elements ";
    for (i = 0; i < size; i++)
        cin >> Arr[i];
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (Arr[i] < Arr[j])
            {
                k = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = k;
            }
        }
    }
    cout << "2nd max number is " << Arr[1]<<"\n";
    cout << "2nd min number is " << Arr[size - 2];
    return 0;
}
