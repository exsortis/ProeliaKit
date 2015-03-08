//
//  EncounterConstants.h
//  Proelia
//
//  Created by Paul Schifferer on 1/21/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

@import Foundation;


/**
 * Option values used in an encounter's map flags property.
 */
typedef NS_OPTIONS(NSInteger, EncounterMapOptions) {
    /**
     * The map should display a background image.
     */
    EncounterMapOptionBackground = (1L << 0),
    /**
     * The map should display grid lines.
     */
    EncounterMapOptionGrid       = (1L << 1),
    /**
     * The map should display borders around participant tokens.
     */
    EncounterMapOptionBorders    = (1L << 2),
    /**
     * The map should display condition icons for participants and regions.
     */
    EncounterMapOptionConditions = (1L << 3),
    /**
     * The map should display participants who have been "removed" from the encounter.
     */
    EncounterMapOptionRemoved    = (1L << 4),
};

