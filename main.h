#ifndef main_H
#define main_H

#include "uv_camera.h"
#include "custom_math.h"

#include <cstdlib>
#include <GL/glut.h>       //GLUT Library

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <sstream>
using std::ostringstream;
using std::istringstream;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <set>
using std::set;

#include <map>
using std::map;

#include <utility>
using std::pair;


void idle_func(void);
void init_opengl(const int& width, const int& height);
void reshape_func(int width, int height);
void display_func(void);
void keyboard_func(unsigned char key, int x, int y);
void mouse_func(int button, int state, int x, int y);
void motion_func(int x, int y);
void passive_motion_func(int x, int y);
 
void render_string(int x, const int y, void* font, const string& text);
void draw_objects(void);


const long double speed_of_light = 299792458;
const long double grav_constant = 6.673e-11;
const long double sun_mass = 1.989e30;
const long double sun_radius = 6.9634e8;

const long double wl_emit = 1;
const long double r_emit = sun_radius;

custom_math::vector_3 sun_pos(0, 0, 0);
custom_math::vector_3 photon_pos(0, r_emit, 0);
custom_math::vector_3 photon_vel(0, speed_of_light, 0);
long double photon_wavelength = 1;

vector<custom_math::vector_3> positions;

custom_math::vector_3 background_colour(0.0f, 0.0f, 0.0f);
custom_math::vector_3 control_list_colour(1.0f, 1.0f, 1.0f);

bool draw_axis = true;
bool draw_control_list = true;

uv_camera main_camera;

GLint win_id = 0;
GLint win_x = 800, win_y = 600;
float camera_w = 1e11;

float camera_fov = 45;
float camera_x_transform = 0;
float camera_y_transform = 0;
float u_spacer = 0.01;
float v_spacer = 0.5 * u_spacer;
float w_spacer = 0.1;
float camera_near = 1;
float camera_far = 1000000000;

bool lmb_down = false;
bool mmb_down = false;
bool rmb_down = false;
int mouse_x = 0;
int mouse_y = 0;


#endif