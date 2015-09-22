//
//  EncounterGroup.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "EncounterGroup.h"


@implementation EncounterGroup

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.encounters = @[];
        self.templates = @[];
    }

    return self;
}

@end
