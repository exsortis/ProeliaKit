//
//  EncounterMapTemplate.h
//
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractMap.h"


@class EncounterTemplate;
@class EncounterMapTileTemplate;
@class EncounterMapLocationTemplate;
@class ConditionTemplate;

/**
 * An instance of this class represents a map for an encounter template.
 */
@interface EncounterMapTemplate : AbstractMap

// -- Attributes --

// -- Relationships --

/**
 * A collection of tiles that are part of the map.
 * @see EncounterMapTileTemplate
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterMapTileTemplate*>* tiles;
/**
 * A collection of location objects that are part of the map.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterMapLocationTemplate*>* locations;


@end
