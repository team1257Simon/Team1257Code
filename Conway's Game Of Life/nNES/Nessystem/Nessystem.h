// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the NESSYSTEM_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// NESSYSTEM_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifndef _NESSYSTEM_H_
#define _NESSYSTEM_H_
#ifdef NESSYSTEM_EXPORTS
#define NESSYSTEM_API __declspec(dllexport)
#else
#define NESSYSTEM_API __declspec(dllimport)
#endif

// This class is exported from the Nessystem.dll
class NESSYSTEM_API CNessystem {
public:
	CNessystem(void);
};

extern NESSYSTEM_API int nNessystem;

NESSYSTEM_API int fnNessystem(void);
#endif