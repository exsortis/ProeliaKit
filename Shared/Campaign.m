//
//  Campaign.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "Campaign.h"


@implementation Campaign

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.gameSystemName = @"none";
        self.groups = @[];
    }

    return self;
}

@end
