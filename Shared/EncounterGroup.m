//
//  EncounterGroup.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "EncounterGroup.h"


@implementation EncounterGroup

- (instancetype)init {
    self = [super init];
    if(self) {
        self.encounters = @[];
    }

    return self;
}

@end
