//
//  EffectTemplate.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/21/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "BaseValueObject.h"
#import "EffectConstants.h"


/**
 * An instance of this class represents an effect that is or can be applied to something
 * in an encounter.
 */
@interface EffectTemplate : BaseValueObject

// -- Initializers --

// -- Attributes --

/**
 * Adjustments that are performed to the participant when the condition is applied.
 */
@property (nonatomic, nonnull, copy) NSString* adjustment;
/**
 * A boolean flag indicating that the condition was created by the game master, instead of supplied as part of the
 * game system's package.
 */
@property (nonatomic, assign) BOOL custom;
/**
 * The end type of the condition.
 */
@property (nonatomic, assign) EffectEnd endType;
/**
 * A value associated with the 'endType' of the condition that helps the encounter manager determine if the end type
 * requirement has been satisfied.
 */
@property (nonatomic, nonnull, copy) NSString *endValue;
/**
 * A label for the condition that is used for display in tooltips and other UI elements.
 */
@property (nonatomic, nonnull, copy) NSString *label;
/**
 * The source of the condition.
 */
@property (nonatomic, assign) EffectSource source;
/**
 * The type of the condition.
 */
@property (nonatomic, assign) EffectType type;
/**
 * A set of values that indicate who is affected by the condition.
 */
@property (nonatomic, assign) EffectTargets affects;

// -- Relationships --

@end
