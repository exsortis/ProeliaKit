//
//  PreparedParticipant.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractParticipant.h"


@class PreparedEncounter;

@interface PreparedParticipant : AbstractParticipant

// -- Attributes --

// -- Relationships --

@property (nonatomic, weak) PreparedEncounter* encounter;

@end