#include "direved.hpp"
#include "base.hpp"


 
int main() {
    try {
        throw base("Custom C++ Exception");
    } catch (base & mce) {
        cout << "Caught base" << endl;
        cout << mce.what();
    }
}