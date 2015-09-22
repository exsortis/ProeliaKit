//
//  AbstractParticipant.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "AbstractParticipant.h"


@implementation AbstractParticipant

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.marker = @"";
        self.healthData = [@"{}" dataUsingEncoding:NSUTF8StringEncoding];
        self.color = @"000000";
        self.size = 1;
        self.order = 0;
        self.type = ParticipantTypePC;
        self.tag = @"";
    }

    return self;
}

@end
