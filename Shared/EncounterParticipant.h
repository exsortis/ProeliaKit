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
@class EncounterParticipant;

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
 * A collection of conditions that are directly applied to the participant. These do not include conditions that may be
 * applied by the game system due to rules, or that may be inherited by the participant from being inside of a region that
 * has conditions.
 */
@property (nonatomic, nonnull, copy) NSArray<Condition*>* conditions;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<NSString*>* targetIds;

@end
