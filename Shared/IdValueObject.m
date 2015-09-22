//
//  IdValueObject.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "IdValueObject.h"


@implementation IdValueObject

- (instancetype)init {
    self = [super init];
    if(self) {
        self.uuid = [[NSUUID UUID] UUIDString];
    }

    return self;
}

@end
