/*
 *  ConditionConstants.h
 *  EncounterTracker
 *
 *  Created by Paul Schifferer on 11/27/10.
 *  Copyright 2010 Pilgrimage Software. All rights reserved.
 *
 */

@import Foundation;


#define CONDITION_IMAGE_SIZE            (16.0f)

typedef NS_ENUM(NSInteger, ConditionType) {
    ConditionTypeNormal,
    ConditionTypeOngoing,
    ConditionTypeCustom,
};

typedef NS_ENUM(NSInteger, ConditionEnd) {
    ConditionEndSave,
    ConditionEndStartOfTurn,
    ConditionEndEndOfTurn,
    ConditionEndEndOfEncounter,
    ConditionEndRegion,
    ConditionEndFixed,
};

typedef NS_ENUM(NSInteger, ConditionSource) {
    ConditionSourceSelf,
    ConditionSourceRegion,
    ConditionSourceGameSystem,
};
