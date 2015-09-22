//
//  Encounter.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "Encounter.h"


@implementation Encounter

- (instancetype)initWithName:(NSString *)name
                  templateId:(NSString *)templateId {
    self = [super initWithName:name];
    if(self) {
        self.templateId = templateId;
        self.turnQueue = [@"[]" dataUsingEncoding:NSUTF8StringEncoding];
        self.state = EncounterStateNormal;
        self.maps = @[];
        self.participants = @[];
        self.regions = @[];
        self.timeline = @[];
    }

    return self;
}

@end
