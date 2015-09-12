//
//  EncounterMap.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "EncounterMap.h"


@implementation EncounterMap

- (instancetype)init {
    self = [super init];
    if(self) {
        self.notes = @"";
        self.tiles = @[];
    }

    return self;
}

@end
