#include <iostream>
#include <fstream>
#include <cstdlib>
#include "linkedlist.h"
#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ofstream outputFile;
    int iter = 600;
    struct timeval start, end;
    long mtime, seconds, useconds;
    int ll_min = 10000;
    int ll_max = 100000;
    int ll_len;

    srand(time(0));
    outputFile.open("data.csv");

    for(int i = 0; i < iter; i++) {
        LinkedList ll;
        ll_len = ll_min + ( rand() % ( ll_max - ll_min + 1 ));

        //fill linked list with data
        for(int j = 0; j<= ll_len; j++) {  
            int item = rand() % ( ll_max * 2);
            stringstream ss;
            ss << item;
            string str = ss.str();
            ll.push_back(str);

        }

        gettimeofday(&start, NULL);
        ll.mergeSort();
        gettimeofday(&end, NULL);
        seconds  = end.tv_sec  - start.tv_sec;
        useconds = end.tv_usec - start.tv_usec;
        mtime = ((seconds) * 1000 + useconds/1000.0) + 0.5;

        stringstream tt;
        tt << ll_len << "," << mtime;
        string stt = tt.str();

        outputFile << stt << endl;
    }

    outputFile.close();

    return 0;
}