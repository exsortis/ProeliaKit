//
//  AbstractMapLocation.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;


/**
 * This class serves as the base class for map location in both map locations and map location templates.
 */
@interface AbstractMapLocation : NSObject

// -- Attributes --

/**
 *
 */
@property (nonatomic, assign) NSInteger width;
/**
 *
 */
@property (nonatomic, assign) NSInteger height;
/**
 *
 */
@property (nonatomic, assign) NSInteger depth;
/**
 *
 */
@property (nonatomic, assign) NSInteger x;
/**
 *
 */
@property (nonatomic, assign) NSInteger y;
/**
 *
 */
@property (nonatomic, assign) NSInteger z;

// -- Relationships --

@end
