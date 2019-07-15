#include <iostream>
#include <string>

using namespace std;

class HasPtr {
public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
    HasPtr(const HasPtr &p) : ps(new string(*(p.ps))), i(p.i) { cout << "Copy Ctor" << endl; }

    string &getstr() const { return *ps; }
private:
    string *ps;
    int i;
};

int main() {
    HasPtr p1("fine");
    HasPtr p2(p1);

    cout << p2.getstr() << endl;
}
