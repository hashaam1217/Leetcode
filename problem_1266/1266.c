#include <stdio.h> 


int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    //Visit the nearest point
    int ** current_pointer = points;
    int *current_coordinates;
    int *next_coordinates;
    int i = 0;
    int x_difference;
    int y_difference;
    int x_difference_sign;
    int y_difference_sign;
    int max_difference;
    int time = 0; 
    for(int i = 0; i < pointsSize - 1; i++)
    {
        current_coordinates = current_pointer[i];
        next_coordinates = current_pointer[i + 1];

        x_difference = next_coordinates[0] - current_coordinates[0];
        y_difference = next_coordinates[1] - current_coordinates[1];

        //Figure out the signs of the difference
        if (x_difference < 0) x_difference_sign = 1;
        else x_difference_sign = -1; 
        if (y_difference < 0) y_difference_sign = 1;
        else y_difference_sign = -1; 

        if (x_difference > y_difference) max_difference = x_difference;
        else max_difference = y_difference;

        for (int i = 0; i < max_difference; i++)
        {
            x_difference = next_coordinates[0] - current_coordinates[0];
            y_difference = next_coordinates[1] - current_coordinates[1];
            if (x_difference != 0 && y_difference != 0)
            {
                current_coordinates[0] += x_difference_sign;
                current_coordinates[1] += y_difference_sign;
                time += 1;
            }

            else 
            {
                if (x_difference != 0)
                {
                    current_coordinates[0] += x_difference_sign;
                    time += 1;
                }
                if (y_difference != 0) 
                {
                    current_coordinates[1] += y_difference_sign;
                    time += 1;
                }
            }
        }
        i++;
    }
   return time; 
}

int main(void)
{
}
