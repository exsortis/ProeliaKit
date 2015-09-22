//
//  EncounterTimelineEntry.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "EncounterTimelineEntry.h"


@implementation EncounterTimelineEntry

- (instancetype)init {
    self = [super init];
    if(self) {
        self.details = @"";
        self.round = 0;
        self.participantIds = @[];
    }

    return self;
}

@end
