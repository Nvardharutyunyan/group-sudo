#include <iostream>
#include <math.h>
class Circle {
    private:
        unsigned int r;
        float x, y;
        char* name;
    public:
        Circle(char* name, float x = 0, float y = 0, unsigned r = 0)
        :name(name), 
        x(x)
        ,y(y)
        ,r(r)
        {
            std::cout << (*this).name;
        }
        ~Circle() {}
        unsigned int getR() {
            return r;
        }
        float getX() {
            return x;
        }
        float getY() {
            return y;
        }
        void setR(unsigned int r) {
            this -> r = r;
        }
        void setX(float x) {
            this -> x = x;
        }
        void setY(float y) {
            this -> y = y;
        }
        void print() {
            std::cout << '(' << x << ',' << y << ')' << "\nr = " << r << '\n';
        }
        double getL() {
            return 2 * M_PI * r;
        }
        double getS() {
            return M_PI * r * r;
        }
        unsigned int getD() {
            return 2 * r;
        }
        double operator* (double m) {
            double k = this -> r * m;
            return k;
        }
};

int main() {
    Circle a("Klor", 5, 3, 4);
    a.print();
    std::cout << "Erkarutyunn e " << a.getL() << "\nMakeresn e " << a.getS() << "\nTramagicn e " << a.getD() << '\n';
    std::cout << a*5 << std::endl;

    return 0;
}
