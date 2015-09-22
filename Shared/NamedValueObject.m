//
//  NamedValueObject.m
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/17/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "NamedValueObject.h"


@implementation NamedValueObject

- (instancetype)initWithName:(NSString*)name {
    self = [super init];
    if(self) {
        self.name = name;
        self.notes = @"";
    }

    return self;
}

@end
