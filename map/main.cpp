#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main() {

    HTMLform steps;
    map<string, int> map1;
    string token;
    int freq;
    int counter  = 0;
    map<int, vector<string>> map2;
    priority_queue<int> pq;

    steps.getPostData();
    string program = steps.getField("program");

    while(//process all the input )
        if (freq.find(ch) != freq.end())
    ++freq[ch];
  else
    freq[ch] = 1; //change variable names (freq=map1)


    //loop through all items in map and add frequencies to pq
        //create new map (frequencies to tokens)

    if(map2.find(freq) == map2.end()) {
        vector<string> v;
        map2[freq] = v;
    }
    map2[freq].push_back(token);



    while(!pq.empty()) {
        counter++;
        if(counter > 20) {
            break;
        }
    }

    


    return 0;
}