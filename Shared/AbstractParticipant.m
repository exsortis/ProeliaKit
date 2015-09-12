//
//  AbstractParticipant.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "AbstractParticipant.h"


@implementation AbstractParticipant

- (instancetype)init {
    self = [super init];
    if(self) {
        self.notes = @"";
        self.conditions = @[];
    }

    return self;
}

@end
