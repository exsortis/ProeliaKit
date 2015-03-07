//
//  ActiveRegion.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractRegion.h"


@class ActiveEncounter;

@interface ActiveRegion : AbstractRegion

// -- Attributes --

// -- Relationships --

@property (nonatomic, weak) ActiveEncounter* encounter;

@end
