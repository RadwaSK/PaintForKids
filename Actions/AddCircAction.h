#ifndef ADD_CIRC_ACTION_H
#define ADD_CIRC_ACTION_H

#include "Action.h"

//Add Rectangle Action class
class AddCircAction: public Action
{
private:
	Point P1, P2; //Rectangle Corners
	GfxInfo CircGfxInfo;
public:
	AddCircAction(ApplicationManager *pApp);

	virtual void ReadActionParameters();
	virtual void Execute() ;
};

#endif