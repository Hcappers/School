#include <stdio.h>
#include <stdlib.h>
#define NAMESIZE 10
double CalcDistance(double, double, double);
int main(void)
{
    char Name[NAMESIZE];
    double distance, x, y, z;


    FILE*Fpointin =fopen("location.txt","r"); ///This would be your location file

    FILE*Fpointout =fopen("distance.txt","w");///This would be your distance file

    if (Fpointin == NULL)
    {
        printf ("File does not exist.\n");
        printf("please check the existence of the input file\n");

    }
    else
    {
        while (!feof(Fpointin))
        {
            fscanf(Fpointin,"%s %lf %lf %lf ",Name, &x, &y, &z); ///Scanning in Name and x y z
            distance = CalcDistance(x,y,z);  ///Calling your function to calculate Distance
            printf("%s %.2lf %.2lf %.2lf %.2lf \n", Name, x, y, z, distance); ///.Print name x y z and distance to your output screen
            fprintf (Fpointout, "%s %.2lf\n",Name, distance); ///Print the name and disrtance to file

        }
    }
    fclose(Fpointin);
    fclose(Fpointout);

    return 0;
}


double CalcDistance(double x, double y, double z)
{
 double distance;
 distance = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
 return distance;

}
