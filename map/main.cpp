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

    cout << "Content-type: text/html\n\n";
    

    //read all code into string
    steps.getPostData();
    string program = steps.getField("program");

    //TODO: strip nonletters, convert to lower

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

    //TEST CODE 4 map1
    for(const auto& elem : map1) {
        cout << elem.first << " " << elem.second << "<br />" << endl;
    }
    cout << "<hr/>";

    //populate pq
    for(const auto& elem : map1) {
        //add freq to pq
        token = elem.first;
        freq = elem.second;
        pq.push(freq);

        //map freq to words
        if(map2.find(freq) == map2.end()) {
            //freq not yet in map
            map2[freq] = vector<string>();
        }
        map2[freq].push_back(token);
    }
    
    //test map2
    for(const auto& elem : map2) {
        cout << elem.first << " "; 
        for (string i: elem.second) {
            cout << i << ", ";
        }
        cout << "<br /> <hr />" << endl;
    }


    //print pq
    while (!pq.empty()) {
        if(counter > 20) {
            break;
        }
        freq = pq.top();
        cout << freq << "<br />";
        /*if(map2.find(freq) == map2.end()) {
            //item doesn't exist
            cout << "ERROR: element " << freq << "not found" << "<br />" << endl;
        }
        else {
            for (string i: map2[freq]) {
                counter++;
                if(counter > 20) {
                    break;
                }
                cout << freq << " " << i << "<br />";
            }
        }*/
        pq.pop();
    }

    return 0;
}