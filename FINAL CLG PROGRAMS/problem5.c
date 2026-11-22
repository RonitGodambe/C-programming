// Program Code : 

#include <stdio.h>

int main() {
    double mass, velocity, momentum;

    // Input mass and velocity
    printf("Enter the mass of the object (kg): ");
    scanf("%lf", &mass);

    printf("Enter the velocity of the object (m/s): ");
    scanf("%lf", &velocity);

    // Calculate momentum using e = mc^2
    momentum = mass * velocity * velocity;

    // Output the result
    printf("The momentum of the object is: %.2lf kg·m^2/s\n", momentum);

    return 0;
}
/*

Output : 
Enter the mass of the object (kg): 2
Enter the velocity of the object (m/s): 3
The momentum of the object is: 18.00 kg·m^2/s 

*/