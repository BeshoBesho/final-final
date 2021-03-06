#ifndef ADD_CIRC_ACTION_H
#define ADD_CIRC_ACTION_H

#include "Actions/Action.h"

//Add Circle Action class
class AddCircAction : public Action
{
private:
	Point P1, P2; //Center and Radius
	GfxInfo CircGfxInfo;
public:
	AddCircAction(ApplicationManager* pApp);

	//Reads circle parameters
	virtual void ReadActionParameters();

	//Add circle to the ApplicationManager
	virtual void Execute();

};

#endif