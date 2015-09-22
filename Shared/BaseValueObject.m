//
//  BaseValueObject.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/22/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "BaseValueObject.h"


@implementation BaseValueObject

- (instancetype)initWithName:(NSString *)name {
    self = [super initWithName:name];
    if(self) {
        self.notes = @"";
    }

    return self;
}

@end
