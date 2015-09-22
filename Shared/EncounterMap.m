//
//  EncounterMap.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "EncounterMap.h"


@implementation EncounterMap

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.tiles = @[];
        self.locations = @[];
    }

    return self;
}

@end
