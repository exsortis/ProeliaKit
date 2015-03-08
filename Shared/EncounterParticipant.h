//
//  EncounterParticipant.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractParticipant.h"
#import "GameSystem.h"


@class Encounter;

/**
 * This class serves as the base class for maps in both active and prepared encounters.
 */
@interface EncounterParticipant : AbstractParticipant

// -- Attributes --

/**
 *
 */
@property (nonatomic, assign) NSInteger actualOrder;
/**
 *
 */
@property (nonatomic, assign) EncounterStatus status;

// -- Relationships --

/**
 *
 */
@property (nonatomic, weak) Encounter *encounter;
/**
 *
 */
@property (nonatomic, copy) NSArray *targets; // [EncounterParticipant]

@end
