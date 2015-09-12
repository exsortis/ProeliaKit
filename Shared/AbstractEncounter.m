//
//  AbstractEncounter.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "AbstractEncounter.h"


@implementation AbstractEncounter

- (instancetype)init {
    self = [super init];
    if(self) {
        self.notes = @"";
        self.maps = @[];
        self.participants = @[];
        self.regions = @[];
        self.timeline = @[];
    }

    return self;
}

@end
