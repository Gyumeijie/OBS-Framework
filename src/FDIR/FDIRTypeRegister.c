#include "FDIRTypeRegister.h"
#include "RecoveryAction.h"
#include "DC_NullRecoveryAction.h"
#include "DC_DummyRecoveryAction.h"
#include "DC_FdirCheck.h"
#include "MonitoringProfile.h"
#include "DC_NullProfile.h"
#include "DC_ForbiddenValueProfile.h"
#include "DC_DeltaProfile.h"
#include "DC_StuckDataProfile.h"

void fdir_type_register(void)
{
    RecoveryAction_register();
    DC_NullRecoveryAction_register();
    DC_DummyRecoveryAction_register();
    DC_FdirCheck_register();
    MonitoringProfile_register();
    DC_NullProfile_register();
    DC_ForbiddenValueProfile_register();
    DC_DeltaProfile_register();
    DC_StuckDataProfile_register();
}