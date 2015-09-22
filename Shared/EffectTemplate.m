//
//  EffectTemplate.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/21/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "EffectTemplate.h"


@implementation EffectTemplate

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.adjustment = @"0";
        self.custom = NO;
        self.endType = EffectEndSave;
        self.endValue = @"";
        self.label = @"";
        self.source = EffectSourceSelf;
        self.type = EffectTypeOngoing;
        self.affects = EffectTargetsAnimate;
    }

    return self;
}

@end
