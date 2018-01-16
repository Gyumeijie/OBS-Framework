//
// Copyright 2004 P&P Software GmbH - All Rights Reserved
//
// ForwardDeclarations.h
//
// Version	1.0
// Date		12.09.02
// Author	A. Pasetti (P&P Software)

/**
 * @file ForwardDeclarations.h
 * This file defines all forward declarations used in the OBS Framework.
 */

#ifndef FORWARDDECLARATIONS_H
#define FORWARDDECLARATIONS_H

///////////////////////////////////////////////////////////////////////////////
//
//                          types of obsframework
//
///////////////////////////////////////////////////////////////////////////////

typedef struct DataPool  DataPool;
typedef struct DataPoolClass  DataPoolClass;

typedef struct DC_BasicDataPool DC_BasicDataPool;
typedef struct DC_BasicDataPoolClass DC_BasicDataPoolClass;

typedef struct DC_DummyDataPool DC_DummyDataPool;
typedef struct DC_DummyDataPoolClass DC_DummyDataPoolClass;

typedef struct CC_RootObject  CC_RootObject;
typedef struct CC_RootObjectClass  CC_RootObjectClass;

typedef struct DC_BasicPUSTcLoader  DC_BasicPUSTcLoader;
typedef struct DC_BasicPUSTcLoaderClass  DC_BasicPUSTcLoaderClass;

typedef struct DC_DataItem  DC_DataItem;
typedef struct DC_DataItemClass  DC_DataItemClass;

typedef struct DC_RawDataItem DC_RawDataItem;
typedef struct DC_RawDataItemClass DC_RawDataItemClass;

typedef struct ControlBlock ControlBlock;
typedef struct ControlBlockClass ControlBlockClass;

typedef struct CopyControlBlock CopyControlBlock;
typedef struct CopyControlBlockClass CopyControlBlockClass;

typedef struct DC_DummyCopyControlBlock DC_DummyCopyControlBlock;
typedef struct DC_DummyCopyControlBlockClass DC_DummyCopyControlBlockClass;

typedef struct PointerControlBlock PointerControlBlock;
typedef struct PointerControlBlockClass PointerControlBlockClass;

typedef struct DC_DummyPointerControlBlock DC_DummyPointerControlBlock;
typedef struct DC_DummyPointerControlBlockClass DC_DummyPointerControlBlockClass;

typedef struct DataItemControlBlock DataItemControlBlock;
typedef struct DataItemControlBlockClass DataItemControlBlockClass;

typedef struct DC_DummyDataItemControlBlock DC_DummyDataItemControlBlock;
typedef struct DC_DummyDataItemControlBlockClass DC_DummyDataItemControlBlockClass;

typedef struct DataPoolControlBlock DataPoolControlBlock;
typedef struct DataPoolControlBlockClass DataPoolControlBlockClass;

typedef struct DC_DummyDataPoolControlBlock DC_DummyDataPoolControlBlock;
typedef struct DC_DummyDataPoolControlBlockClass DC_DummyDataPoolControlBlockClass;

typedef struct DC_DummyTelemetryPacket  DC_DummyTelemetryPacket;
typedef struct DC_DummyTelemetryPacketClass  DC_DummyTelemetryPacketClass;

typedef struct PunctualAction PunctualAction;
typedef struct PunctualActionClass PunctualActionClass;

typedef struct ConditionalPunctualAction ConditionalPunctualAction;
typedef struct ConditionalPunctualActionClass ConditionalPunctualActionClass;

typedef struct DC_DummyConditionalPunctualAction DC_DummyConditionalPunctualAction;
typedef struct DC_DummyConditionalPunctualActionClass DC_DummyConditionalPunctualActionClass;

typedef struct DC_DummyPunctualAction DC_DummyPunctualAction;
typedef struct DC_DummyPunctualActionClass DC_DummyPunctualActionClass;

typedef struct RecoveryAction RecoveryAction; 
typedef struct RecoveryActionClass RecoveryActionClass; 

