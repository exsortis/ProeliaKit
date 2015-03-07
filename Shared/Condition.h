//
//  Condition.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConditionConstants.h"


@interface Condition : NSObject

// -- Attributes --

@property (nonatomic, assign) float adjustment;
@property (nonatomic, assign) BOOL applied;
@property (nonatomic, assign) BOOL custom;
@property (nonatomic, assign) ConditionEnd endType;
@property (nonatomic, copy) NSString *endValue;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, assign) ConditionSource source;
@property (nonatomic, assign) ConditionType type;

// -- Relationships --

@end
