//
//  EncounterParticipant.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "EncounterParticipant.h"


@implementation EncounterParticipant

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.actualOrder = 0;
        self.status = EncounterStatusActive;
        self.targetIds = @[];
        self.conditions = @[];
    }

    return self;
}

@end
