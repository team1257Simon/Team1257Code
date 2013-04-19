// Nessystem.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Nessystem.h"


// This is an example of an exported variable
NESSYSTEM_API int nNessystem=0;

// This is an example of an exported function.
NESSYSTEM_API int fnNessystem(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Nessystem.h for the class definition
CNessystem::CNessystem()
{
	return;
}
