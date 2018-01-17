//
// Copyright 2004 P&P Software GmbH - All Rights Reserved
//
// DC_CyclingPunctualActionModeManager.c
//
// Version	1.0
// Date		24.01.04
// Author	A. Pasetti (P&P Software)

#include "../GeneralInclude/CompilerSwitches.h"
#include "../GeneralInclude/ClassId.h"
#include "../Base/DC_CyclingPunctualActionModeManager.h"
#include "../Base/ModeManager.h"



///////////////////////////////////////////////////////////////////////////////
//
//                    non-pure virtual  method(s) definition
//
///////////////////////////////////////////////////////////////////////////////

/**
 * Cycle through the operational modes. Let N be the number of modes
 * and C be the current mode. If C is smaller than(N-1), then this
 * method updates the operationa mode to: (C+1). Otherwise it updates it
 * to 0.
 * @see ModeManager#update
 */
static void update(void *obj)
{
    if (ModeManager_getCurrentMode(obj)<(ModeManager_getNumberOfModes(obj)-1)) {
        ModeManager_setMode(obj, ModeManager_getCurrentMode(obj)+1);
    } else {
        ModeManager_setMode(obj, 0);
    }
}



///////////////////////////////////////////////////////////////////////////////
//
//                   object constructor and destructor
//
///////////////////////////////////////////////////////////////////////////////

static void instance_init(Object *obj)
{
    CC_RootObject_setClassId((CC_RootObject*)obj, ID_CYCLINGPUNCTUALACTIONMODEMANAGER);
}

DC_CyclingPunctualActionModeManager* DC_CyclingPunctualActionModeManager_new(void)
{
    return (DC_CyclingPunctualActionModeManager*)object_new(TYPE_DC_CYCLINGPUNCTUALACTIONMODEMANAGER);
}



///////////////////////////////////////////////////////////////////////////////
//
//                   binding and type registration
//
///////////////////////////////////////////////////////////////////////////////

static void class_init(ObjectClass *oc, void *data)
{
    ModeManagerClass *mmc = MODEMANAGER_CLASS(oc);

    mmc->update = update;
}

static const TypeInfo type_info = {
    .name = TYPE_DC_CYCLINGPUNCTUALACTIONMODEMANAGER,
    .parent = TYPE_PUNCTUALACTIONLISTMODEMANAGER,
    .instance_size = sizeof(DC_CyclingPunctualActionModeManager),
    .abstract = false,
    .class_size = sizeof(DC_CyclingPunctualActionModeManagerClass),
    .instance_init = instance_init,
    .class_init = class_init,
};

void DC_CyclingPunctualActionModeManager_register(void)
{
    type_register_static(&type_info);
}