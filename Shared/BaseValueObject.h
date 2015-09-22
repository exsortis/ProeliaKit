//
//  BaseValueObject.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/22/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

#import "NamedValueObject.h"


/**
 * A common base value object that also provides a property for storing notes.
 */
@interface BaseValueObject : NamedValueObject

/**
 * Stores an arbitrary string of notes for the object.
 */
@property (nonatomic, nonnull, copy) NSString *notes;

@end
