//
//  AbstractMapLocation.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "AbstractMapLocation.h"


@implementation AbstractMapLocation

- (instancetype)init {
    self = [super init];
    if(self) {
        self.height = 1;
        self.width = 1;
        self.depth = 1;
        self.x = 0;
        self.y = 0;
        self.z = 0;
    }

    return self;
}

@end
