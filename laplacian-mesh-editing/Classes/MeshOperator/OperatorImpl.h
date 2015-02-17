#pragma once
#include "EntityImpl.h"
class OperatorImpl
{
public:
	OperatorImpl(EntityImpl* mesh):mMesh(mesh){};
	OperatorImpl();
	~OperatorImpl();
	
	/* x,y are in OpenGL Coordinate */
	virtual void mouseClick(int x, int y) = 0;

	virtual void callFunction(int funcName) = 0;

	EntityImpl* getMesh() const { return mMesh; }

	void setMesh(EntityImpl* val) { mMesh = val; }

protected:
	EntityImpl* mMesh;
	
};