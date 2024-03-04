#include <string>
#include <iostream>
#include "SVGrectangle.h"

using namespace std;

SVGrectangle::SVGrectangle(string X, string Y, string W, string H, string R, string G, string B) {
    x = X;
    y = Y;
    w = W;
    h = H;
    r = R;
    g = G;
    b = B;
}

//accessors
string SVGrectangle::get_x() {
    return x;
}
string SVGrectangle::get_y() {
    return y;
}
string SVGrectangle::get_w() {
    return w;
}
string SVGrectangle::get_h() {
    return h;
}
string SVGrectangle::get_r() {
    return r;
}
string SVGrectangle::get_g() {
    return g;
}
string SVGrectangle::get_b() {
    return b;
}

//mutators
void SVGrectangle::set_x(string X) {
    x = X;
}
void SVGrectangle::set_y(string Y) {
    y = Y;
}
void SVGrectangle::set_w(string W) {
    w = W;
}
void SVGrectangle::set_h(string H) {
    h = H;
}
void SVGrectangle::set_r(string R) {
    r = R;
}
void SVGrectangle::set_g(string G) {
    g = G;
}
void SVGrectangle::set_b(string B) {
    b = B;
}

void SVGrectangle::printHTML() {
    cout << "hi from printhtml";
}
