#include <iostream>
using namespace std;

void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

int main()
{
    int NUM_DONATIONS;
    cout << "THE NUMBER OF DONATIONS: ";
    cin >> NUM_DONATIONS;

    if (NUM_DONATIONS <= 0 || NUM_DONATIONS > 1000) {
        cout << "Invalid number of donations." << endl;
        return 1;
    }

    int *donations = new int[NUM_DONATIONS];
    cout << "Enter donations:\n";
    for (int i = 0; i < NUM_DONATIONS; i++) {
        cin >> donations[i];
    }

    int *arrPtr[NUM_DONATIONS];
    for (int count = 0; count < NUM_DONATIONS; count++) {
        arrPtr[count] = &donations[count];
    }

    arrSelectSort(arrPtr, NUM_DONATIONS);

    cout << "The donations, sorted in ascending order, are:\n";
    showArrPtr(arrPtr, NUM_DONATIONS);

    cout << "The donations, in their original order, are:\n";
    showArray(donations, NUM_DONATIONS);

    delete[] donations;  
    return 0;
}

void arrSelectSort(int *arr[], int size)
{
    int startScan, minIndex;
    int *minElem;

    for (startScan = 0; startScan < (size - 1); startScan++) {
        minElem = arr[startScan];
        minIndex = startScan;
        for (int index = startScan + 1; index < size; index++) {
            if (*(arr[index]) < *minElem) {
                minElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}

