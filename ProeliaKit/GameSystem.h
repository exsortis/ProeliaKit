//
//  GameSystem.h
//  Proelia
//
//  Created by Paul Schifferer on 1/12/11.
//  Copyright 2011 Pilgrimage Software. All rights reserved.
//

@import Foundation;
@import Cocoa;
#import "ConditionProvider.h"


// Encounter event constants.
typedef NS_ENUM(NSInteger, GameSystemEvent) {
    GameSystemEventSetOrder = 1,
    GameSystemEventAdjustConditions = 2,
    GameSystemEventAdjustConditionsStart = 3,
    GameSystemEventAdjustConditionsEnd = 4,
};

// Encounter status values
typedef NS_ENUM(NSInteger, ActiveEncounterStatus) {
    ActiveEncounterStatusActive = 0,
    ActiveEncounterStatusRemoved = 1,
};

typedef NS_ENUM(NSInteger, ActiveEncounterState) {
    ActiveEncounterStateNormal = 0,
    ActiveEncounterStateOrderUpdate = 1,
    ActiveEncounterStateConditionUpdate = 2,
};

// Game system protocol.
@protocol PRGameSystem <NSObject>

// Informational
+ (NSString*)label;
- (NSString*)label;
+ (NSString*)shortLabel;
- (NSString*)shortLabel;
+ (NSString*)name;
- (NSString*)name;

// Conditions
- (id<PRConditionProvider>)conditionProvider;
- (BOOL)shouldApplyCondition:(id)condition
              forParticipant:(id)activeParticipant
                 duringEvent:(GameSystemEvent)event;

// Ordering
- (NSComparisonResult)encounterOrdering;

// Events
- (NSArray*)startOfEncounterEvents;
- (NSArray*)startOfRoundEvents;
- (NSArray*)startOfTurnEvents;
- (NSArray*)healthChangedEvents;
- (NSArray*)endOfTurnEvents;
- (NSArray*)endOfRoundEvents;
- (NSArray*)endOfEncounterEvents;

// Health
- (void)participant:(id)activeParticipant
     adjustHealthBy:(double)adjustment;

// Encounter status
- (ActiveEncounterStatus)encounterStatusForParticipant:(id)activeParticipant;

@end
