#include <stdio.h>
#include <math.h>

void volume_of_cylinder(void) {
	// Insert your solution here.
    double height = 0, volume = 0, radius = 0;
    printf("Please enter the radius of the cylinder:\n");
    scanf("%lf", &radius);
    printf("Please enter the height of the cylinder:\n");
    scanf("%lf", &height);
    volume = M_PI * (radius * radius) * height;
    printf("A radius of %.4lf and a height of %.4lf correspond to a volume of %.4f.\n", radius, height, volume);
}

int main(void) {
	volume_of_cylinder();
	return 0;
}