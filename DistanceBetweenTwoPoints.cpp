/*
Author: Ian Wonbeen Kim
Date: Mar. 4, 2023
Language: Houdini Vex
Program Version: Houdini FX Education Version 19.5.303
Category: Vex, Sop, Point Wrangle, Details
Key Functions: addpoint(geoself(), vector3);
Code Function: DistanceBetween2Points
*/

float d = length(@P); //length from the origin to the point P
float dist = distance(@P, {2,0,5}); //length from one point to another. Here the distance from @P and point with coordinates defined by {2,0,5}.
