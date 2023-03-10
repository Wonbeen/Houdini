/*
Author: Ian Wonbeen Kim
Date: Feb. 25, 2023
Language: Houdini Vex
Program Version: Houdini FX Education Version 19.5.303
Category: Vex, Sop, Point Wrangle, Details
Key Functions: addpoint(geoself(), vector3);
Code Function: Create Points with x,y,z positions based on the nested for-loop iterations.
*/

//Variable Declaration & Initialization
v@loc = {0,0,0};
float x,y,z = 0;
for (int i = 0; i < 5; i++)
{
  x = i;
  for (int j = 0; j < 5; j++)
  {
    y = j;
    for (int k = 0; k < 13; k++)
    {
      z = k;
      v@loc = set(x,y,z); // you can use variable values as parameters of vector only with set() function.
      addpoint(geoself(),v@loc);
    }
  } 
}
//end of code
