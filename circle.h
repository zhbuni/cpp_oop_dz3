//
// Created by user on 23.03.2022.
//

#ifndef UNTITLED_CIRCLE_H
#define UNTITLED_CIRCLE_H
class Circle{
    double radius;
    double x;
    double y;
public:
    void set_x(double x1);
    double get_x() const;
    void set_y(double y1);
    double get_y() const;
    void set_radius(double r);
    double get_radius() const;

    Circle(double  r, double x1, double y1){
        this->radius = r;
        this->x = x1;
        this->y = y1;
    }
    ~Circle(){}
};


#endif //UNTITLED_CIRCLE_H