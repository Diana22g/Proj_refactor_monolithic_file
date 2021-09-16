/*
* fileio header
*
* Diana G.
*/
#pragma once
#include <string>
#include <vector>
#include "../includes/constants.h"

int load(const std::string filename, std::vector<process> &myProcesses);
int save(const std::string filename, std::vector<process> &myProcesses);
	