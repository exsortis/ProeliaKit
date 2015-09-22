//
//  EncounterMapLocation.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AbstractMapLocation.h"


@class Condition;

/**
 * An instance of this class represents a ...
 */
@interface EncounterMapLocation : AbstractMapLocation

// -- Attributes --

// -- Relationships --

/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<Condition*>* conditions;

@end
