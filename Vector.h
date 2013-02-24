#ifndef VECTOR_BASE_H
#define VECTOR_BASE_H

#include <math.h>

class Vector{
	public:
		double x,y;
		Vector():x(0),y(0){}
		Vector(double p1,double p2){this->x=p1;this->y=p2;}
		Vector(double p1){this->x=p1;this->y=0;}
		Vector &operator ++(){
			this->x++;
			this->y++;
			return *this;
		}
		Vector &operator --(){
			this->x--;
			this->y--;
			return *this;
		}
		Vector operator +(Vector v){
			return add(*this, v);
		}
		Vector operator -(Vector v){
			return sub(*this, v);
		}
		Vector operator *(Vector v){
			return mult(*this, v);
		}
		Vector operator /(Vector v){
			return div(*this, v);
		}

		double norm(){
			return sqrt(x*x + y*y);
		}
		double length(){
			return norm();
		}
		double dot(Vector &v){
			return v.x*x + v.y*y;
		}
		Vector &add(Vector &v){
			x += v.x;
			y += v.y;
			return *this;
		}
		Vector &add(double s){
			x += s;
			y += s;
			return *this;
		}
		Vector &sub(Vector &v){
			x -= v.x;
			y -= v.y;
			return *this;
		}
		Vector &sub(double s){
			x -= s;
			y -= s;
			return *this;
		}
		Vector &mult(Vector &v){
			x *= v.x;
			y *= v.y;
			return *this;
		}
		Vector &mult(double s){
			x *= s;
			y *= s;
			return *this;
		}
		Vector &div(Vector &v){
			x /= v.x;
			y /= v.y;
			return *this;
		}
		Vector &div(double s){
			x /= s;
			y /= s;
			return *this;
		}

		Vector &invert(){
			x = 1/x;
			y = 1/y;
		}
		double distanceTo(Vector v3){
			Vector dthis = sub(*this, v3);
			return sqrt(dthis.dot(dthis));
		}
		Vector & normalize(){
			double m = this->norm();
			if( m > 0 )
				this->div(m);
			return *this;
		}
		Vector getUnit(){
			double m = this->norm();
			if( m > 0 )
				return div(*this,m);
			else
				return *this;
			return *this;
		}


		static Vector add(Vector v1, Vector v2){
			double x = v1.x + v2.x,
				   y = v1.y + v2.y;
			return Vector(x,y);
		}
		static Vector add(Vector v1, double s){
			double x = v1.x + s,
				   y = v1.y + s;
			return Vector(x,y);
		}
		static Vector sub(Vector v1, Vector v2){
			double x = v1.x - v2.x,
				   y = v1.y - v2.y;
			return Vector(x,y);
		}
		static Vector sub(Vector v1, double s){
			double x = v1.x - s,
				   y = v1.y - s;
			return Vector(x,y);
		}
		static Vector mult(Vector v1, Vector v2){
			double x = v1.x * v2.x,
				   y = v1.y * v2.y;
			return Vector(x,y);
		}
		static Vector mult(Vector v1, double s){
			double x = v1.x * s,
				   y = v1.y * s;
			return Vector(x,y);
		}
		static Vector div(Vector v1, Vector v2){
			double x = v1.x / v2.x,
				   y = v1.y / v2.y;
			return Vector(x,y);
		}
		static Vector div(Vector v1, double s){
			double x = v1.x / s,
				   y = v1.y / s;
			return Vector(x,y);
		}

	protected:
};

#endif