#include <complex>
#include <iostream>
using namespace std;

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
int main() {

    while (true) {
        int k;
        cout<<"Topshiriq 1 dan misol raqamini kiriting:";
        cin>>k;
        if(k==1) {
            double x;
            cin>>x;
            cout<<misol1(x)<<endl;
        }
        else if(k==2) {
            double r1,r2,r3;
            cin>>r1>>r2>>r3;
            cout<<misol2(r1,r2,r3)<<endl;
        }
        else if(k==3) {
            double S,h;
            cin>>S>>h;
            cout<<misol3(S,h)<<endl;
        }
        else if(k==4) {
            double r;
            cin>>r;
            cout<<misol4(r)<<endl;
        }
        else if(k==5) {
            double a,b,s;
            cin>>a>>b>>s;
            cout<<misol5(a,b,s)<<endl;
        }
        else if(k==6) {
            double a,b,h;
            cin>>a>>b>>h;
            cout<<misol6(a,b,h)<<endl;
        }
        else if(k==7) {
            double r,h;
            cin>>r>>h;
            cout<<misol7(r,h)<<endl;
        }
        else if(k==8) {
            double v,s;
            cin>>v>>s;
            cout<<misol8(v,s)<<endl;
        }
        else if(k==9) {
            double h;
            cin>>h;
            cout<<misol9(h)<<endl;
        }
        else if(k==10) {
            double x;
            cin>>x;
            cout<<misol10(x)<<endl;
        }
        else if(k==11) {
            double n;
            cin>>n;
            cout<<misol11(n)<<endl;
        }
        else if(k==12) {
            double m;
            cin>>m;
            cout<<misol12(m)<<endl;
        }
        else if(k==13) {
            double m,a;
            cin>>m>>a;
            cout<<misol13(m,a)<<endl;
        }
        else {
            cout<<"Bunday raqamdagi misol mavjud emas"<<endl;
        }
    }
}