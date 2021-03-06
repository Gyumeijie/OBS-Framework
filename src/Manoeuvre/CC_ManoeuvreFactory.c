//
//
// CC_ManoeuvreFactory.c
//
// This file was automatically generated by an XSL program
//

#include "../GeneralInclude/CompilerSwitches.h"
#include "../GeneralInclude/DebugSupport.h"
#include "../GeneralInclude/BasicTypes.h"
#include "../GeneralInclude/ClassId.h"
#include "../GeneralInclude/Constants.h"
#include "../Manoeuvre/DC_DummyConfigurableManoeuvre.h"
#include "../Manoeuvre/DC_DummyManoeuvre.h"
#include "../Manoeuvre/DC_TestPUSConfigurableManoeuvre.h"
#include "../Base/CC_RootObject.h"
#include "CC_ManoeuvreFactory.h"
#include <string.h>



///////////////////////////////////////////////////////////////////////////////
//
//                            class data
//
///////////////////////////////////////////////////////////////////////////////

static CC_ManoeuvreFactory *pInstance;     



///////////////////////////////////////////////////////////////////////////////
//
//                            class  method(s) definition
//
///////////////////////////////////////////////////////////////////////////////

CC_ManoeuvreFactory* CC_ManoeuvreFactory_getInstance(void)
{
    if (pInstance == pNULL) {
        pInstance = CC_ManoeuvreFactory_new();
    }

    return pInstance;
}



///////////////////////////////////////////////////////////////////////////////
//
//                  non-virtual member method(s) definition
//
///////////////////////////////////////////////////////////////////////////////

void CC_ManoeuvreFactory_setManoeuvre(CC_ManoeuvreFactory *This, 
                                      unsigned int i,
                                      Manoeuvre *pItem)
{
    assert(pItem != pNULL);

    const char *typeName = object_get_typename((Object*)pItem);

    if (strcmp(typeName, TYPE_DC_DUMMYMANOEUVRE) == 0) {
        setDummyManoeuvre(This, i, (void*)pItem);
    } else if (strcmp(typeName, TYPE_DC_TESTPUSCONFIGURABLEMANOEUVRE) == 0) { 
        setTestPUSConfigurableManoeuvre(This, i, (void*)pItem);
    } else if (strcmp(typeName, TYPE_DC_DUMMYCONFIGURABLEMANOEUVRE) == 0) {
        setDummyConfigurableManoeuvre(This, i, (void*)pItem);
    } else {
        // Unknown Manoeuvre type
        assert(false);
    }
}

static void setDummyConfigurableManoeuvre
(
    CC_ManoeuvreFactory *This, 
    unsigned int i,
    DC_DummyConfigurableManoeuvre *pItem
)
{
    assert(i < This->sizeDummyConfigurableManoeuvre);
    assert(pItem != pNULL);
    This->poolDummyConfigurableManoeuvre[i] = pItem;
    Manoeuvre_setInUse((Manoeuvre*)This->poolDummyConfigurableManoeuvre[i], false);
}

unsigned int CC_ManoeuvreFactory_getNumberDummyConfigurableManoeuvre
(
    CC_ManoeuvreFactory *This
)
{
    unsigned int counter = 0;
    DC_DummyConfigurableManoeuvre **poolDummyConfigurableManoeuvre;
    poolDummyConfigurableManoeuvre = This->poolDummyConfigurableManoeuvre;
    for (unsigned int i=0; i<This->sizeDummyConfigurableManoeuvre; i++) 
    {
       if (Manoeuvre_isInUse((Manoeuvre*)poolDummyConfigurableManoeuvre[i])) 
       {
           counter++;
       }
    }

    return counter;
}

unsigned int CC_ManoeuvreFactory_getCapacityDummyConfigurableManoeuvre
(
    CC_ManoeuvreFactory *This
)
{
    return This->sizeDummyConfigurableManoeuvre;
}

