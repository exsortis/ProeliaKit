//
//  Campaign.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "BaseIdObject.h"


@class EncounterGroup;

@interface Campaign : BaseIdObject

/**
 *
 */
@property (nonatomic, copy) NSString* notes;
/**
 *
 */
@property (nonatomic, copy) NSString *gameSystemName;
/**
 *
 */
@property (nonatomic, assign) BOOL local;
/**
 *
 */
@property (nonatomic, copy) NSArray<EncounterGroup*>* groups;

@end
