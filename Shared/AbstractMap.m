//
//  AbstractMap.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "AbstractMap.h"


@implementation AbstractMap

- (instancetype)init {
    self = [super init];
    if(self) {
        self.notes = @"";
        self.locations = @[];
        self.scale = 1;
    }

    return self;
}

@end
