#include <iostream>
#include <queue>
#include <map>
#include "htmlform.h"

using namespace std;

int main() {

    HTMLform steps;
    map<string, int> map1;
    string token;
    int freq;
    int pos;
    int counter  = 0;
    map<int, vector<string>> map2;
    priority_queue<int> pq;

    //read all code into string
    steps.getPostData();
    string program = steps.getField("program");

    //process input
    while(string::npos != (pos = program.find_first_of("\n "))) {
        //split into words
        token = program.substr(0, pos);
        program = program.substr(pos + 1);

        //use map to count word freq.
        if (map1.find(token) != map1.end()) {
            ++map1[token];
        }
        else {
            map1[token] = 1;
        }
    }

    for(const auto& elem : map1) {
        cout << elem.first << " " << elem.second << "<br />" << endl;
    }   
    /*while (!pq.empty()) {
        prio = pq.top();
        int itr = m.find(prio);
        if (itr == m.end()) {
            //handle the error
            cout << "ERROR: element " << prio << "not found" << "<br />" << endl;
        } 
        else {
            token = itr->second;
            cout << prio << ", " << token << "<br />" << endl;
        }
        pq.pop();
    }*/

    //loop through all items in map and add frequencies to pq
        //create new map (frequencies to tokens)

   /* if(map2.find(freq) == map2.end()) {
        vector<string> v;
        map2[freq] = v;
    }
    map2[freq].push_back(token);



    while(!pq.empty()) {
        counter++;
        if(counter > 20) {
            break;
        }
    }*/

    


    return 0;
}