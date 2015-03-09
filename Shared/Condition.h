//
//  Condition.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;


/**
 */
#define CONDITION_IMAGE_SIZE (16.0f)

/**
 */
typedef NS_ENUM(NSInteger, ConditionType) {
    /**
*/
    ConditionTypeNormal,
    /**
*/
    ConditionTypeOngoing,
    /**
*/
    ConditionTypeCustom,
};

/**
 */
typedef NS_ENUM(NSInteger, ConditionEnd) {
    /**
*/
    ConditionEndSave,
    /**
*/
    ConditionEndStartOfTurn,
    /**
*/
    ConditionEndEndOfTurn,
    /**
*/
    ConditionEndEndOfEncounter,
    /**
*/
    ConditionEndRegion,
    /**
*/
    ConditionEndFixed,
};

/**
 */
typedef NS_ENUM(NSInteger, ConditionSource) {
    /**
*/
    ConditionSourceSelf,
    /**
*/
    ConditionSourceRegion,
    /**
*/
    ConditionSourceGameSystem,
};


/**
 * An instance of this class represents an effect that is or can be applied to another object
 * in an encounter.
 */
@interface Condition : NSObject

// -- Attributes --

/**
 *
 */
@property (nonatomic, assign) float adjustment;
/**
 *
 */
@property (nonatomic, assign) BOOL applied;
/**
 *
 */
@property (nonatomic, assign) BOOL custom;
/**
 *
 */
@property (nonatomic, assign) ConditionEnd endType;
/**
 *
 */
@property (nonatomic, copy) NSString *endValue;
/**
 *
 */
@property (nonatomic, copy) NSString *label;
/**
 *
 */
@property (nonatomic, copy) NSString *name;
/**
 *
 */
@property (nonatomic, copy) NSString *notes;
/**
 *
 */
@property (nonatomic, assign) ConditionSource source;
/**
 *
 */
@property (nonatomic, assign) ConditionType type;

// -- Relationships --

@end
