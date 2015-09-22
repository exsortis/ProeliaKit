//
//  NamedValueObject.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/17/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "IdValueObject.h"


@interface NamedValueObject : IdValueObject

- (nonnull instancetype)initWithName:(nonnull NSString*)name
NS_DESIGNATED_INITIALIZER;

/**
 *
 */
@property (nonatomic, nonnull, copy) NSString *name;
/**
 *
 */
@property (nonatomic, nonnull, copy) NSString *notes;

@end