DC_DummyConfigurableManoeuvre* CC_ManoeuvreFactory_allocateDummyConfigurableManoeuvre
(
    CC_ManoeuvreFactory *This
)
{
    CC_RootObjectClass *cc_roc = CC_ROOTOBJECT_CLASS(This);
    assert(cc_roc->isObjectConfigured(This));

    DC_DummyConfigurableManoeuvre **poolDummyConfigurableManoeuvre;
    poolDummyConfigurableManoeuvre = This->poolDummyConfigurableManoeuvre;
    for (unsigned int i=0; i<This->sizeDummyConfigurableManoeuvre; i++) 
    {
       if (!Manoeuvre_isInUse((Manoeuvre*)poolDummyConfigurableManoeuvre[i])) 
       {
          Manoeuvre_setInUse((Manoeuvre*)poolDummyConfigurableManoeuvre[i], true);
          return poolDummyConfigurableManoeuvre[i];
       }
    }

    return pNULL;
}

bool CC_ManoeuvreFactory_isFreeDummyConfigurableManoeuvre(CC_ManoeuvreFactory *This)
{
    DC_DummyConfigurableManoeuvre **poolDummyConfigurableManoeuvre;
    poolDummyConfigurableManoeuvre = This->poolDummyConfigurableManoeuvre;
    for (unsigned int i=0; i<This->sizeDummyConfigurableManoeuvre; i++) 
    {
       if (!Manoeuvre_isInUse((Manoeuvre*)poolDummyConfigurableManoeuvre[i])) 
       {
          return true;
       }
    }

    return false;
}

static void setDummyManoeuvre(CC_ManoeuvreFactory *This, 
                              unsigned int i,
                              DC_DummyManoeuvre *pItem)
{
    assert(i < This->sizeDummyManoeuvre);
    assert(pItem != pNULL);
    This->poolDummyManoeuvre[i] = pItem;
    Manoeuvre_setInUse((Manoeuvre*)This->poolDummyManoeuvre[i], false);
}

unsigned int CC_ManoeuvreFactory_getNumberDummyManoeuvre(CC_ManoeuvreFactory *This)
{
    unsigned int counter = 0;
    DC_DummyManoeuvre **poolDummyManoeuvre = This->poolDummyManoeuvre;
    for (unsigned int i=0; i<This->sizeDummyManoeuvre; i++) 
    {
       if (Manoeuvre_isInUse((Manoeuvre*)poolDummyManoeuvre[i])) 
       {
           counter++;
       }
    }

    return counter;
}

unsigned int CC_ManoeuvreFactory_getCapacityDummyManoeuvre
(
    CC_ManoeuvreFactory *This
)
{
    return This->sizeDummyManoeuvre;
}

DC_DummyManoeuvre* CC_ManoeuvreFactory_allocateDummyManoeuvre
(
    CC_ManoeuvreFactory *This
)
{
    CC_RootObjectClass *cc_roc = CC_ROOTOBJECT_CLASS(This);
    assert(cc_roc->isObjectConfigured(This));

    DC_DummyManoeuvre **poolDummyManoeuvre = This->poolDummyManoeuvre;
    for (unsigned int i=0; i<This->sizeDummyManoeuvre; i++) 
    {
       if (!Manoeuvre_isInUse((Manoeuvre*)poolDummyManoeuvre[i])) 
       {
          Manoeuvre_setInUse((Manoeuvre*)poolDummyManoeuvre[i], true);
          return poolDummyManoeuvre[i];
       }
    }

    return pNULL;
}

bool CC_ManoeuvreFactory_isFreeDummyManoeuvre(CC_ManoeuvreFactory *This)
{
    DC_DummyManoeuvre **poolDummyManoeuvre = This->poolDummyManoeuvre;
    for (unsigned int i=0; i<This->sizeDummyManoeuvre; i++) 
    {
       if (!Manoeuvre_isInUse((Manoeuvre*)poolDummyManoeuvre[i])) 
       {
          return true;
       }
    }

    return false;
}

