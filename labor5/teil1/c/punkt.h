// Datei: punkt.h
#ifndef _PUNKT_H_
#define _PUNKT_H_

#include <iostream>
#include <cmath>
using namespace std;

class Punkt {
  private:
    float x,y;

  public:
    Punkt( float x0 = 0, float y0 = 0 );
    Punkt ( const Punkt& p ); // Kopierkonstruktor
    ~Punkt();
    void setX( float x0 );
    void setY( float y0);
    float getX() const;
    float getY() const;
    float abstand00() const;
    float abstand( const Punkt& p ) const;
    friend ostream& operator<< ( ostream& os, const Punkt& p );
};

inline Punkt::Punkt( float x0, float y0 ) : x(x0), y(y0) {};
inline Punkt::Punkt( const Punkt& p ) : x(p.getX()), y(p.getY()) {};
inline Punkt::~Punkt() {}
inline void Punkt::setX( float x0 ) { this->x = x0; }
inline void Punkt::setY( float y0 ) { this->y = y0; }
inline float Punkt::getX() const { return this->x; }
inline float Punkt::getY() const { return this->y; }
inline float Punkt::abstand00() const { return sqrt( x*x + y*y ); }
inline float Punkt::abstand( const Punkt&p ) const { return sqrt( (x-p.x)*(x-p.x) + (y-p.y)*(y-p.y) ); }
inline ostream& operator<< ( ostream& os, const Punkt& p ) { os << "(" << p.x << ", " << p.y << ")"; return os; }

#endif
