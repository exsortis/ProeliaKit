//
//  EncounterRegion.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractRegion.h"


@class Encounter;
@class Condition;

/**
 * This class serves as the base class for maps in both active and prepared encounters.
 */
@interface EncounterRegion : AbstractRegion

// -- Attributes --

// -- Relationships --

/**
 * A collection of conditions that are associated with the region. These are generally used by the game
 * system to be applied to participants that are within the region.
 */
@property (nonatomic, copy) NSArray<Condition*>* conditions;

@end
