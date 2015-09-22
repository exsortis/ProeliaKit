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

- (nonnull instancetype)initWithEncounter:(nonnull NSString*)encounterId
NS_DESIGNATED_INITIALIZER;

// -- Attributes --

/**
 *
 */
@property (nonatomic, nonnull, copy) NSString *details;
/**
 *
 */
@property (nonatomic, assign) NSTimeInterval started;
/**
 *
 */
@property (nonatomic, assign) NSTimeInterval ended;
/**
 *
 */
@property (nonatomic, assign) NSInteger round;

// -- Relationships --

/**
 *
 */
@property (nonatomic, nonnull, copy) NSString* encounterId;
/**
 *
 */
@property (nonatomic, nullable, copy) NSString* participantId;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<NSString*>* targetIds;

@end
