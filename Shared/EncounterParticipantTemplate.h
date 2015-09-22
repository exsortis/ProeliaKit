//
//  EncounterParticipantTemplate.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractParticipant.h"


@class EncounterTemplate;
@class ConditionTemplate;

/**
 * An instance of this class represents a participant that is part of an encounter template.
 */
@interface EncounterParticipantTemplate : AbstractParticipant

// -- Attributes --

// -- Relationships --

/**
 * A collection of conditions that are directly applied to the participant. These do not include conditions that may be
 * applied by the game system due to rules, or that may be inherited by the participant from being inside of a region that
 * has conditions.
 */
@property (nonatomic, nonnull, copy) NSArray<ConditionTemplate*>* conditions;

@end
