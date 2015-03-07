//
//  ActiveParticipant.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractParticipant.h"
#import "GameSystem.h"


@class ActiveEncounter;

@interface ActiveParticipant : AbstractParticipant

// -- Attributes --

@property (nonatomic, assign) NSInteger actualOrder;
@property (nonatomic, assign) ActiveEncounterStatus status;

// -- Relationships --

@property (nonatomic, weak) ActiveEncounter *encounter;
@property (nonatomic, copy) NSArray *targets; // [ActiveParticipant]

@end
