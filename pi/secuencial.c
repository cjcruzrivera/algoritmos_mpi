#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define INTERVAL 100

int main(int argc, char** argv) {
    int i; 
    double rand_x, rand_y, origin_dist, pi; 
    int circle_points = 0, square_points = 0; 

    srand(time(NULL)); 

    for (i = 0; i < (INTERVAL * INTERVAL); i++) { 
        rand_x = (double)((rand() % (INTERVAL + 1)) / INTERVAL); 
        rand_y = (double)(rand() % (INTERVAL + 1)) / INTERVAL; 

        origin_dist = rand_x * rand_x + rand_y * rand_y; 
        
        if (origin_dist <= 1){
            circle_points++;
        } 
        
        square_points++; 

        pi = (double)((4 * circle_points) / square_points);
        printf("%0.15f %0.15f %d %d - %0.15f \n\n", rand_x, rand_y, circle_points, square_points, pi);
    }
}