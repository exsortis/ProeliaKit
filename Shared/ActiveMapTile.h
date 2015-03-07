//
//  ActiveMapTile.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractMapTile.h"


@class ActiveMap;

@interface ActiveMapTile : AbstractMapTile

// -- Attributes --

// -- Relationships --

@property (nonatomic, weak) ActiveMap* map;

@end
