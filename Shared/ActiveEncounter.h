//
//  ActiveEncounter.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EncounterConstants.h"
#import "GameSystem.h"


@interface ActiveEncounter : NSObject

// -- Attributes --

@property (nonatomic, copy) NSString *category;
@property (nonatomic, assign) NSTimeInterval created;
@property (nonatomic, assign) NSInteger currentRound;
@property (nonatomic, assign) NSTimeInterval endDate;
@property (nonatomic, copy) NSString *gameSystemName;
@property (nonatomic, assign) NSTimeInterval modified;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, assign) NSInteger numberOfRounds;
@property (nonatomic, assign) NSInteger numberOfTurns;
@property (nonatomic, copy) NSString *preparedEncounterName;
@property (nonatomic, assign) NSTimeInterval startDate;
@property (nonatomic, assign) ActiveEncounterState state;
@property (nonatomic, copy) NSData *turnQueue;

// -- Relationships --

@property (nonatomic, copy) NSArray *maps; // [ActiveMap]
@property (nonatomic, copy) NSArray *participants; // [ActiveParticipant]
@property (nonatomic, copy) NSArray *regions; // [ActiveRegion]
@property (nonatomic, copy) NSArray *timeline; // [ActiveEncounterTimelineEntry]

@end
