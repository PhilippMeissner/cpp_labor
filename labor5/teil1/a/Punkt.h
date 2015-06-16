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

inline Punkt::Punkt( float x0, float y0 ) : // TODO
inline Punkt::Punkt( const Punkt& p ) : // TODO
inline Punkt::~Punkt() {}
inline void Punkt::setX( float x0 ) // TODO
inline void Punkt::setY( float y0 ) // TODO
inline float Punkt::getX() const { // TODO
}
inline float Punkt::getY() const { // TODO
}
inline float Punkt::abstand00() const { return sqrt( x*x + y*y ); }
inline float Punkt::abstand( const Punkt&p ) const { return sqrt( (x-p.x)*(x-p.x) + (y-p.y)*(y-p.y) ); }
inline ostream& operator<< ( ostream& os, const Punkt& p ) { os << "(" << p.x << ", " << p.y << ")"; return os; }

#endif
