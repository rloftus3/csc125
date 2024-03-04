#ifndef _SVGRECTANGLE_H_
#define _SVGRECTANGLE_H_

#include <string>
using namespace std;

class SVGrectangle {
    public:
        //accessors
        string get_x();
        string get_y();
        string get_w();
        string get_h();
        string get_r();
        string get_g();
        string get_b();

        //mutators
        string set_x();
        string set_y();
        string set_w();
        string set_h();
        string set_r();
        string set_g();
        string set_b();

        void printHTML();
    private:
        string x;
        string y;
        string w;
        string h;
        string r;
        string g;
        string b;
};

#endif