typedef struct DC_DummyRecoveryAction DC_DummyRecoveryAction;
typedef struct DC_DummyRecoveryActionClass DC_DummyRecoveryActionClass;

typedef struct DC_SettableDataItem  DC_SettableDataItem;
typedef struct DC_SettableDataItemClass  DC_SettableDataItemClass;

typedef struct CC_FSM  CC_FSM;
typedef struct CC_FSMClass  CC_FSMClass;

typedef struct FsmState FsmState;
typedef struct FsmStateClass FsmStateClass;

typedef struct DC_DummyFsmState DC_DummyFsmState;
typedef struct DC_DummyFsmStateClass DC_DummyFsmStateClass;

typedef struct DC_DummyConfigurableFsmState DC_DummyConfigurableFsmState;
typedef struct DC_DummyConfigurableFsmStateClass DC_DummyConfigurableFsmStateClass;

typedef struct DC_UnstableFsmState DC_UnstableFsmState;
typedef struct DC_UnstableFsmStateClass DC_UnstableFsmStateClass;

typedef struct DC_NestedFsmActivator DC_NestedFsmActivator;
typedef struct DC_NestedFsmActivatorClass DC_NestedFsmActivatorClass;

typedef struct DC_NestedFsmActivatorWithEndState DC_NestedFsmActivatorWithEndState;
typedef struct DC_NestedFsmActivatorWithEndStateClass DC_NestedFsmActivatorWithEndStateClass;

typedef struct DC_NestedFsmActivatorWithExitCheck DC_NestedFsmActivatorWithExitCheck;
typedef struct DC_NestedFsmActivatorWithExitCheckClass DC_NestedFsmActivatorWithExitCheckClass;

typedef struct DC_FsmEvent DC_FsmEvent;
typedef struct DC_FsmEventClass DC_FsmEventClass;

typedef struct DC_FromFsmEvent DC_FromFsmEvent;
typedef struct DC_FromFsmEventClass DC_FromFsmEventClass;

typedef struct CC_TelecommandManager  CC_TelecommandManager;
typedef struct CC_TelecommandManagerClass  CC_TelecommandManagerClass;

typedef struct CC_TelemetryManager  CC_TelemetryManager;
typedef struct CC_TelemetryManagerClass  CC_TelemetryManagerClass;

typedef struct CC_ManoeuvreManager  CC_ManoeuvreManager;
typedef struct CC_ManoeuvreManagerClass  CC_ManoeuvreManagerClass;

typedef struct DC_BasicPUSTmStream  DC_BasicPUSTmStream;
typedef struct DC_BasicPUSTmStreamClass  DC_BasicPUSTmStreamClass;

typedef struct DC_DummyObsClock  DC_DummyObsClock;
typedef struct DC_DummyObsClockClass  DC_DummyObsClockClass;

typedef struct DC_EventRepository  DC_EventRepository;
typedef struct DC_EventRepositoryClass  DC_EventRepositoryClass;

typedef struct DC_Event  DC_Event;
typedef struct DC_EventClass  DC_EventClass;

typedef struct DC_FdirCheck DC_FdirCheck;
typedef struct DC_FdirCheckClass DC_FdirCheckClass;

typedef struct DC_NullRecoveryAction  DC_NullRecoveryAction;
typedef struct DC_NullRecoveryActionClass  DC_NullRecoveryActionClass;

typedef struct DC_DummyConfigurableManoeuvre  DC_DummyConfigurableManoeuvre;
typedef struct DC_DummyConfigurableManoeuvreClass  DC_DummyConfigurableManoeuvreClass;

typedef struct DC_DummyManoeuvre  DC_DummyManoeuvre;
typedef struct DC_DummyManoeuvreClass  DC_DummyManoeuvreClass;

typedef struct DC_DummyTelecommand  DC_DummyTelecommand;
typedef struct DC_DummyTelecommandClass  DC_DummyTelecommandClass;

