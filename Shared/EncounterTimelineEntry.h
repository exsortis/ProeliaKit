//
//  EncounterTimelineEntry.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "IdValueObject.h"


/**
 * An instance of this class represents a log entry in the associated encounter.
 */
@interface EncounterTimelineEntry : IdValueObject

// -- Initializers --

// -- Attributes --

/**
 * A string that stores arbitrary information about the log entry.
 */
@property (nonatomic, nonnull, copy) NSString *details;

/**
 * Stores the round in which the recorded activity occurred.
 */
@property (nonatomic, assign) NSInteger round;

// -- Relationships --

/**
 * A collection of IDs of participants with which this event is associated.
 */
@property (nonatomic, nonnull, copy) NSArray<NSString*>* participantIds;

@end
