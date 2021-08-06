#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "PoreChopPlugin.h"

void PoreChopPlugin::input(std::string file) {
 inputfile = file;
}

void PoreChopPlugin::run() {
   
}

void PoreChopPlugin::output(std::string file) {
	std::string command = "porechop -i "+inputfile+" -o "+file;
 std::cout << command << std::endl;

 system(command.c_str());

}

PluginProxy<PoreChopPlugin> PoreChopPluginProxy = PluginProxy<PoreChopPlugin>("PoreChop", PluginManager::getInstance());
