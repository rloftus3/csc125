#include <string>
#include "SVGrectangle.h"

using namespace std;

//variables
string x;
string y;
string w;
string h;
string r;
string g;
string b;

//accessors
string get_x() {
    return x;
}
string get_y() {
    return y;
}
string get_w() {
    return w;
}
string get_h() {
    return h;
}
string get_r() {
    return r;
}
string get_g() {
    return g;
}
string get_b() {
    return b;
}

//mutators
string set_x(int X) {
    x = X;
}
string set_y(int Y) {
    y = Y;
}
string set_w(int W) {
    w = W
}
string set_h(int H) {
    h = H;
}
string set_r(int R) {
    r = R;
}
string set_g(int G) {
    g = G;
}
string set_b(int B) {
    b = B;
}

void printHTML();
