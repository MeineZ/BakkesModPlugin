#pragma once

#include <bakkesmod/plugin/bakkesmodplugin.h>

class MZeinPlugin : public BakkesMod::Plugin::BakkesModPlugin
{

public:
	MZeinPlugin();
	~MZeinPlugin();

	virtual void onLoad();
	virtual void onUnload();

};

