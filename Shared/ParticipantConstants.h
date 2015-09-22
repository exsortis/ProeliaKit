//
//  ParticipantConstants.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/21/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;


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
     * The participant is unaligned with either side, but generally controlled by the game master.
     */
    ParticipantTypeNeutral,
    /**
     * The participant is an object, such as a trap, prop, or other (usually) neutral thing that is a
     * significant part of the encounter.
     */
    ParticipantTypeObject,
};

