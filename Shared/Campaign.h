//
//  Campaign.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "NamedValueObject.h"


@class EncounterGroup;

@interface Campaign : NamedValueObject

- (nonnull instancetype)initWithName:(nonnull NSString*)name
NS_DESIGNATED_INITIALIZER;

/**
 *
 */
@property (nonatomic, nonnull, copy) NSString *gameSystemName;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterGroup*>* groups;

@end
