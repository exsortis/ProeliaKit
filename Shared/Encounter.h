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


/**
 * An instance of this class represents an encounter created from a template that is being run.
 */
@interface Encounter : NSObject

// -- Attributes --

/**
 *
 */
@property (nonatomic, copy) NSString *category;
/**
 *
 */
@property (nonatomic, assign) NSTimeInterval created;
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
@property (nonatomic, copy) NSString *gameSystemName;
/**
 *
 */
@property (nonatomic, assign) NSTimeInterval modified;
/**
 *
 */
@property (nonatomic, copy) NSString *name;
/**
 *
 */
@property (nonatomic, copy) NSString *notes;
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
 *
 */
@property (nonatomic, copy) NSArray *maps; // [EncounterMap]
/**
 *
 */
@property (nonatomic, copy) NSArray *participants; // [EncounterParticipant]
/**
 *
 */
@property (nonatomic, copy) NSArray *regions; // [EncounterRegion]
/**
 *
 */
@property (nonatomic, copy) NSArray *timeline; // [EncounterTimelineEntry]

@end
