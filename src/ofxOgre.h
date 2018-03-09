/*
	ofxIrrlicht in openFrameworks
	(c) s373.net/x 2017

*/


#pragma once


#include "Ogre.h"
// #include <irrlicht.h>

// /opt/of-25nov17/addons/ofxIrrlicht/libs/Irrlicht/include/irrMath.h
//:61,62
//! Constant for half of PI.
// const f32 HALF_PI	= PI/2.0f;

// conflicts wf

// /opt/of-25nov17/libs/openFrameworks/utils/ofConstants.h
//
// #ifndef M_HALF_PI
// 	#define M_HALF_PI  1.57079632679489661923
// #endif




/*
In the Irrlicht Engine, everything can be found in the namespace 'irr'. So if
you want to use a class of the engine, you have to write irr:: before the name
of the class. For example to use the IrrlichtDevice write: irr::IrrlichtDevice.
To get rid of the irr:: in front of the name of every class, we tell the
compiler that we use that namespace from now on, and we will not have to write
irr:: anymore.
*/
// using namespace irr;

/*
There are 5 sub namespaces in the Irrlicht Engine. Take a look at them, you can
read a detailed description of them in the documentation by clicking on the top
menu item 'Namespace List' or by using this link:
http://irrlicht.sourceforge.net/docu/namespaces.html
Like the irr namespace, we do not want these 5 sub namespaces now, to keep this
example simple. Hence, we tell the compiler again that we do not want always to
write their names.
*/
// using namespace core;
// using namespace scene;
// using namespace video;
// using namespace io;
// using namespace gui;
