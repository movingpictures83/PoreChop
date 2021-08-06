#ifndef PORECHOPPLUGIN_H
#define PORECHOPPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class PoreChopPlugin : public Plugin
{
public: 
 std::string toString() {return "PoreChop";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
 std::vector<std::string> fastqFiles;
};

#endif
