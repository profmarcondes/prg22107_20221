//============================================================================
// Name        : Heranca.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Base class
class Shape {
   public:
	  Shape(int w, int h): width(w), height(h) {
		  cout << "(" << this << ") Shape constructed!" << endl;
	  }

      void setWidth(int w) {
    	  width = w;
      }
      void setHeight(int h) {
    	  height = h;
      }

   protected:
      int width;
      int height;
};

class PaintCost{
	public:
		PaintCost(int cost): cost_per_m2(cost) {
			cout << "(" << this << ") PaintCost constructed!" << endl;
		}

		int getCost(int area){
			return area * cost_per_m2;
		}

	protected:
		void updateCost(int cost){
			cost_per_m2 = cost;
		}

	private:
		int cost_per_m2;
};

// Derived class
class Rectangle: public Shape, public PaintCost
{
   public:
	  Rectangle(): Rectangle(1,1,40) { }

	  Rectangle(int w, int h): Rectangle(w,h,40) {}

	  Rectangle(int w, int h, int c): Shape(w,h), PaintCost(c) {
		  cout << "(" << this << ") Rectangle constructed!" << endl;
	  }

	  int getArea() {
         return (width * height);
      }

	  int getCost(){
		  return PaintCost::getCost(getArea());
	  }
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Rectangle Rect(5,7,40);

	//Rect.setWidth(5);
	//Rect.setHeight(7);

	// Print the area of the object.
	cout << "Total area: " << Rect.getArea() << endl;

	cout << "Paint cost: " << Rect.getCost() << endl;

	return 0;
}
