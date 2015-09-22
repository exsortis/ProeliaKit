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
 * An instance of this class represents a participant that is part of an encounter.
 */
@interface EncounterParticipant : AbstractParticipant

// -- Initializers --

// -- Attributes --

/**
 * The actual position of the participant in the initiative order. This is an internal tracking
 * value that a UI can use to know where to put the participant when arranging them visually.
 */
@property (nonatomic, assign) NSInteger actualOrder;

/**
 * The status of the participant in the encounter. This value helps the encounter manager know
 * whether the participant's turn is "skipped".
 */
@property (nonatomic, assign) EncounterStatus status;

// -- Relationships --

/**
 * A collection of conditions that are directly applied to the participant. These do not include conditions that may be
 * applied by the game system due to rules, or that may be inherited by the participant from being inside of a region that
 * has conditions.
 */
@property (nonatomic, nonnull, copy) NSArray<Effect*>* conditions;

/**
 * A collection of participant IDs that are being targeted by this participant.
 */
@property (nonatomic, nonnull, copy) NSArray<NSString*>* targetIds;

@end
