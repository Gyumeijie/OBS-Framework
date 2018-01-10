//
// Copyright 2004 P&P Software GmbH - All Rights Reserved
//
// DC_DummyConditionalPunctualAction.c
//
// Version	1.0
// Date		04.06.03
// Author	R. Totaro

#include "../GeneralInclude/CompilerSwitches.h"
#include "../GeneralInclude/ClassId.h"
#include "../GeneralInclude/Constants.h"
#include "DC_DummyConditionalPunctualAction.h"



///////////////////////////////////////////////////////////////////////////////
//
//                  non-virtual member method(s) definition
//
///////////////////////////////////////////////////////////////////////////////

void DC_DummyConditionalPunctualAction_setExecutionFlag
(
    DC_DummyConditionalPunctualAction *This, 
    bool newState
)
{
	This->executionFlag = newState;
}



///////////////////////////////////////////////////////////////////////////////
//
//                    non-pure virtual  method(s) definition
//
///////////////////////////////////////////////////////////////////////////////

/**
 * Perform a dummy execution test. The result of the test can
 * be forced by calling <code>setExecutionFlag</code>.
 * @see ConditionalPunctualAction#setExecutionFlag
 * @see ConditionalPunctualAction#doAction
 * @see PunctualAction#execute
 * @return returns the value of <code>executionFlag</code>
 */
static bool canExecute(void *obj)
{
	return DC_DUMMYCONDITIONALPUNCTUALACTION(obj)->executionFlag;
}

/**
 * This method does not do anything.
 * @see ConditionalPunctualAction#doAction
 * @see PunctualAction#execute
 * @return always returns an <code>ACTION_SUCCESS</code> code
 */
static TD_ActionOutcome doConditionalAction(void *obj)
{
	return ACTION_SUCCESS;
}



///////////////////////////////////////////////////////////////////////////////
//
//                   object constructor and destructor
//
///////////////////////////////////////////////////////////////////////////////

static void instance_init(Object *obj)
{
    DC_DummyConditionalPunctualAction *This = DC_DUMMYCONDITIONALPUNCTUALACTION(obj);

	This->executionFlag = false;
	CC_RootObject_setClassId((CC_RootObject*)obj, ID_DUMMYCONDITIONALPUNCTUALACTION);
}

DC_DummyConditionalPunctualAction* DC_DummyConditionalPunctualAction_new(void)
{
    return (DC_DummyConditionalPunctualAction*)object_new(TYPE_DC_DUMMYCONDITIONALPUNCTUALACTION);
}



///////////////////////////////////////////////////////////////////////////////
//
//                   binding and type registration
//
///////////////////////////////////////////////////////////////////////////////

static void class_init(ObjectClass *oc, void *data)
{
    DC_DummyConditionalPunctualActionClass *dc_dcpac = DC_DUMMYCONDITIONALPUNCTUALACTION_CLASS(oc);

    ConditionalPunctualActionClass *cpac = CONDITIONALPUNCTUALACTION_CLASS(oc);
    cpac->canExecute = canExecute;
    cpac->doConditionalAction = doConditionalAction;
}

static const TypeInfo type_info = {
    .name = TYPE_DC_DUMMYCONDITIONALPUNCTUALACTION,
    .parent = TYPE_CONDITIONALPUNCTUALACTION,
    .instance_size = sizeof(DC_DummyConditionalPunctualAction),
    .abstract = false,
    .class_size = sizeof(DC_DummyConditionalPunctualActionClass),
    .instance_init = instance_init,
    .class_init = class_init,
};

void DC_DummyConditionalPunctualAction_register(void)
{
    type_register_static(&type_info);
}