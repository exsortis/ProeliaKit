//
//  AbstractParticipant.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "BaseIdObject.h"


@class Condition;

/**
 * Type values for a participant.
 */
typedef NS_ENUM(NSInteger, ParticipantType) {
    /**
* The participant is a player character, generally controlled by a player.
*/
    ParticipantTypePC,
    /**
* The participant is an adversary, generally controlled by the game master.
*/
    ParticipantTypeAdversary,
    /**
* The participant is an object, such as a trap, prop, or other (usually) neutral thing that is a
* significant part of the encounter.
*/
    ParticipantTypeObject,
};

/**
 * This class serves as the base class for participants in both encounters and encounter templates.
 */
@interface AbstractParticipant : BaseIdObject

// -- Attributes --

/**
 * This is a hexadecimal number of 6 or 8 characters that specifies the respective RGB or RGBA
 * color value.
 */
@property (nonatomic, copy) NSString *color;
/**
 * A serialized representation of the health data for the participant. This is represented as NSData
 * because of the differences of some game systems on how damage/health is tracked.
 */
@property (nonatomic, copy) NSData *healthData;
/**
 * This value represents an identifier for the participant, usually as a result of importing the data
 * from an external system, such as DDI character files or iPlay4e XML.
 */
@property (nonatomic, copy) NSString *externalKey;
/**
 * A serialized representation of the token image for this particpant. This data is used when drawing the
 * token for this participant on the map.
 */
@property (nonatomic, copy) NSData *image;
/**
 * A string value that is used for the participant's token if there is no image data.
 */
@property (nonatomic, copy) NSString *marker;
/**
 * A string containing notes about the participant.
 */
@property (nonatomic, copy) NSString *notes;
/**
 * An integer value representing the particpant's position in the encounter order. Game systems where
 * participants act in turn would use this value.
 */
@property (nonatomic, assign) NSInteger order;
/**
 * The "size" of the participant, visually. This is generally a scalar value relative to a grid square on
 * the map, where 1 represents a single square, 2 represents two squares on a side, and so on.
 */
@property (nonatomic, assign) NSUInteger size;
/**
 * ???
 */
@property (nonatomic, copy) NSString *summary;
/**
 * A tag value used for the participant. This value is only relevant for "adversary" types, and is used to
 * display a badge on the participant's token when the name is the same as other adversary participants in
 * the encounter. This is useful when groups of the same adversary are placed in the encounter in order to
 * differentiate one from another.
 */
@property (nonatomic, copy) NSString *tag;
/**
 * The type of the participant
 * @see ParticipantType
 */
@property (nonatomic, assign) ParticipantType type;
/**
 * The X position (as a Cartesian coordinate) for the participant on the map. This value, in combination with Y and Z, is used to determine
 * if the participant falls within a region or location on the map.
 */
@property (nonatomic, assign) NSInteger x;
/**
 * The Y position (as a Cartesian coordinate) for the participant on the map. This value, in combination with X and Z, is used to determine
 * if the participant falls within a region or location on the map.
 */
@property (nonatomic, assign) NSInteger y;
/**
 * The Z position (as a Cartesian coordinate) for the participant on the map. This value, in combination with X and Y, is used to determine
 * if the participant falls within a region or location on the map.
 */
@property (nonatomic, assign) NSInteger z;

// -- Relationships --

/**
 *
 */
@property (nonatomic, copy) NSArray<Condition*>* conditions;

@end
