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
@property (nonatomic, copy) NSString *encounterTemplateName;
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
@property (nonatomic, copy) NSData *turnQueue;

// -- Relationships --

/**
 */
@property (nonatomic, copy) NSString* templateId;

@end
