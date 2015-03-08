//
//  EncounterMapTileTemplate.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractMapTile.h"


@class EncounterMapTemplate;

/**
 * An instance of this classes represents a tile that is positioned on the encounter's map.
 */
@interface EncounterMapTileTemplate : AbstractMapTile

// -- Attributes --

// -- Relationships --

/**
 * The map to which this tile belongs.
 */
@property (nonatomic, weak) EncounterMapTemplate* mapTemplate;

@end
