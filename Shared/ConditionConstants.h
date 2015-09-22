//
//  ConditionConstants.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/21/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 */
extern float const ConditionImageSize;

/**
 * The type of condition.
 */
typedef NS_ENUM(NSInteger, ConditionType) {
    /**
     * A condition that is of type 'once' is applied one time, and then automatically removed from the thing to which
     * it is attached.
     */
    ConditionTypeOnce,
    /**
     * A condition of type 'ongoing' is applied each time (by round, turn, etc.) until the end type is satisfied.
     */
    ConditionTypeOngoing,
    /**
     * A 'custom' condition is maintained until the game master removes it manually.
     */
    ConditionTypeCustom,
};

/**
 * The requirement that must be satisfied in order for the condition to be removed by the encounter manager.
 */
typedef NS_ENUM(NSInteger, ConditionEnd) {
    /**
     * A saving throw (handled outside of the encounter manager, which success is specified by the user) must
     * succeed in order to remove this condition. The encounter manager will issue a reminder at the appropriate time
     * for this requirement.
     */
    ConditionEndSave,
    /**
     * The condition will end at the start of the specified participant's turn. The participant's name or ID is specified
     * in the 'endValue' property. If no value is specified there, the participant to whom the condition is attached is
     * assumed.
     */
    ConditionEndStartOfTurn,
    /**
     * The condition will end at the end of the specified participant's turn. The participant's name or ID is specified
     * in the 'endValue' property. If no value is specified there, the participant to whom the condition is attached is
     * assumed.
     */
    ConditionEndEndOfTurn,
    /**
     * The condition will last until the encounter is ended, or it is manually removed.
     */
    ConditionEndEndOfEncounter,
    /**
     * The condition is applied by a region, and affects any participants within the region's bounds. The condition only
     * ends when the participant moves outside the region's bounds.
     */
    ConditionEndRegion,
    /**
     * The condition last for a fixed number of rounds or turns, as specified in the 'endValue' property. The format of
     * the value is "#r" for a number of rounds, "#t" for a number of turns. A numeric value without a suffix is assumed
     * to be 'rounds'.
     */
    ConditionEndFixed,
};

/**
 * The source of the condition.
 */
typedef NS_ENUM(NSInteger, ConditionSource) {
    /**
     * The condition is attached to a participant, and affects said participant.
     */
    ConditionSourceSelf,
    /**
     * The condition is attached to a region, and affects some participants in the region's bounds (see ConditionAffects
     * for details).
     */
    ConditionSourceRegion,
    /**
     * The condition is applied by the game system.
     */
    ConditionSourceGameSystem,
};

/**
 * A set of options indicating what types of things are affected by the condition. This is useful for when a condition
 * is attached to a region, and a mix of participants are within the region's bounds, allowing the encounter manager to
 * intelligently determine who should be affected by the condition.
 */
typedef NS_OPTIONS(NSInteger, ConditionAffects) {
    /**
     * The condition affects no one.
     */
    ConditionAffectsNone = 0,
    /**
     * The condition affects only participants of type PC.
     */
    ConditionAffectsPC = 1 << 1,
    /**
     * The condition affects only participants of type Adversary.
     */
    ConditionAffectsAdversary = 1 << 2,
    /**
     * The condition affects only participants of type Neutral.
     */
    ConditionAffectsNeutral = 1 << 3,
    /**
     * The condition affects only participants of type Object.
     */
    ConditionAffectsObject = 1 << 4,
    /**
     * A convenience grouping of all participant types except Object.
     */
    ConditionAffectsAnimate = (ConditionAffectsPC | ConditionAffectsAdversary | ConditionAffectsNeutral),
    /**
     * A convenience grouping of all 'object' participant types.
     */
    ConditionAffectsInanimate = (ConditionAffectsObject),
    /**
     * A convenience grouping of all participant types.
     */
    ConditionAffectsAll = (ConditionAffectsPC | ConditionAffectsAdversary | ConditionAffectsNeutral | ConditionAffectsObject),
};


