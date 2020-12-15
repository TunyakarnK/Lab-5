#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double d){
    double R;
	R = d*M_PI/180;
    return R;
}
double rad2deg(double r){
	double D ;
	D= r*180/M_PI;
	return D;
}
double findXComponent(double c,double d,double e,double f){
	double xComp;
	xComp= (c*cos(e))+(d*cos(f));
	return xComp;
}
double findYComponent(double g,double h,double i,double j){
	double yComp;
	yComp= (g*sin(i))+(h*sin(j));
	return yComp;
}
double pythagoras (double x,double y){
	double p; 
	p= sqrt(pow(x,2)+pow(y,2));
	return p;
}
void showResult(double a,double b){
	cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	cout << "Length of the resultant vector = " << a;
	cout << "\nDirection of the resultant vector (deg) = " << b;
	cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
