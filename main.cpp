#include <complex>
#include <iostream>
using namespace std;
int main() {

}
double misol1(double x) {
    return pow(x,3);
}
double misol2(double r1 ,double r2, double r3) {
    double s1=pow(r1,2);
    double s2=pow(r2,2);
    double s3=pow(r3,2);
    return s1,s2,s3;
}
double misol3(double S,double h) {
    double A = 2*S/h;
    return A;
}
double misol4(double r) {
    return 4*3.14159*pow(r,2);
}
double misol5(double a, double b, double c) {
    return a+b+c;
}
double misol6(double a, double b, double h) {
    return a*b*2+a*h*2+b*h*2;
}
double misol7(double r, double h) {
    return 3.1415*pow(r,2)*h*1/3;
}
double misol8(double v,double s) {
    return s/v;
}
double misol9(double h) {
    return sqrt(2*h/9.81);
}
double misol10(double x) {
    return x*365*24*3600/1000;
}
double misol11(double n) {
    double S = 0;
    for (int i=1 ; i<n ; i++) {
        S += i;
    }
    return S;
}
double misol12(double m) {
    return m*9.81;
}
double misol13(double m,double a) {
    return m*a;
}