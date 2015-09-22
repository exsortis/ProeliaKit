//
//  Encounter.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "EncounterConstants.h"
#import "GameSystem.h"
#import "AbstractEncounter.h"


@class EncounterMap;
@class EncounterParticipant;
@class EncounterRegion;
@class EncounterTimelineEntry;

/**
 * An instance of this class represents an encounter created from a template.
 */
@interface Encounter : AbstractEncounter

// -- Initializers --

/**
 * Designated initializer. Initializes the encounter instance with a name and the ID of the
 * template which is used as its source.
 */
- (nonnull instancetype)initWithName:(nonnull NSString*)name
                          templateId:(nonnull NSString*)templateId
NS_DESIGNATED_INITIALIZER;

// -- Attributes --

/**
 *
 */
@property (nonatomic, assign) NSTimeInterval startDate;

/**
 * The date when the encounter ended.
 */
@property (nonatomic, assign) NSTimeInterval endDate;

/**
 * Stores the current round of the encounter. A round is a sequence of turns taken in order (as
 * determined by the game system), where each participant has a least one opportunity to act.
 */
@property (nonatomic, assign) NSInteger currentRound;

/**
 * The number of rounds that have transpired over the course of this encounter since it started.
 * This value is incremented when the last participant in the encounter's sequence has acted, and 
 * the next turn would end up at the top of the order.
 */
@property (nonatomic, assign) NSInteger numberOfRounds;

/**
 * The number of turns (an act by a participant) that have transpired over the course of the
 * encounter.
 */
@property (nonatomic, assign) NSInteger numberOfTurns;

/**
 * The current state of the encounter. The encounter may be considered in a 'preparatory' mode, i.e.,
 * it hasn't yet started; 'running'; 'ended', i.e., the encounter has 'run' at least once but is
 * not now considered 'running'.
 */
@property (nonatomic, assign) EncounterState state;

/**
 * A data blog that contains the sequence information for the initiative order. This is generally
 * managed by the encounter manager in conjunction with the game system.
 */
@property (nonatomic, nonnull, copy) NSData *turnQueue;

// -- Relationships --

/**
 * The ID of the encounter template from which this encounter was created.
 */
@property (nonatomic, nonnull, copy) NSString* templateId;

/**
 * A collection of maps that may be displayed for the encounter.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterMap*>* maps;

/**
 * A collection of participants that are in the encounter.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterParticipant*>* participants;

/**
 * A collection of regions that are part of the encounter.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterRegion*>* regions;

/**
 * A collection of events, i.e., a log, that have occurred over the course of the encounter.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterTimelineEntry*>* timeline;

@end
