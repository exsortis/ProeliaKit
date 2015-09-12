//
//  AbstractEncounter.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "EncounterConstants.h"
#import "BaseIdObject.h"


@class EncounterMap;
@class EncounterParticipant;
@class EncounterRegion;
@class EncounterTimelineEntry;

@interface AbstractEncounter : BaseIdObject

// -- Attributes --

/**
 *
 */
@property (nonatomic, copy) NSString *notes;

// -- Relationships --

/**
 *
 */
@property (nonatomic, copy) NSArray<EncounterMap*>* maps;
/**
 *
 */
@property (nonatomic, copy) NSArray<EncounterParticipant*>* participants;
/**
 *
 */
@property (nonatomic, copy) NSArray<EncounterRegion*>* regions;
/**
 *
 */
@property (nonatomic, copy) NSArray<EncounterTimelineEntry*>* timeline;

@end
