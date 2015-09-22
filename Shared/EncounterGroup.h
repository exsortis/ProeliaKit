//
//  EncounterGroup.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "NamedValueObject.h"


@class Campaign;
@class Encounter;
@class EncounterTemplate;

@interface EncounterGroup : NamedValueObject

/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<Encounter*>* encounters;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterTemplate*>* templates;

@end
