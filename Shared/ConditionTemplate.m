//
//  ConditionTemplate.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/21/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "ConditionTemplate.h"


@implementation ConditionTemplate

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.adjustment = @"0";
        self.custom = NO;
        self.endType = ConditionEndSave;
        self.endValue = @"";
        self.label = @"";
        self.source = ConditionSourceSelf;
        self.type = ConditionTypeOngoing;
        self.affects = ConditionAffectsAnimate;
    }

    return self;
}

@end