static void setTestPUSConfigurableManoeuvre
(
    CC_ManoeuvreFactory *This, 
    unsigned int i, 
    DC_TestPUSConfigurableManoeuvre *pItem
)
{
    assert(i < This->sizeTestPUSConfigurableManoeuvre);
    assert(pItem != pNULL);
    This->poolTestPUSConfigurableManoeuvre[i] = pItem;
    Manoeuvre_setInUse((Manoeuvre*)This->poolTestPUSConfigurableManoeuvre[i], false);
}

unsigned int CC_ManoeuvreFactory_getNumberTestPUSConfigurableManoeuvre
(
    CC_ManoeuvreFactory *This
)
{
    unsigned int counter = 0;
    DC_TestPUSConfigurableManoeuvre **poolTestPUSConfigurableManoeuvre;
    poolTestPUSConfigurableManoeuvre = This->poolTestPUSConfigurableManoeuvre;
    for (unsigned int i=0; i<This->sizeTestPUSConfigurableManoeuvre; i++) 
    {
       if (Manoeuvre_isInUse((Manoeuvre*)poolTestPUSConfigurableManoeuvre[i])) 
       {
           counter++;
       }
    }

    return counter;
}

unsigned int CC_ManoeuvreFactory_getCapacityTestPUSConfigurableManoeuvre
(
    CC_ManoeuvreFactory *This
)
{
    return This->sizeTestPUSConfigurableManoeuvre;
}

DC_TestPUSConfigurableManoeuvre* CC_ManoeuvreFactory_allocateTestPUSConfigurableManoeuvre
(
    CC_ManoeuvreFactory *This
)
{
    CC_RootObjectClass *cc_roc = CC_ROOTOBJECT_GET_CLASS(This);
    assert(cc_roc->isObjectConfigured(This));

    DC_TestPUSConfigurableManoeuvre **poolTestPUSConfigurableManoeuvre;
    poolTestPUSConfigurableManoeuvre = This->poolTestPUSConfigurableManoeuvre;
    for (unsigned int i=0; i<This->sizeTestPUSConfigurableManoeuvre; i++) 
    {
       if (!Manoeuvre_isInUse((Manoeuvre*)poolTestPUSConfigurableManoeuvre[i])) 
       {
          Manoeuvre_setInUse((Manoeuvre*)poolTestPUSConfigurableManoeuvre[i], true);
          return poolTestPUSConfigurableManoeuvre[i];
       }
    }

    return pNULL;
}

bool CC_ManoeuvreFactory_isFreeTestPUSConfigurableManoeuvre(CC_ManoeuvreFactory *This)
{
    DC_TestPUSConfigurableManoeuvre **poolTestPUSConfigurableManoeuvre;
    poolTestPUSConfigurableManoeuvre = This->poolTestPUSConfigurableManoeuvre;
    for (unsigned int i=0; i<This->sizeTestPUSConfigurableManoeuvre; i++) 
    {
       if (!Manoeuvre_isInUse((Manoeuvre*)poolTestPUSConfigurableManoeuvre[i])) 
       {
          return true;
       }
    }

    return false;
}



///////////////////////////////////////////////////////////////////////////////
//
//                    non-pure virtual  method(s) definition
//
///////////////////////////////////////////////////////////////////////////////

/**
 * Check that all component instances required by the factory have been loaded.
 * @return true if the component is configured, false otherwise
 */
