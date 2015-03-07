//
//  PreparedEncounter.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PreparedEncounter : NSObject

// -- Attributes --

@property (nonatomic, copy) NSString *category;
@property (nonatomic, assign) NSTimeInterval created;
@property (nonatomic, assign) BOOL favorite;
@property (nonatomic, copy) NSString *gameSystemName;
@property (nonatomic, assign) NSTimeInterval modified;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *notes;

// -- Relationships --

@property (nonatomic, copy) NSArray *maps; // [PreparedMap]
@property (nonatomic, copy) NSArray *participants; // [PreparedParticipant]
@property (nonatomic, copy) NSArray *regions; // [PreparedRegion]

@end
