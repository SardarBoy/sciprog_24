#include<stdio.h>
#include<math.h>


float degtorad (float degarg);
float traprule(int N,float TanArr[N-1]);

int main(){
    int N=12;
    int i; 
    float TanArr[N+1];
    float a = 0.0, b_deg = 60.0;
    float deg;

    for (i=0; i<N; i=i +1){
        deg=1*5.0;
        TanArr[i]=tan (degtorad (deg)) ;
        printf ("TanArr[%d] = %f\n", i, TanArr[i]);
    }

    float area = traprule(N, TanArr);



    printf("\nTrapezoidal result is: %f\n", area) ;
    printf("Real result is: %f\n", log (2.0)) ;
    return 0;
    }

float degtorad(float degarg) {
    float pi = 3.1415927;
    return ( (pi * degarg) /180.0 );
}

float traprule(int N, float TanArr[N+1]) {
    float area;
    int i;
    // Sum tan(a) +tan(b) where a and b are in radians
    area = TanArr[0]+TanArr[N] ;
    printf("\nInitial area (sum at x(0) and x(12)) = %f\n", area);
    for (i=1; i<N; i++){
    area=area+2*TanArr[i];
    }
    
    printf("The value of the sum after the loop is: %f\n", area);
    
    float mult_rad=degtorad( (60.0-0.0) / (2*N));
    area=mult_rad*area;

    return area;
}
