#include <stdio.h>

#define SLIP_THRESHOLD 20

int main()
{
    int vehicleSpeed;
    int wheelSpeed;
    int brakePressed;
    int slip;

    printf("=== Automotive ABS Simulation ===\n");

    printf("Enter Vehicle Speed (km/h): ");
    scanf("%d", &vehicleSpeed);

    printf("Enter Wheel Speed (km/h): ");
    scanf("%d", &wheelSpeed);

    printf("Brake Pressed? (1=YES 0=NO): ");
    scanf("%d", &brakePressed);

    if(brakePressed)
    {
        slip = vehicleSpeed - wheelSpeed;

        printf("\nSlip = %d%%\n", slip);

        if(slip > SLIP_THRESHOLD)
        {
            printf("\nABS ACTIVATED\n");

            printf("Brake Pressure Released\n");
            printf("Wheel Regains Grip\n");
            printf("Brake Pressure Reapplied\n");
            printf("Vehicle Stable\n");
        }
        else
        {
            printf("\nNormal Braking\n");
        }
    }
    else
    {
        printf("\nVehicle Running Normally\n");
    }

    return 0;
}