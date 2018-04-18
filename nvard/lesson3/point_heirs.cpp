#include <iostream>
#include <math.h>
class Point {
    protected:
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
        void print() {
            std::cout << "(" << x << ',' << y << ") ";
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
            std::cout << "O(" << getX() << ',' << getY() << ") kentronov " << "ev r = " << r << " sharavxov ";
        }
};
class Line : public Point {
    protected:
        Point skizb, verj;
    public:
        Line(Point skizb = 0, Point verj = 0)
            :skizb(skizb)
            ,verj(verj) {}
        ~Line() {}
        void setSkizb(Point skizb) {
            this->skizb = skizb;
        }
        void setVerj(Point verj) {
            this->verj = verj;
        }
        Point getSkizb() {
            return skizb;
        }
        Point setVerj() {
            return verj;
        }
        float getLength() {
            return sqrt(pow((verj.getX() - skizb.getX()), 2) + pow((verj.getY() - skizb.getY()), 2));
        }
};
class Rectangle : public Line {
    private:
        Line erk, layn;
    public:
        Rectangle( Line erk, Line layn)
            :erk(erk)
            ,layn(layn) {}
        ~Rectangle() {}
        void setErk(Line erk) {
            this->erk = erk;
        }
        void setLayn(Line layn) {
            this->layn = layn;
        }
        Line getErk() {
            return erk;
        }
        Line getLayn() {
            return layn;
        }
        float getParagic() {
            return 2 * (erk.getLength() + layn.getLength());
        }
        float getMakeres() {
            return erk.getLength() * layn.getLength();
        }
        void print() {
            std::cout << "koxmerov karucvox uxxankyan paragicn e " << getParagic() << ", makeresn e " << getMakeres() << '\n';
        }
};

int main() {
    //CIRCLE
    float m, n, k;
    std::cout << "Nermucel abscisy` ";
    std::cin >> m;
    std::cout << "Nermucel ordinaty` ";
    std::cin >> n;
    std::cout << "Nermucel sharavixy` ";
    std::cin >> k;
    Circle c(m,n,k);
    c.print();
    std::cout << "shrjanagci erkarutyuny` " << c.getL() << ", makeresy` " << c.getS() << '\n';
    //LINE
    float x1, x2, y1, y2;
    std::cout << "Nermucel erku keteri kordinatner \n x1 = ";
    std::cin >> x1;
    std::cout << " y1 = ";
    std::cin >> y1;
    std::cout << " x2 = ";
    std::cin >> x2;
    std::cout << " y2 = ";
    std::cin >> y2;
    Point p1(x1,y1);
    Point p2(x2,y2);
    p1.print(), p2.print();
    std::cout << "keterov ancnox hatvaci erkarutyunn e ";
    Line l(p1,p2);
    std::cout << l.getLength() << '\n';
    //RECTANGLE
    float koxm1, koxm2;
    std::cout << "Nermucel uxxankyan koxmery \n koxm1 = ";
    std::cin >> koxm1;
    std::cout << " koxm2 = ";
    std::cin >> koxm2;
    Rectangle rec(koxm1,koxm2);
    std::cout << koxm1 << " ev " << koxm2;
    rec.print();

    return 0;
}111
