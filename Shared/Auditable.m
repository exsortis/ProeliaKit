//
//  Auditable.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "Auditable.h"


@implementation Auditable

- (instancetype)init {
    self = [super init];
    if(self) {
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        self.created = now;
        self.modified = now;
    }

    return self;
}

@end
