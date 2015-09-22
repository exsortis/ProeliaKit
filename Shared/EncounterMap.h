//
//  EncounterMap.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractMap.h"


@class Encounter;
@class EncounterMapTile;
@class EncounterMapLocation;
@class Effect;

/**
 * An instance of this class represents a map associated with an encounter.
 */
@interface EncounterMap : AbstractMap

// -- Initializers --

// -- Attributes --

// -- Relationships --

/**
 * A collection of tiles that are part of this map.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterMapTile*>* tiles;

/**
 * A collection of location objects that are part of the map.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterMapLocation*>* locations;

/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<Effect*>* conditions;

@end
