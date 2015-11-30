#pragma once

#ifdef WIBBLE_EXPORTS
#define WIBBLE_API __declspec(dllexport)
#else
#define WIBBLE_API __declspec(dllimport)
#endif

class WIBBLE_API wibble
{
public:
	wibble(void);
	~wibble(void);

	int wobble(int v);
};

extern WIBBLE_API int nWibble;

WIBBLE_API int fnWibble(void);