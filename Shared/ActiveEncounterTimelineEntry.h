//
//  ActiveEncounterTimelineEntry.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>


@class ActiveEncounter;
@class ActiveParticipant;

@interface ActiveEncounterTimelineEntry : NSObject

// -- Attributes --

@property (nonatomic, copy) NSString *details;
@property (nonatomic, assign) NSTimeInterval ended;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, assign) NSInteger round;
@property (nonatomic, assign) NSTimeInterval started;

// -- Relationships --

@property (nonatomic, weak) ActiveEncounter* encounter;
@property (nonatomic, weak) ActiveParticipant* participant;
@property (nonatomic, copy) NSArray* targets; // [ActiveParticipant]

@end
