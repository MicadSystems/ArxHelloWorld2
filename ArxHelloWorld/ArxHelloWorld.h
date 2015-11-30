// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ARXHELLOWORLD_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ARXHELLOWORLD_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ARXHELLOWORLD_EXPORTS
#define ARXHELLOWORLD_API __declspec(dllexport)
#else
#define ARXHELLOWORLD_API __declspec(dllimport)
#endif

// This class is exported from the ArxHelloWorld.dll
class ARXHELLOWORLD_API CArxHelloWorld {
public:
	CArxHelloWorld(void);
	// TODO: add your methods here.
};

extern ARXHELLOWORLD_API int nArxHelloWorld;

ARXHELLOWORLD_API int fnArxHelloWorld(void);
