//
//  Campaign.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "BaseValueObject.h"


@class EncounterGroup;

@interface Campaign : BaseValueObject

// -- Initializers --

// -- Attributes --

/**
 * Stores the identifier of the game system used for this campaign.
 */
@property (nonatomic, nonnull, copy) NSString *gameSystemName;

/**
 * A collection of encounter groups belonging to the campaign.
 * A campaign has at least one encounter group, the "default" group, where un-grouped encounters
 * are placed.
 */
@property (nonatomic, nonnull, copy) NSArray<EncounterGroup*>* groups;

// -- Relationships --

@end
