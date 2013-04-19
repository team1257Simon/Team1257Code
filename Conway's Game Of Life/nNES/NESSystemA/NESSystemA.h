// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the NESSYSTEMA_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// NESSYSTEMA_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef NESSYSTEMA_EXPORTS
#define NESSYSTEMA_API __declspec(dllexport)
#else
#define NESSYSTEMA_API __declspec(dllimport)
#endif

// This class is exported from the NESSystemA.dll
class NESSYSTEMA_API CNESSystemA {
public:
	CNESSystemA(void);
	// TODO: add your methods here.
};

extern NESSYSTEMA_API int nNESSystemA;

NESSYSTEMA_API int fnNESSystemA(void);
