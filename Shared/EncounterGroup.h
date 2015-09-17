//
//  EncounterGroup.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "BaseIdObject.h"


@class Campaign;
@class Encounter;
@class EncounterTemplate;

@interface EncounterGroup : BaseIdObject

/**
 *
 */
@property (nonatomic, copy) NSArray<Encounter*>* encounters;
/**
 *
 */
@property (nonatomic, copy) NSArray<EncounterTemplate*>* templates;

@end
