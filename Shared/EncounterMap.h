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

/**
 * An instance of this class represents a map associated with an encounter.
 */
@interface EncounterMap : AbstractMap

// -- Attributes --

// -- Relationships --

/**
 * A collection of tiles that are part of this map.
 */
@property (nonatomic, copy) NSArray<EncounterMapTile*>* tiles;

@end
