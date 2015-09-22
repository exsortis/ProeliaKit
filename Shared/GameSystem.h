//
//  GameSystem.h
//  Proelia
//
//  Created by Paul Schifferer on 1/12/11.
//  Copyright 2011 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "ConditionProvider.h"


@class Effect;
@class EncounterParticipant;

/**
 * Encounter event constants
 */
typedef NS_ENUM(NSInteger, GameSystemEvent) {
    /**
     * TODO
     */
    GameSystemEventSetOrder = 1,
    /**
     * TODO
     */
    GameSystemEventAdjustConditions = 2,
    /**
     * TODO
     */
    GameSystemEventAdjustConditionsStart = 3,
    /**
     * TODO
     */
    GameSystemEventAdjustConditionsEnd = 4,
};

//
/**
 * Encounter status values for a participant
 */
typedef NS_ENUM(NSInteger, EncounterStatus) {
    /**
     * The participant is considered active and included in the encounter
     */
    EncounterStatusActive = 0,
    /**
     * The participant is considered "removed" from the encounter, usually by the rules of the game system,
     * such as its health falling below a certain value, or some other situation.
     */
    EncounterStatusRemoved = 1,
};

/**
 */
typedef NS_ENUM(NSInteger, EncounterState) {
    /**
     * TODO
     */
    EncounterStateNormal = 0,
    /**
     * TODO
     */
    EncounterStateOrderUpdate = 1,
    /**
     * TODO
     */
    EncounterStateConditionUpdate = 2,
};

/**
 * Protocol for game system implementations.
 */
@protocol PRKGameSystem <NSObject>

/**
 * Returns the human-readable label for the game system.
 */
+ (NSString*)label;
/**
 * Returns the human-readable label for the game system.
 */
- (NSString*)label;
/**
 * Returns the human-readable short label for the game system.
 */
+ (NSString*)shortLabel;
/**
 * Returns the human-readable short label for the game system.
 */
- (NSString*)shortLabel;
/**
 * Returns the name for the game system. This is used as an internal identifier.
 */
+ (NSString*)name;
/**
 * Returns the name for the game system. This is used as an internal identifier.
 */
- (NSString*)name;

/**
 * Returns the condition provider for this game system.
 * @return PRKConditionProvider-conforming instance
 */
- (id<PRKConditionProvider>)conditionProvider;
/**
 * Delegate method that decides whether the specified condition should be applied to the specified
 * participant in the context of the specified event.
 * @param condition The condition to apply
 * @param participant The participant in question
 * @param event The event context
 * @return A boolean indicating whether the condition should be applied
 */
- (BOOL)shouldApplyCondition:(Effect*)condition
              forParticipant:(EncounterParticipant*)participant
                 duringEvent:(GameSystemEvent)event;

/**
 * Determines how encounter ordering is handled for this game system.
 * The NSComparisonResult values are handled as follows:
 * - NSOrderedSame There is no defined ordering for this game system.
 * - NSOrderedAscending Participants are arranged with lower order numbers coming first.
 * - NSOrderedDescending Participants are arranged with higher order numbers coming first.
 * @return An [NSComparisonResult]
 */
- (NSComparisonResult)encounterOrdering;

/**
 * An array containing the events that occur at the start of the encounter.
 * @see GameSystemEvent
 */
- (NSArray*)startOfEncounterEvents;
/**
 * An array containing the events that occur at the start of a round in the encounter.
 */
- (NSArray*)startOfRoundEvents;
/**
 * An array containing the events that occur at the start of a participant's turn.
 * @see GameSystemEvent
 */
- (NSArray*)startOfTurnEvents;
/**
 * An array containing the events that occur when a participant's health data changes.
 * @see GameSystemEvent
 */
- (NSArray*)healthChangedEvents;
/**
 * An array containing the events that occur at the end of a participant's turn.
 * @see GameSystemEvent
 */
- (NSArray*)endOfTurnEvents;
/**
 * An array containing the events that occur at the end of a round in the encounter.
 * @see GameSystemEvent
 */
- (NSArray*)endOfRoundEvents;
/**
 * An array containing the events that occur at the end of the encounter.
 * @see GameSystemEvent
 */
- (NSArray*)endOfEncounterEvents;

/**
 * Adjust the health of a participant.
 * @param participant The participant to modify
 * @param adjustment The value by which to adjust the participant's health
 */
- (void)participant:(EncounterParticipant*)participant
     adjustHealthBy:(double)adjustment;

/**
 * Determine the status of an encounter participant.
 * @param participant The participant used to determine status
 * @return The encounter status
 */
- (EncounterStatus)encounterStatusForParticipant:(EncounterParticipant*)participant;

@end
