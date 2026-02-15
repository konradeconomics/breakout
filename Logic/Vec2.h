#ifndef BREAKOUT_VEC2_H
#define BREAKOUT_VEC2_H
#include <cmath>


struct Vec2 {
    float x;
    float y;

    Vec2() {
        x = (0.0f);
        y = (0.0f);
    }

    Vec2(float _x, float _y) {
        x = _x;
        y = _y;
    }

    float length() const {
        return std::sqrt(x*x + y*y);
    }

    Vec2 operator+(const Vec2& other) const {
        return Vec2(x + other.x, y + other.y);
    }

    Vec2 operator-(const Vec2& other) const {
        return Vec2(x - other.x, y - other.y);
    }

    Vec2 operator*(float scalar) const {
        return Vec2(x*scalar, y*scalar);
    }

    Vec2& operator+=(const Vec2& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    bool operator==(const Vec2& other) const {
        return (x == other.x && y == other.y);
    }

};


#endif //BREAKOUT_VEC2_H