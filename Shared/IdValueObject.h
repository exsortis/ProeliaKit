//
//  IdValueObject.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AuditableValueObject.h"


/**
 * An abstract class for value objects that provides a property for identity.
 */
@interface IdValueObject : AuditableValueObject

/**
 * A string version of a UUID. Defaults to a random UUID when the object is initialized.
 */
@property (nonatomic, nonnull, copy) NSString *uuid;

@end