typedef struct DC_DummyPUSTelecommand  DC_DummyPUSTelecommand;
typedef struct DC_DummyPUSTelecommandClass  DC_DummyPUSTelecommandClass;

typedef struct DC_DummyPUSTelemetryPacket  DC_DummyPUSTelemetryPacket;
typedef struct DC_DummyPUSTelemetryPacketClass  DC_DummyPUSTelemetryPacketClass;

typedef struct DC_PUSControlDataReporting  DC_PUSControlDataReporting;
typedef struct DC_PUSControlDataReportingClass  DC_PUSControlDataReportingClass;

typedef struct DC_PUSDataReportingPacket  DC_PUSDataReportingPacket;
typedef struct DC_PUSDataReportingPacketClass  DC_PUSDataReportingPacketClass;

typedef struct DC_PUSDefineDataReporting  DC_PUSDefineDataReporting;
typedef struct DC_PUSDefineDataReportingClass  DC_PUSDefineDataReportingClass;

typedef struct DC_PUSDumpMemoryAbsolute  DC_PUSDumpMemoryAbsolute;
typedef struct DC_PUSDumpMemoryAbsoluteClass  DC_PUSDumpMemoryAbsoluteClass;

typedef struct DC_PUSDumpMemoryOffset  DC_PUSDumpMemoryOffset;
typedef struct DC_PUSDumpMemoryOffsetClass  DC_PUSDumpMemoryOffsetClass;

typedef struct DC_PUSEventRepository  DC_PUSEventRepository;
typedef struct DC_PUSEventRepositoryClass  DC_PUSEventRepositoryClass;

typedef struct DC_PUSMemoryDumpAbsolute  DC_PUSMemoryDumpAbsolute;
typedef struct DC_PUSMemoryDumpAbsoluteClass  DC_PUSMemoryDumpAbsoluteClass;

typedef struct DC_PUSMemoryDumpOffset  DC_PUSMemoryDumpOffset;
typedef struct DC_PUSMemoryDumpOffsetClass  DC_PUSMemoryDumpOffsetClass;

typedef struct DC_PUSMemoryLoadAbsolute  DC_PUSMemoryLoadAbsolute;
typedef struct DC_PUSMemoryLoadAbsoluteClass  DC_PUSMemoryLoadAbsoluteClass;

typedef struct DC_PUSMemoryLoadOffset  DC_PUSMemoryLoadOffset;
typedef struct DC_PUSMemoryLoadOffsetClass  DC_PUSMemoryLoadOffsetClass;

typedef struct DC_PUSTcVerificationPacket  DC_PUSTcVerificationPacket;
typedef struct DC_PUSTcVerificationPacketClass  DC_PUSTcVerificationPacketClass;

typedef struct ModeManager ModeManager;
typedef struct ModeManagerClass ModeManagerClass;

typedef struct DC_DummyModeManager DC_DummyModeManager;
typedef struct DC_DummyModeManagerClass DC_DummyModeManagerClass;

typedef struct PunctualActionModeManager PunctualActionModeManager;
typedef struct PunctualActionModeManagerClass PunctualActionModeManagerClass;

typedef struct PunctualActionListModeManager PunctualActionListModeManager;
typedef struct PunctualActionListModeManagerClass PunctualActionListModeManagerClass;

typedef struct DC_CyclingPunctualActionModeManager DC_CyclingPunctualActionModeManager;
typedef struct DC_CyclingPunctualActionModeManagerClass DC_CyclingPunctualActionModeManagerClass;

typedef struct DC_SimplePunctualActionModeManagerClass DC_SimplePunctualActionModeManagerClass;
typedef struct DC_SimplePunctualActionModeManager DC_SimplePunctualActionModeManager;

typedef struct DC_PUSTelemetryModeManager  DC_PUSTelemetryModeManager;
typedef struct DC_PUSTelemetryModeManagerClass  DC_PUSTelemetryModeManagerClass;

typedef struct DC_PUSTmLogger  DC_PUSTmLogger;
typedef struct DC_PUSTmLoggerClass  DC_PUSTmLoggerClass;

