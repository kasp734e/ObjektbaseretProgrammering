# Repo til ting jeg skriver i OPRG

## Lektion 1 
### Exercise 1
Now in the main function of exercise_1.cpp:
Define a variable of type intcalled weightassume the unit is [kg]
Define a variable of type doublecalled heightassume the unit is [m]
Initialize to suitable values
Define a variable of type doublecalled bmiand initialize it to weight/height2
Then write
bmi for weight:<weight> and height:<height> is <the result>
to the console output.
Vary the height and weight values set height=0 and observe

### Exercise 2
In the file exercise_2.cpp, implement the following in the mainfunction:
Define a variable angleof type doubleinitialized to some value less than 2*pi
Define a variable xof type doubleinitialized cos(angle)
Define a variable yof type doubleinitialized sin(angle)
Define a variable lengthof type doubleinitialized to the length of (x,y)
Write the length to the console
Vary angle and observe the length value. What is it you are calculating?
Hint: Lengthis defined as sqrt(x2+y2), include <cmath> to implement this

### Exercise 3
1) Use ChatGPT (or another generative AI) to find a formula that describes a throw of a
mass with start speed v 0, and angle α and under the influence of the uniform gravitational
field given by g=9,82 m/s2
2) Use ChatGPT to make a graph using a start speed 5 m/s, an angle of 45 degrees and a
mass of 100 kg
3) Use ChatGPT to make a graph using a start speed of 5 m/s, varying the angle from 5 to
80 degrees in steps of five and a mass og 100 kg
4) Describe to your fellow student what the parameters are – how many, what do each of
the represent, what is the type of the value and what is the result (what does it represent
and what type is it). DO THIS BEFORE NEXT STEP – the purpose is that you learn something
NOT the answer in itself.
5) Use ChatGPT to do the same as in 4) and compare the descriptions
6) I asked ChatGPT the following “create a prototype of a function in C++ for the projectile
motion (vertical distance) at a given horizontal distance”. It gave me the following:
double calculateVerticalDistance(double v0, double theta, double g, double x);
relate the parameters of the function to the description you made in step 4
7) Copy the prototype of the function into the file throw_parabola.h. Above the prototype,
include a comment describing the parameters – one parameter per line
8) Using the formula found by ChatGPT in step 1, implement the function in the file
throw_parabola.cpp . DO NOT USE ChatGPT FOR THIS.
9) Use ChatGPT to create a main function that tests the function with the following
parameters: start speed 5 m/s, an angle of 45 degrees and a mass of 100 kg. Is the relult of
your function as expected (what was expected?)
### Exercise 4
The number geoRatio, for a geometric body can be interpreted thermodynamically in the
following way.
It calculates the surface area/volume
The amount of heat radiated from a homogeneous body is proportional to the surface
area.
And the amount of heat stored in the body is proportional to the volume
So, the geoRatiosays something about how fast the body cools (higher ->faster cooling)
Convince yourselves of the fact that a cube cools faster than a sphere
