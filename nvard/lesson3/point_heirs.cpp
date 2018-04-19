#include <iostream>
#include <math.h>
class Point {
    private:
        float x;
        float y;
    public:
        Point(float x = 0, float y = 0)
            : x(x)
            ,y(y) {}
        ~Point() {}
        void setX(float x) {
            this->x = x;
        }
        void setY(float y) {
            this->y = y;
        }
        float getX() {
            return x;
        }
        float getY() {
            return y;
        }
        float distance(Point b) {
            return sqrt(pow((b.getX() - this->getX()), 2) + pow((b.getY() - this->getY()), 2));
        }
        void print() {
            std::cout << "Point(" << x << ',' << y << ")\n ";
        }
};
class Circle : public Point {
    private:
        float r;
    public:
        Circle(float x, float y, float r) 
            :Point(x, y)
            ,r(r) {}
       ~Circle() {}
        void setR(float r) {
            this->r = r;
        }
        float getR() {
            return r;
        }
        float getL() {
            return 2 * M_PI * r;
        }
        float getS() {
            return M_PI * r * r;
        }
        void print() {
            std::cout << "Circle, O(" << getX() << ',' << getY() << ')' << " r = " << r << std::endl;
            std:: cout << "Erkarutyun = " << getL() << "\nMakeres = " << getS();
        }
};
class Line : public Point {
    private:
        Point b;
    public:
        Line(Point a, Point b)
            : Point(a)
            , b(b)
            {}
        Line(const Line & l) : Point(l) {
            this->b = b;
            std::cout << "Coppy constructor of the line \n";
        }
        ~Line() {}
        void setA(Point a)  {
            Point::setX(a.getX());
            Point::setY(a.getY());
        }
        void setB(Point b) {
            this->b = b;
        }
        Point getA() {
            return Point(Point::getX(), Point::getY());
        }
        Point getB() {
            return b;
        }
        void print() {
            b.print();
            std::cout << "Length = " << Point(Point::getX(), Point::getY()).distance(b);
        }
        void printCordinates() {
            if (Point::getX() > b.getX()) {
                Point curent(Point::getX(), Point::getY());
                Point::setX(b.getX());
                Point::setY(b.getY());
                b = curent;
            }
            float x1 = Point::getX();
            float y1 = Point::getY();
            float x2 = b.getX();
            float y2 = b.getY();
            float k = (y2 - y1) / (x2 - x1);
            float bb = y1 - x1 * k;
            for (float i = 1, x = x1 + 1; x < x2; ++x, ++i) {
                float y = k * x + bb;
                std::cout << 'A' << i << '(' << x << ',' << y << ") \n";
            } 
        }
};
class Rectangle : public Point {
    private:
        Point b;
    public:
        Rectangle( Point a, Point b)
            : Point(a)
            , b(b)
            {}
        Rectangle(Rectangle & r)
            : Point(r) {
                this->b = b;
            }
        ~Rectangle() {}
        void setA(Point a) {
            Point::setX(a.getX());
            Point::setY(a.getY());
        }
        void setB(float b) {
            this->b = b;
        }
        Point getA() {
            return Point(Point::getX(), Point::getY());
        }
        Point getB() {
            return b;
        }
        float getLayn() {
            return fabs(Point::getX() - b.getX());
        }
        float getErk() {
            return fabs(Point::getY() - b.getY());
        }

        float getParagic() {
            return 2 * (getLayn() + getErk());
        }
        float getMakeres() {
            return getLayn() * getErk();
        }
        void print() {
            Point::print();
            b.print();
            std::cout << "Paragic = " << getParagic() << "\nMakeres = " << getMakeres();
        }
};
class Triangle : public Point {
    private:
        Point b;
        Point c;
    public:
        Triangle( Point a, Point b, Point c)
            : Point(a)
            , b(b)
            , c(c)
            {}
        Triangle(const Triangle & t)
            : Point(t)
            , b(t.b)
            , c(t.c) {
                std::cout << "Coppy constructor of the triangle";
            }
        ~Triangle() {}
        void setA(Point a) {
            Point::setX(a.getX());
            Point::setY(a.getY());
        }
        void setB() {
            this->b = b;
        }
        void setC() {
            this->c = c;
        }
        Point getA() {
            return Point(Point::getX(), Point::getY());
        }
        Point getB() {
            return b;
        }
        Point getC() {
            return c;
        }
        float getParagic() {
            return Point::distance(b) + b.distance(c) + c.distance(Point(Point::getX(), Point::getY()));
        }
        float getMakeres() {
            float p = getParagic() / 2;
            float koxm1 = Point::distance(b);
            float koxm2 = b.distance(c);
            float koxm3 = c.distance(Point(Point::getX(), Point::getY()));
            float s = sqrt(p * (p - koxm1) * (p - koxm2) * (p - koxm3));
            return s;
        }
        void print() {
            Point::print();
            b.print();
            c.print();
            std::cout << "Paragic = " << getParagic() << "\nMakeres = " << getMakeres();
        }
};

int main() {
    std::cout << "POINT\n-----------\n";
    Point p1(2,8);
    p1.print();    
    Point p2(6,11);
    p2.print();
    std:: cout << "Distance = " << p1.distance(p2) << "\n-----------\n";
    std::cout << "CIRCLE\n-----------\n";
    Circle c(4,7,3);
    c.print();
    std:: cout << "\n-----------\n";
    std::cout << "LINE\n-----------\n";
    Point p3(8,16);
    p3.print();
    Point p4(2,8);
    Line l(p3,p4);
    l.print();
    std:: cout << "\nThe line cordinates` \n";
    l.printCordinates();
    std::cout<< "\n-----------\n";
    std::cout << "RECTANGLE\n-----------\n";
    Rectangle r(p1,p2);
    r.print();
    std::cout << "\n-----------\n";
    std::cout << "TRIANGLE\n-----------\n";
    Triangle t(p1,p2,p3);
    t.print();
    std::cout << "\n-----------\n";
    


    return 0;
}
