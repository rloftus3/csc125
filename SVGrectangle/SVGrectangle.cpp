#include <string>
#include "SVGrectangle.h"

using namespace std;

SVGrectangle(string X, string Y, string W, string H, string R, string G, string B) {
    x = X;
    y = Y;
    w = W;
    h = H;
    r = R;
    g = G;
    b = B;
}

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
string set_x(string X) {
    x = X;
}
string set_y(string Y) {
    y = Y;
}
string set_w(string W) {
    w = W
}
string set_h(string H) {
    h = H;
}
string set_r(string R) {
    r = R;
}
string set_g(string G) {
    g = G;
}
string set_b(string B) {
    b = B;
}

void printHTML() {
    cout << "hi from printhtml";
}
