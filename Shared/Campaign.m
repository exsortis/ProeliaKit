//
//  Campaign.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "Campaign.h"


@implementation Campaign

- (instancetype)init {
    self = [super init];
    if(self) {
        self.notes = @"";
        self.gameSystemName = @"none";
        self.local = YES;
        self.groups = @[];
    }

    return self;
}

@end