static bool isObjectConfigured(void *obj)
{
    CC_RootObjectClass *cc_roc = GET_CLASS(TYPE_CC_ROOTOBJECT);
    CC_ManoeuvreFactory *This = CC_MANOEUVREFACTORY(obj);

    if (!cc_roc->isObjectConfigured(obj)) {
        return false;
    }
  
    if (This->poolDummyConfigurableManoeuvre == pNULL) {
        return false;
    }

    for (unsigned int i=0; i<This->sizeDummyConfigurableManoeuvre; i++) {
        if (This->poolDummyConfigurableManoeuvre[i] == pNULL) {
            return false;
        }
    }
     
    if (This->poolDummyManoeuvre == pNULL) {
        return false;
    }

    for (unsigned int i=0; i<This->sizeDummyManoeuvre; i++) {
        if (This->poolDummyManoeuvre[i] == pNULL) {
            return false;
        }
    }
     
    if (This->poolTestPUSConfigurableManoeuvre == pNULL) {
        return false;
    }

    for (unsigned int i=0; i<This->sizeTestPUSConfigurableManoeuvre; i++) {
        if (This->poolTestPUSConfigurableManoeuvre[i] == pNULL) {
            return false;
        }
    }

   return true;
}



///////////////////////////////////////////////////////////////////////////////
//
//                   object constructor and destructor
//
///////////////////////////////////////////////////////////////////////////////

static void instance_init(Object *obj)
{
    CC_ManoeuvreFactory *This = CC_MANOEUVREFACTORY(obj);
    unsigned int allocSize;


    unsigned int sizeDummyConfigurableManoeuvre = 1;
    // DC_DummyConfigurableManoeuvre*
    allocSize = sizeDummyConfigurableManoeuvre*sizeof(void*);
    This->poolDummyConfigurableManoeuvre = g_malloc(allocSize);
    for (unsigned int i=0; i<sizeDummyConfigurableManoeuvre; i++) 
    {
        This->poolDummyConfigurableManoeuvre[i] = pNULL;
    }
    This->sizeDummyConfigurableManoeuvre = sizeDummyConfigurableManoeuvre; 
      
    unsigned int sizeDummyManoeuvre = 1;
    // DC_DummyManoeuvre*
    allocSize = sizeDummyManoeuvre*sizeof(void*);
    This->poolDummyManoeuvre = g_malloc(allocSize);
    for (unsigned int i=0; i<sizeDummyManoeuvre; i++) 
    {
       This->poolDummyManoeuvre[i] = pNULL;
    }
    This->sizeDummyManoeuvre = sizeDummyManoeuvre;
      
    unsigned int sizeTestPUSConfigurableManoeuvre = 1;
    // DC_TestPUSConfigurableManoeuvre*
    allocSize = sizeTestPUSConfigurableManoeuvre*sizeof(void*);
    This->poolTestPUSConfigurableManoeuvre = g_malloc(allocSize);
    for (unsigned int i=0; i<sizeTestPUSConfigurableManoeuvre; i++) 
    {
        This->poolTestPUSConfigurableManoeuvre[i] = pNULL;
    }
    This->sizeTestPUSConfigurableManoeuvre = sizeTestPUSConfigurableManoeuvre;  
      

    CC_RootObject_setClassId((CC_RootObject*)obj, ID_MANOEUVREFACTORY);
}

CC_ManoeuvreFactory* CC_ManoeuvreFactory_new(void)
{
    Object *obj = object_new(TYPE_CC_MANOEUVREFACTORY);
    return (CC_ManoeuvreFactory*)obj;
}



///////////////////////////////////////////////////////////////////////////////
//
//                   binding and type registration
//
///////////////////////////////////////////////////////////////////////////////

static void class_init(ObjectClass *oc, void *data)
{
    CC_RootObjectClass *cc_roc = CC_ROOTOBJECT_CLASS(oc);
    cc_roc->isObjectConfigured = isObjectConfigured;
}

static const TypeInfo type_info = {
    .name = TYPE_CC_MANOEUVREFACTORY,
    .parent = TYPE_CC_ROOTOBJECT,
    .instance_size = sizeof(CC_ManoeuvreFactory),
    .abstract = false,
    .class_size = sizeof(CC_ManoeuvreFactoryClass),
    .instance_init = instance_init,
    .class_init = class_init,
};

void CC_ManoeuvreFactory_register(void)
{
    type_register_static(&type_info);
}
