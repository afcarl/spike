/*
 *  read_parameters.h
 *  Spike
 *
 *  Created by Ben Evans on 28/11/2008.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

/*
 * parse: parse simple name/value pairs
 * SAMPLE BUILD: cc -g -Wall -o parse parse.c
 */

#ifndef _READ_PARAMETERS_H
#define _READ_PARAMETERS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <assert.h>

#include "globals.h"
#include "parameters.h"
#include "utils.h"

#define MAXLEN 256
#define BUFFER 512 // Make larger for comments or break up comments
#define VECBUFF 4

char * trim(char * string);
int parse_string(PARAMS * params, char * string);
int read_parameters(PARAMS * params, char * paramfile);
int parseIntVector(char * string, int ** array);
int parseFloatVector(char * string, float ** array);
int printParameters(PARAMS * mp, char * paramfile);
void printIntArray(FILE * fp, char * name, int * array, int len);
void printFloatArray(FILE * fp, char * name, float * array, int len);

#endif
