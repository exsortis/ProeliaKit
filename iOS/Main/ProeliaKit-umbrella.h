//
//  ProeliaKit-umbrella.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/1/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>


//! Project version number for ProeliaKit.
FOUNDATION_EXPORT double ProeliaKitVersionNumber;

//! Project version string for ProeliaKit.
FOUNDATION_EXPORT const unsigned char ProeliaKitVersionString[];

// -- Constants --

#import "EffectConstants.h"
#import "EncounterConstants.h"
#import "MapConstants.h"
#import "ParticipantConstants.h"

// -- Protocols --

#import "ConditionProvider.h"

// -- Value objects --

#import "Campaign.h"
#import "Effect.h"
#import "EffectTemplate.h"
#import "Encounter.h"
#import "EncounterGroup.h"
#import "EncounterMap.h"
#import "EncounterMapLocation.h"
#import "EncounterMapTile.h"
#import "EncounterMapLocationTemplate.h"
#import "EncounterMapTemplate.h"
#import "EncounterMapTileTemplate.h"
#import "EncounterParticipant.h"
#import "EncounterParticipantTemplate.h"
#import "EncounterRegion.h"
#import "EncounterRegionTemplate.h"
#import "EncounterTemplate.h"
#import "EncounterTimelineEntry.h"
