//
//  Effect.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "Effect.h"


@implementation Effect

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.adjustment = @"";
        self.applied = NO;
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
