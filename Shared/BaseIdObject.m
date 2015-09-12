//
//  BaseIdObject.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "BaseIdObject.h"


@implementation BaseIdObject

- (instancetype)init {
    self = [super init];
    if(self) {
        self.name = @"";
        self.uuid = [[NSUUID UUID] UUIDString];
    }

    return self;
}

@end
