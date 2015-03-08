//
//  EncounterMapTile.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractMapTile.h"


@class EncounterMap;

/**
 * This class serves as the base class for maps in both active and prepared encounters.
 */
@interface EncounterMapTile : AbstractMapTile

// -- Attributes --

// -- Relationships --

/**
 *
 */
@property (nonatomic, weak) EncounterMap* map;

@end
