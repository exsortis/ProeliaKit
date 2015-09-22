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
    return nil;
}

- (instancetype)initWithEncounter:(NSString *)encounterId {
    self = [super init];
    if(self) {
        self.encounterId = encounterId;
        self.details = @"";
        self.ended = 0;
        self.round = 0;
        self.targetIds = @[];
        self.started = [[NSDate new] timeIntervalSince1970];
    }

    return self;
}

@end
