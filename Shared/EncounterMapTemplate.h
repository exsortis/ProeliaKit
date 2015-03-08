//
//  EncounterMapTemplate.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractMap.h"


@class EncounterTemplate;

/**
 * An instance of this class represents a map for an encounter template.
 */
@interface EncounterMapTemplate : AbstractMap

// -- Attributes --

// -- Relationships --

/**
 * The encounter to which this map belongs.
 */
@property (nonatomic, weak) EncounterTemplate* encounterTemplate;
/**
 * A collection of tiles that are part of the map.
 * @see EncounterMapTileTemplate
 */
@property (nonatomic, copy) NSArray* tiles; // [EncounterMapTileTemplate]

@end
