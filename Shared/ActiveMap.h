//
//  ActiveMap.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractMap.h"


@class ActiveEncounter;

@interface ActiveMap : AbstractMap

// -- Attributes --

// -- Relationships --

@property (nonatomic, weak) ActiveEncounter* encounter;
@property (nonatomic, copy) NSArray* tiles; // [ActiveMapTile]

@end
