/*
 *  array_utils.h
 *  Spike
 *
 *  Created by Ben Evans on 04/02/2009.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
//#include <errno.h>

#include "utils.h"
//#include "globals.h"

#ifndef EPS
#define EPS		1.2e-7
#endif
//const double eps = 1.0e-8;

extern void normalize(double *vec, int size);
extern double ndp(double *vec_x, double *vec_y, int size);
extern void print_irow(FILE * file_ptr, int * data, int ncols);
extern void print_iarray(FILE *file_ptr, int **data, int nrows, int ncols);
extern void print_frow(FILE * file_ptr, float * data, int ncols);
extern void print_farray(FILE *file_ptr, float **data, int nrows, int ncols);
extern void print_darray(FILE *file_ptr, double **data, int nrows, int ncols);
extern int ** get_2D_iarray(int nrows, int ncols, int init);
extern void free_2D_iarray(int ** array2D);//, int nrows);
extern int *** get_3D_iarray(int nlays, int nrows, int ncols, int init);
extern void free_3D_iarray(int *** array3D, int nlays);//, int nrows);
extern float ** get_2D_farray(int nrows, int ncols, float init);
extern void free_2D_farray(float ** array2D);//, int nrows);
extern float *** get_3D_farray(int nlays, int nrows, int ncols, float init);
extern void free_3D_farray(float *** array3D, int nlays);//, int nrows);
extern double ** get_2D_darray(int nrows, int ncols, double init);
extern void free_2D_darray(double ** array2D);//, int nrows);
extern double *** get_3D_darray(int nlays, int nrows, int ncols, double init);
extern void free_3D_darray(double *** array3D, int nlays);//, int nrows);
extern float ******* get_7D_farray(int D1, int D2, int D3, int D4, int D5, int D6, int D7, float init);
extern void free_7D_farray(float ******* array7D, int D1, int D2, int D3, int D4, int D5);
