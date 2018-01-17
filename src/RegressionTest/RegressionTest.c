//
// Copyright 2004 P&P Software GmbH - All Rights Reserved
//
// RegressionTest.cpp
//
// Version	1.0
// Date		13.09.02
// Author   A. Pasetti (P&P Software)

#include "../Utilities/TestSuite.h"
#include "../Utilities/TestUtilities.h"

#include "../ApplicationTypeRegister/ApplicationTypeRegister.h"
#include "./RegressionTestTypeRegister.h"

#include "TestCaseRootObject_3.h"
#include "TestCaseRootObject_1.h"
#include "TestCaseRootObject_2.h" 
#include "TestCaseDummyTracer_1.h"
#include "TestCaseEventRepository_1.h"
#include "TestCaseEventRepository_2.h"
#include "TestCaseEventRepository_3.h"
#include "TestCaseDummyObsClock_1.h"
#include "TestCaseEvent_1.h"
#include "TestCaseDummyPunctualAction_1.h"
#include "TestCaseDummyConditionalPunctualAction_1.h"
#include "TestCaseRecoveryAction_1.h"
#include "TestCaseFdirCheck_1.h"
#include "TestCaseNullProfile_1.h"
#include "TestCaseForbiddenValueProfile_1.h"
#include "TestCaseDeltaProfile_1.h" 
#include "TestCaseStuckDataProfile_1.h"
#include "TestCaseInRangeProfile_1.h"
#include "TestCaseOutOfRangeProfile_1.h"
#include "TestCaseProfileList_1.h"
#include "TestCaseBasicDatabase_1.h"
#include "TestCaseDummyDatabase_1.h" 
#include "TestCaseDataItem_1.h"
#include "TestCaseRawDataItem_1.h"
#include "TestCaseBasicDataPool_1.h"
#include "TestCaseDummyDataPool_1.h"
#include "TestCaseDummyCopyControlBlock_1.h"
#include "TestCaseDummyDataItemControlBlock_1.h" 
#include "TestCaseDummyDataPoolControlBlock_1.h"
#include "TestCaseDummyPointerControlBlock_1.h"
#include "TestCaseDummyFsmState_1.h"
#include "TestCaseFSM_1.h"
#include "TestCaseFSM_2.h"
#include "TestCaseFSM_3.h"
#include "TestCaseFsmEvent_1.h"
#include "TestCaseFromFsmEvent_1.h" 
#include "TestCaseUnstableFsmState_1.h"
#include "TestCaseNestedFsmActivator_1.h"
#include "TestCaseNestedFsmActivatorWithEndState_1.h"
#include "TestCaseNestedFsmActivatorWithExitCheck_1.h"
#include "TestCaseDummyModeManager_1.h" 
#include "TestCaseCyclingPunctualActionModeManager_1.h"
#include "TestCaseSimplePunctualActionModeManager_1.h"
#include "TestCaseDummyTelemetryPacket_1.h" 
#include "TestCaseDummyPUSTelemetryPacket_1.h"
#include "TestCaseChecksum_1.h"
#include "TestCasePUSMemoryDumpOffset_1.h" 
#include "TestCaseDataItem16TmWord_1.h"

#include "../GeneralInclude/TestCompilerSwitches.h"                             
#include "../GeneralInclude/CompilerSwitches.h"                                 
#include "../GeneralInclude/Constants.h"

Error *error_fatal; 
Error *error_abort;
int errno;

int main(int argc, char* argv[]) {

    application_type_register(); 
    regression_test_type_register();
    
    // Open output file (only on MS_HOST)
	FILE* out = pNULL;

#ifdef MS_HOST
    if((out = fopen("RegressionTestReport.html", "w")) == pNULL){
       printf( "\nThe file 'RegressionTestReport.html' could not be opened\n" );
    } else {
       printf( "\nThe file 'RegressionTestReport.html' was successfully opened\n" );
    }
#endif

    printf( "\nBegin regression test ...\n" );

	// Create and load a test suite (NB: The TestCaseRootObject_3 must be the
    // the first test case to run because it tests the system configuration
    // service)
	TestSuite* ts = TestSuite_new(out);

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseRootObject_3_new());
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseRootObject_2_new());
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseRootObject_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyTracer_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseEventRepository_1_new());
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseEventRepository_2_new());
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseEventRepository_3_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyObsClock_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseEvent_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyPunctualAction_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyConditionalPunctualAction_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseRecoveryAction_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseFdirCheck_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseNullProfile_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseForbiddenValueProfile_1_new());
    
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDeltaProfile_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseStuckDataProfile_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseInRangeProfile_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseOutOfRangeProfile_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseProfileList_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseBasicDatabase_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyDatabase_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDataItem_1_new());
    
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseRawDataItem_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseBasicDataPool_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyDataPool_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyCopyControlBlock_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyDataItemControlBlock_1_new());
    
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyDataPoolControlBlock_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyPointerControlBlock_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyFsmState_1_new());
    
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseFSM_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseFSM_2_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseFSM_3_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseFsmEvent_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseFromFsmEvent_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseUnstableFsmState_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseNestedFsmActivator_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseNestedFsmActivatorWithEndState_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseNestedFsmActivatorWithExitCheck_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyModeManager_1_new());
    
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseCyclingPunctualActionModeManager_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseSimplePunctualActionModeManager_1_new());
    
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyTelemetryPacket_1_new());
    
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDummyPUSTelemetryPacket_1_new());

    TestSuite_loadTestCase(ts, (TestCase*)TestCaseChecksum_1_new());
    
    TestSuite_loadTestCase(ts, (TestCase*)TestCasePUSMemoryDumpOffset_1_new());
    
    TestSuite_loadTestCase(ts, (TestCase*)TestCaseDataItem16TmWord_1_new());


	// Run the test suite -- this causes all test cases in
	// the test suite to be run in sequence
	TestSuite_runTestSuite(ts);

    printf( "\nRegression test ended... \n" );


	// close output file
#ifdef MS_HOST
	fclose(out);
#endif
	return 0;
}

