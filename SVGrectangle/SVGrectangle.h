#ifndef _SVGRECTANGLE_H_
#define _SVGRECTANGLE_H_

#include <string>
using namespace std;

class SVGrectangle {
    public:
        SVGrectangle(string X, string Y, string W, string H, string R, string G, string B);

        //accessors
        string get_x();
        string get_y();
        string get_w();
        string get_h();
        string get_r();
        string get_g();
        string get_b();

        //mutators
        void set_x(string X);
        void set_y(string Y);
        void set_w(string W);
        void set_h(string H);
        void set_r(string R);
        void set_g(string G);
        void set_b(string B);

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