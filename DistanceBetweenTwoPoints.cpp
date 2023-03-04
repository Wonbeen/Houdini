/*
Author: Ian Wonbeen Kim
Date: Feb. 25, 2023
Language: Houdini Vex
Program Version: Houdini FX Education Version 19.5.303
Category: Vex, Sop, Point Wrangle, Details
Key Functions: addpoint(geoself(), vector3);
Code Function: Create Points with x,y,z positions based on the nested for-loop iterations.
*/

float d = length(@P); //length from the origin to the point P
float dist = distance(@P, {2,0,5}); //length from one point to another. Here the distance from @P and point with coordinates defined by {2,0,5}.
