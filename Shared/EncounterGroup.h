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

@interface EncounterGroup : BaseIdObject

/**
 *
 */
@property (nonatomic, copy) NSArray<Encounter*>* encounters;

@end
