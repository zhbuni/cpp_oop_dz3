#include <iostream>
#include "my_vector.h"

int main() {
    CustomVector v;
    v.set_coords(10, 10);
    std::pair<float, float> p = v.get_coords();
    std::cout << p.first << " " << p.second;
    return 0;
}
