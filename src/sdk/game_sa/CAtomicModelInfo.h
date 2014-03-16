#pragma once
#include <plugin/plugin.h>
#include "CBaseModelInfo.h"

class PLUGIN_API CAtomicModelInfo : public CBaseModelInfo
{
protected:
    CAtomicModelInfo(plugin::dummy_func_t a) : CBaseModelInfo(a) { }
    
public:
	// vtable

	virtual void SetAtomic(RpAtomic *atomic);//=0

	//

	CAtomicModelInfo();
	~CAtomicModelInfo();

	//

	RpAtomic *GetAtomicFromDistance(float distance);
};

VALIDATE_SIZE(CAtomicModelInfo, 0x20);