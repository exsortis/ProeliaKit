//
//  EncounterTimelineEntry.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;


@class Encounter;
@class EncounterParticipant;

/**
 * An instance of this class represents a log entry in the associated encounter.
 */
@interface EncounterTimelineEntry : NSObject

// -- Attributes --

/**
 *
 */
@property (nonatomic, copy) NSString *details;
/**
 *
 */
@property (nonatomic, assign) NSTimeInterval ended;
/**
 *
 */
@property (nonatomic, copy) NSString *notes;
/**
 *
 */
@property (nonatomic, assign) NSInteger round;
/**
 *
 */
@property (nonatomic, assign) NSTimeInterval started;

// -- Relationships --

/**
 *
 */
@property (nonatomic, weak) Encounter* encounter;
/**
 *
 */
@property (nonatomic, weak) EncounterParticipant* participant;
/**
 *
 */
@property (nonatomic, copy) NSArray* targets; // [EncounterParticipant]

@end
