//
//  AbstractMap.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import "AbstractMap.h"


@implementation AbstractMap

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.gridLineColor = @"000000";
        self.scale = 1;
    }

    return self;
}

@end