typedef struct DC_TestPUSConfigurableManoeuvre  DC_TestPUSConfigurableManoeuvre;
typedef struct DC_TestPUSConfigurableManoeuvreClass  DC_TestPUSConfigurableManoeuvreClass;

typedef struct DC_TestPUSTelecommand  DC_TestPUSTelecommand;
typedef struct DC_TestPUSTelecommandClass  DC_TestPUSTelecommandClass;

typedef struct MonitoringProfile  MonitoringProfile;
typedef struct MonitoringProfileClass  MonitoringProfileClass;

typedef struct DC_NullProfile  DC_NullProfile;
typedef struct DC_NullProfileClass  DC_NullProfileClass;

typedef struct DC_ForbiddenValueProfile DC_ForbiddenValueProfile;
typedef struct DC_ForbiddenValueProfileClass DC_ForbiddenValueProfileClass;

typedef struct DC_DeltaProfile DC_DeltaProfile;
typedef struct DC_DeltaProfileClass DC_DeltaProfileClass;

typedef struct DC_StuckDataProfile DC_StuckDataProfile;
typedef struct DC_StuckDataProfileClass DC_StuckDataProfileClass;

typedef struct RangeProfile RangeProfile;
typedef struct RangeProfileClass RangeProfileClass;

typedef struct DC_InRangeProfile DC_InRangeProfile;
typedef struct DC_InRangeProfileClass DC_InRangeProfileClass;

typedef struct DC_OutOfRangeProfile DC_OutOfRangeProfile;
typedef struct DC_OutOfRangeProfileClass DC_OutOfRangeProfileClass;

typedef struct DC_ProfileList DC_ProfileList;
typedef struct DC_ProfileListClass DC_ProfileListClass;

typedef struct ObsClock  ObsClock;
typedef struct ObsClockClass  ObsClockClass;

typedef struct ParameterDatabase  ParameterDatabase;
typedef struct ParameterDatabaseClass  ParameterDatabaseClass;

typedef struct DC_BasicDatabase DC_BasicDatabase;
typedef struct DC_BasicDatabaseClass DC_BasicDatabaseClass;

typedef struct DC_DummyDatabase  DC_DummyDatabase;
typedef struct DC_DummyDatabaseClass  DC_DummyDatabaseClass;

typedef struct PUSTelecommand  PUSTelecommand;
typedef struct PUSTelecommandClass  PUSTelecommandClass;

typedef struct PUSTcManoeuvre  PUSTcManoeuvre;
typedef struct PUSTcManoeuvreClass  PUSTcManoeuvreClass;

typedef struct Telecommand  Telecommand;
typedef struct TelecommandClass  TelecommandClass;

typedef struct TelecommandLoader  TelecommandLoader;
typedef struct TelecommandLoaderClass  TelecommandLoaderClass;

typedef struct TelemetryPacket  TelemetryPacket;
typedef struct TelemetryPacketClass  TelemetryPacketClass;

typedef struct Tracer  Tracer;
typedef struct TracerClass  TracerClass;

typedef struct DC_DummyTracer DC_DummyTracer;
typedef struct DC_DummyTracerClass  DC_DummyTracerClass;

typedef struct DC_TestTracer DC_TestTracer;
typedef struct DC_TestTracerClass  DC_TestTracerClass;

///////////////////////////////////////////////////////////////////////////////
//
//                          types of unit test 
//
///////////////////////////////////////////////////////////////////////////////


typedef struct TestCase TestCase;
typedef struct TestCaseClass TestCaseClass;

typedef struct TestCaseGenericSetUp TestCaseGenericSetUp;
typedef struct TestCaseGenericSetUpClass TestCaseGenericSetUpClass;

typedef struct TestSuite TestSuite;
typedef struct TestSuiteClass TestSuiteClass;

typedef struct TestCaseWithEvtCheck  TestCaseWithEvtCheck;
typedef struct TestCaseWithEvtCheckClass  TestCaseWithEvtCheckClass;

#endif

