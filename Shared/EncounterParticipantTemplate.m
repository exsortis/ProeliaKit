//
//  EncounterParticipantTemplate.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "EncounterParticipantTemplate.h"


@implementation EncounterParticipantTemplate

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.conditions = @[];
    }

    return self;
}

@end
