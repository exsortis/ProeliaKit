//
//  NamedValueObject.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/17/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "IdValueObject.h"


/**
 * An abstract class for value objects that provides a property for storing a name.
 */
@interface NamedValueObject : IdValueObject

/**
 * Designated initializer for initializing this object. A name must be provided.
 */
- (nonnull instancetype)initWithName:(nonnull NSString*)name
NS_DESIGNATED_INITIALIZER;

/**
 * Stores the name of the object.
 */
@property (nonatomic, nonnull, copy) NSString *name;

@end
