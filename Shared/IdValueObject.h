//
//  IdValueObject.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "AuditableValueObject.h"


@interface IdValueObject : AuditableValueObject

/**
 *
 */
@property (nonatomic, nonnull, copy) NSString *uuid;

@end
