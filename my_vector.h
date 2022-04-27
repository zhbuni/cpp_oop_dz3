//
// Created by user on 08.03.2022.
//

#ifndef UNTITLED_CUSTOM_VECTOR_H
#define UNTITLED_CUSTOM_VECTOR_H

#include <utility>

class CustomVector{
    float x_coord;
    float y_coord;
    float direction;
public:
    CustomVector sum(CustomVector v);
    CustomVector muptiply(float a);
    std::pair<float, float> get_coords();
    float get_direction();
    void set_coords(float x, float y);
    void set_direction(float d);
    CustomVector(float x, float y, float d){
        this->direction = d;
        this->x_coord = x;
        this->y_coord = y;
    }
    CustomVector(){}
    ~CustomVector(){}
};
#endif //UNTITLED_CUSTOM_VECTOR_H
