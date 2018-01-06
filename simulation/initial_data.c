// Starttime
const double = t_0 0;

// Endtime
const double = t_1 1;

// Amount of bodies
const int N = 3;

// Space dimensions
const int D = 2;

// Gravitational constant
const double G = 6.67408 * pow(10, -11);

// Steps of simulation | needs to be calculated individually
const int S = 20;

// InitialIposition of all bodies (first entry = Saturn, second = moon 1, third = moon 2)
const int initial_positions[N][D] = {{0,0},{1,1},{1,-1}}

// Initialvelocities of all bodies
const int initial_velocities[N][D] = {{0,0}, {0,0}, {0,0}}

// Mass of all bodies
const int initial_masses[N] = {1, 1, 1}