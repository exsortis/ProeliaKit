//
//  PreparedMap.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractMap.h"


@class PreparedEncounter;

@interface PreparedMap : AbstractMap

// -- Attributes --

// -- Relationships --

@property (nonatomic, weak) PreparedEncounter* encounter;
@property (nonatomic, copy) NSArray* tiles; // [PreparedMapTile]

@end
