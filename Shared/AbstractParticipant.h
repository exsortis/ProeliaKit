//
//  AbstractParticipant.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ParticipantConstants.h"


@interface AbstractParticipant : NSObject

// -- Attributes --

@property (nonatomic, copy) NSString *color;
@property (nonatomic, copy) NSData *healthData;
@property (nonatomic, copy) NSString *externalKey;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *marker;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, assign) NSInteger order;
@property (nonatomic, assign) NSInteger size;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *tag;
@property (nonatomic, assign) ParticipantType type;
@property (nonatomic, assign) NSInteger x;
@property (nonatomic, assign) NSInteger y;
@property (nonatomic, assign) NSInteger z;

// -- Relationships --

@property (nonatomic, copy) NSArray* conditions; // [Condition]

@end
