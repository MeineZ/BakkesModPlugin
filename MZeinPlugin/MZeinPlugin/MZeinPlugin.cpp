#include "MZeinPlugin.h"

#pragma comment(lib, "bakkesmod.lib")

BAKKESMOD_PLUGIN(MZeinPlugin, "MZein Plugin", "0.1", PLUGINTYPE_FREEPLAY)

MZeinPlugin::MZeinPlugin()
{

}


MZeinPlugin::~MZeinPlugin()
{ 

}

void MZeinPlugin::onLoad()
{

	cvarManager->registerCvar("test_var_123", "(0, 10)", "A test variable :)", true, true, 0.0f, true, 10.0f, true);

}

void MZeinPlugin::onUnload()
{

}
