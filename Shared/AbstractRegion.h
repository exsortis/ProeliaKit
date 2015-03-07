//
//  AbstractRegion.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/7/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface AbstractRegion : NSObject

// -- Attributes --

@property (nonatomic, copy) NSString *color;
@property (nonatomic, assign) NSInteger height;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, assign) NSInteger width;
@property (nonatomic, assign) NSInteger x;
@property (nonatomic, assign) NSInteger y;

// -- Relationships --

@property (nonatomic, copy) NSArray* conditions; // [Condition]

@end
