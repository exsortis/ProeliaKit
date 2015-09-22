//
//  AbstractMapTile.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "AbstractMapTile.h"


@implementation AbstractMapTile

- (instancetype)init {
    self = [super init];
    if(self) {
        self.data = [NSData new];
        self.scale = 1;
        self.x = 0;
        self.y = 0;
    }

    return self;
}

@end
