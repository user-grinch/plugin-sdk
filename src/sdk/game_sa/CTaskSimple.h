#pragma once

#include <plugin/plugin.h>
#include "CTask.h"

#pragma pack(push, 4)
class PLUGIN_API CTaskSimple : public CTask
{
protected:
    CTaskSimple(plugin::dummy_func_t a) : CTask(a) {}
    
public:
	CTaskSimple();
	virtual ~CTaskSimple();

	virtual bool ProcessPed(class CPed *ped);//=0
	virtual bool SetPedPosition(class CPed *ped);
};
#pragma pack(pop)

//VALIDATE_SIZE(CTaskSimple, 8);