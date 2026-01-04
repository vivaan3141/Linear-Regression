#include <iostream>
using namespace std;

extern "C" {
    double slope(double x[], double y[], int n) {
        double product[n], squares[n]; double productSum, squareSum, xSum, ySum=0;
        for(int i=0;i<n;i++) {
            product[i]=x[i]*y[i]; squares[i]=x[i]*x[i];
            squareSum+=squares[i]; productSum+=product[i];
            xSum+=x[i]; ySum+=y[i];
        }
        return ((n*productSum)-(xSum*ySum))/((n*squareSum)-(xSum*xSum));
    }

    double yInt(double x[], double y[], int n) {
        double m, xSum, ySum=0;
        for(int i=0;i<n;i++) {
            xSum+=x[i]; ySum+=y[i];
        }
        m=slope(x,y,n);
        return (ySum-(m*xSum))/n;
    }

}
