//
//  AbstractRegion.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/7/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "AbstractRegion.h"


@implementation AbstractRegion

- (instancetype)init {
    self = [super init];
    if(self) {
        self.notes = @"";
        self.conditions = @[];
    }

    return self;
}

@end
