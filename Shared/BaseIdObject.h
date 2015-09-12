//
//  BaseIdObject.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "Auditable.h"


@interface BaseIdObject : Auditable

/**
 *
 */
@property (nonatomic, copy) NSString *name;
/**
 *
 */
@property (nonatomic, copy) NSString *uuid;

@end
