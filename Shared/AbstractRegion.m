//
//  AbstractRegion.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/7/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "AbstractRegion.h"


@implementation AbstractRegion

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.color = @"000000";
        self.width = 1;
        self.height = 1;
        self.depth = 1;
        self.x = 0;
        self.y = 0;
        self.z = 0;
    }

    return self;
}

@end
