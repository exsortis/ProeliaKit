//
//  EncounterConstants.h
//  Proelia
//
//  Created by Paul Schifferer on 1/21/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

@import Foundation;


typedef NS_ENUM(NSInteger, SLEncounterType) {
    EncounterTypeActive,
    EncounterTypePrepared,
    EncounterTypeArchived,

    EncounterTypeNone,
};

typedef NS_OPTIONS(NSInteger, SLMapOptions) {
    MapOptionBackground = (1L << 0),
    MapOptionGrid       = (1L << 1),
    MapOptionBorders    = (1L << 2),
    MapOptionConditions = (1L << 3),
    MapOptionRemoved    = (1L << 4),
};

