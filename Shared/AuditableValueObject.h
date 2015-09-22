//
//  AuditableValueObject.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;


/**
 * An abstract class for value objects that provides properties for 'auditability'.
 */
@interface AuditableValueObject : NSObject

/**
 * Stores the date the object was created. Defaults to the current date when the object is 
 * initialized.
 */
@property (nonatomic, assign) NSTimeInterval created;

/**
 * Stores the date the object was last modified. Defaults to the same date as `created` when
 * the object is initialized.
 */
@property (nonatomic, assign) NSTimeInterval modified;

@end
