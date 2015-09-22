//
//  EncounterTemplate.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractEncounter.h"


@class EncounterMapTemplate;
@class EncounterParticipantTemplate;
@class EncounterRegionTemplate;

/**
 * An instance of this class represents an encounter template that can be converted to a 
 * runnable encounter. This object type is used to store encounter information for planning.
 */
@interface EncounterTemplate : AbstractEncounter

// -- Initializers --

// -- Attributes --

/**
 * Indicates whether the user has marked this encounter template as a favorite.
 */
@property (nonatomic, assign) BOOL favorite;

// -- Relationships --

/**
 * A collection of maps associated with this encounter.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterMapTemplate*>* maps;

/**
 * A collection of participants associated with this encounter.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterParticipantTemplate*>* participants;

/**
 * A collection of regions associated with this encounter.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterRegionTemplate*>* regions;

@end
