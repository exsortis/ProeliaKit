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
 * An instance of this class represents an encounter created from a template that is being run.
 */
@interface Encounter : AbstractEncounter

// -- Initializers --

- (nonnull instancetype)initWithName:(nonnull NSString*)name
                          templateId:(nonnull NSString*)templateId
NS_DESIGNATED_INITIALIZER;

// -- Attributes --

/**
 *
 */
@property (nonatomic, assign) NSInteger currentRound;
/**
 *
 */
@property (nonatomic, assign) NSTimeInterval endDate;
/**
 *
 */
@property (nonatomic, assign) NSInteger numberOfRounds;
/**
 *
 */
@property (nonatomic, assign) NSInteger numberOfTurns;
/**
 *
 */
@property (nonatomic, assign) NSTimeInterval startDate;
/**
 *
 */
@property (nonatomic, assign) EncounterState state;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSData *turnQueue;

// -- Relationships --

/**
 */
@property (nonatomic, nonnull, copy) NSString* templateId;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterMap*>* maps;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterParticipant*>* participants;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterRegion*>* regions;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterTimelineEntry*>* timeline;

@end
