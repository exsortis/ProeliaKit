//
//  EncounterMapLocation.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "EncounterMapLocation.h"


@implementation EncounterMapLocation

- (instancetype)init {
    self = [super init];
    if(self) {
        self.conditions = @[];
    }

    return self;
}

@end
