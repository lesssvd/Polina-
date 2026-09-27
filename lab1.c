#include <stdio.h>
#include <math.h>
int main(){
float hx = 1.3, hy = 1.5;
float x0 = 1.0, x1 = 3.0;
float y0 = 2.0, y1 = 4.0;
	for (float xn = x0; xn <= x1; xn += hx){
		for (float yn = y0; yn <= y1; yn += hy){
			printf ("x = %f;y = %f;", xn, yn);
			if (xn/(yn-1.5)<1){
				float u1 = exp(2.0*xn) + log10(xn);
				float u2 = sin(-(1-fabs(xn-yn))/cbrt(xn));
				if (u1<=u2){
					printf ("U = %f\n", u1);
				} else {
					printf ("U = %f\n", u2);
				}
			} else {
				printf ("U = %f\n", cos((xn*xn)- yn) * cos((xn*xn)-yn));
			}
		}
	}
	return 0;
}
