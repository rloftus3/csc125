#include <iostream>
#include <fstream>
#include <cstdlib>
#include "linkedlist.h";

using namespace std;

int main()
{
    LinkedList ll;
    ifstream dataFile;
    string fileName;
    string word;

    cout << "Enter the file name:";
    cin >> fileName;

    dataFile.open(fileName.c_str());
    if (dataFile.fail())
    {
        cout << "cannot open " << fileName << endl;
        exit(1);
    }

    while (!dataFile.eof())
    {
        getline(dataFile, word);
        if (!dataFile.eof())
            ll.insertAtBack(word);
    }

    cout << ll << endl;
    ll.mergeSort();
    cout << ll << endl;
    return 0;
}
