//
// Created by user on 09.03.2022.
//
#include "my_vector.h"
CustomVector CustomVector::sum(CustomVector v){
    CustomVector vector = CustomVector();
    vector.x_coord = this->x_coord + v.x_coord;
    vector.y_coord = this->y_coord + v.y_coord;
    return vector;
}
CustomVector CustomVector::muptiply(float a){
    CustomVector vector = CustomVector();
    vector.y_coord = this->y_coord * a;
    vector.x_coord = this->x_coord * a;
    return vector;
}

std::pair<float, float> CustomVector::get_coords(){
    std::pair<float, float> pair{this->x_coord, this->y_coord};
    return pair;
}
float CustomVector::get_direction(){
    return this->direction;
}

void CustomVector::set_coords(float x, float y) {
    this->x_coord = x;
    this->y_coord = y;
}

void CustomVector::set_direction(float d) {
    this->direction = d;
}
