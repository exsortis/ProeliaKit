//
//  EncounterRegionTemplate.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractRegion.h"


@class EncounterTemplate;
@class EffectTemplate;

/**
 * An instance of this class represents a two-dimensional area of an arbitrary size and
 * location.
 */
@interface EncounterRegionTemplate : AbstractRegion

// -- Initializers --

// -- Attributes --

// -- Relationships --

/**
 * A collection of conditions that are associated with the region. These are generally used by the game
 * system to be applied to participants that are within the region.
 */
@property (nonatomic, copy) NSArray<EffectTemplate*>* conditions;

@end
