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
 * An instance of this class represents an encounter template that can be activated and run.
 */
@interface EncounterTemplate : AbstractEncounter

// -- Attributes --

/**
 *
 */
@property (nonatomic, assign) BOOL favorite;

// -- Relationships --

/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterMapTemplate*>* maps;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterParticipantTemplate*>* participants;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterRegionTemplate*>* regions;

@end
