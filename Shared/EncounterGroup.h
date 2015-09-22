//
//  EncounterGroup.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "BaseValueObject.h"


@class Campaign;
@class Encounter;
@class EncounterTemplate;

/**
 * A collection of encounters and encounter templates.
 */
@interface EncounterGroup : BaseValueObject

// -- Initializers --

// -- Attributes --

/**
 * A collection of encounters in the group.
 */
@property (nonatomic, nonnull, copy) NSArray<Encounter*>* encounters;

/**
 * A collection of encounter templates in the group.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterTemplate*>* templates;

// -- Relationships --

@end
